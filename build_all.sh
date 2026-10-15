#!/bin/bash
# ==============================================================================
# Kitten Space Agency (KSA) - Native macOS Build & Porting Script
# Builds all native ARM64 dylibs and bundles runtime dependencies into dist/
# ==============================================================================
set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
OUTPUT_DIR="${1:-${SCRIPT_DIR}/dist}"

mkdir -p "${OUTPUT_DIR}" "${SCRIPT_DIR}/deps"
echo "==> Building KSA macOS native components into: ${OUTPUT_DIR}"

# 1. Check prerequisites
for cmd in clang clang++ git cmake dotnet install_name_tool codesign; do
    if ! command -v "$cmd" &> /dev/null; then
        echo "Error: Required tool '$cmd' is not installed."
        exit 1
    fi
done

if [ ! -d "/opt/homebrew/include" ] || [ ! -d "/opt/homebrew/lib" ]; then
    echo "Error: Homebrew (/opt/homebrew) not found. Please install Apple Silicon Homebrew and run:"
    echo "  brew install cmake glfw molten-vk vulkan-headers vulkan-loader shaderc spirv-tools glm"
    exit 1
fi

# 2. Build libstb.dylib
echo "==> [1/7] Compiling libstb.dylib..."
clang -O2 -DNDEBUG -shared -fPIC -arch arm64 \
    -Wl,-install_name,@loader_path/libstb.dylib \
    -o "${OUTPUT_DIR}/libstb.dylib" "${SCRIPT_DIR}/src/stb.c"
codesign -f -s - "${OUTPUT_DIR}/libstb.dylib"

# 3. Build libVulkanEx.dylib
echo "==> [2/7] Compiling libVulkanEx.dylib..."
clang -O2 -DNDEBUG -shared -fPIC -arch arm64 \
    -I/opt/homebrew/include -L/opt/homebrew/lib -lvulkan \
    -Wl,-install_name,@loader_path/libVulkanEx.dylib \
    -o "${OUTPUT_DIR}/libVulkanEx.dylib" "${SCRIPT_DIR}/src/vulkanex.c"
install_name_tool -change /opt/homebrew/opt/vulkan-loader/lib/libvulkan.1.dylib @loader_path/libvulkan.1.dylib "${OUTPUT_DIR}/libVulkanEx.dylib" 2>/dev/null || true
install_name_tool -change /opt/homebrew/lib/libvulkan.1.dylib @loader_path/libvulkan.1.dylib "${OUTPUT_DIR}/libVulkanEx.dylib" 2>/dev/null || true
codesign -f -s - "${OUTPUT_DIR}/libVulkanEx.dylib"

# 4. Build libvma.dylib
echo "==> [3/7] Compiling libvma.dylib..."
if [ ! -d "${SCRIPT_DIR}/deps/vma" ]; then
    git clone --depth 1 https://github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator.git "${SCRIPT_DIR}/deps/vma"
fi
clang++ -O2 -DNDEBUG -std=c++17 -shared -fPIC -arch arm64 -w \
    -I "${SCRIPT_DIR}/deps/vma/include" -I /opt/homebrew/include \
    -L/opt/homebrew/lib -lvulkan \
    -Wl,-install_name,@loader_path/libvma.dylib \
    -o "${OUTPUT_DIR}/libvma.dylib" "${SCRIPT_DIR}/src/vma.cpp"
install_name_tool -change /opt/homebrew/opt/vulkan-loader/lib/libvulkan.1.dylib @loader_path/libvulkan.1.dylib "${OUTPUT_DIR}/libvma.dylib" 2>/dev/null || true
install_name_tool -change /opt/homebrew/lib/libvulkan.1.dylib @loader_path/libvulkan.1.dylib "${OUTPUT_DIR}/libvma.dylib" 2>/dev/null || true
codesign -f -s - "${OUTPUT_DIR}/libvma.dylib"

# 5. Build libgli.dylib
echo "==> [4/7] Compiling libgli.dylib..."
if [ ! -d "${SCRIPT_DIR}/deps/gli" ]; then
    git clone --depth 1 https://github.com/g-truc/gli.git "${SCRIPT_DIR}/deps/gli"
fi
clang++ -O2 -DNDEBUG -std=c++17 -shared -fPIC -arch arm64 -DGLM_ENABLE_EXPERIMENTAL -w \
    -I "${SCRIPT_DIR}/deps/gli" -I /opt/homebrew/include \
    -Wl,-install_name,@loader_path/libgli.dylib \
    -o "${OUTPUT_DIR}/libgli.dylib" "${SCRIPT_DIR}/src/gli_wrap.cpp"
codesign -f -s - "${OUTPUT_DIR}/libgli.dylib"

# 6. Build libimgui.dylib & libimplot.dylib
echo "==> [5/7] Compiling libimgui.dylib & libimplot.dylib..."
(
    cd "${SCRIPT_DIR}/src/imgui"
    bash build_mac.sh
    cp libimgui.dylib libimplot.dylib "${OUTPUT_DIR}/"
    codesign -f -s - "${OUTPUT_DIR}/libimgui.dylib" "${OUTPUT_DIR}/libimplot.dylib"
)

# 7. Build libktx_real.dylib & libKtx.dylib
echo "==> [6/7] Compiling libktx_real.dylib & libKtx.dylib..."
bash "${SCRIPT_DIR}/src/ktx/build_ktx.sh" "${OUTPUT_DIR}" "${SCRIPT_DIR}/deps/ktx"

# 8. Bundle Homebrew runtime dylibs & rewrite install names to @loader_path
echo "==> [7/7] Bundling Homebrew runtime dylibs (GLFW, Vulkan Loader, Shaderc, SPIRV-Tools)..."
cp -L /opt/homebrew/lib/libglfw.3.dylib "${OUTPUT_DIR}/libglfw.3.dylib"
cp -L /opt/homebrew/lib/libvulkan.1.dylib "${OUTPUT_DIR}/libvulkan.1.dylib"
cp -L /opt/homebrew/lib/libshaderc_shared.1.dylib "${OUTPUT_DIR}/libshaderc_shared.1.dylib"
cp -L /opt/homebrew/lib/libSPIRV-Tools-shared.dylib "${OUTPUT_DIR}/libSPIRV-Tools-shared.dylib"

chmod +w "${OUTPUT_DIR}/libglfw.3.dylib" \
         "${OUTPUT_DIR}/libvulkan.1.dylib" \
         "${OUTPUT_DIR}/libshaderc_shared.1.dylib" \
         "${OUTPUT_DIR}/libSPIRV-Tools-shared.dylib"

ln -sf libglfw.3.dylib "${OUTPUT_DIR}/libglfw.dylib"
ln -sf libvulkan.1.dylib "${OUTPUT_DIR}/libvulkan.dylib"
ln -sf libshaderc_shared.1.dylib "${OUTPUT_DIR}/libshaderc_shared.dylib"

install_name_tool -id "@loader_path/libglfw.3.dylib" "${OUTPUT_DIR}/libglfw.3.dylib"
install_name_tool -id "@loader_path/libvulkan.1.dylib" "${OUTPUT_DIR}/libvulkan.1.dylib"
install_name_tool -id "@loader_path/libshaderc_shared.1.dylib" "${OUTPUT_DIR}/libshaderc_shared.1.dylib"
install_name_tool -id "@loader_path/libSPIRV-Tools-shared.dylib" "${OUTPUT_DIR}/libSPIRV-Tools-shared.dylib"

codesign -f -s - \
    "${OUTPUT_DIR}/libglfw.3.dylib" \
    "${OUTPUT_DIR}/libvulkan.1.dylib" \
    "${OUTPUT_DIR}/libshaderc_shared.1.dylib" \
    "${OUTPUT_DIR}/libSPIRV-Tools-shared.dylib"

echo ""
echo "==> All helper & runtime dylibs built successfully in: ${OUTPUT_DIR}"
echo "    Next steps:"
echo "      1. Build patched MoltenVK (once): ./build_moltenvk.sh \"${OUTPUT_DIR}\""
echo "      2. Apply port to a Linux KSA folder: ./port_game.sh /path/to/ksa_linux_folder"
