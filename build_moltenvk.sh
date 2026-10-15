#!/bin/bash
# ==============================================================================
# Kitten Space Agency (KSA) - Patched MoltenVK Builder for macOS Apple Silicon
#
# Why this is required:
# 1. KSA's atmosphere, cloud, and planet shaders use up to 10 Vulkan Descriptor
#    Sets simultaneously (sets 0..9). Upstream SPIRV-Cross hardcodes
#    kMaxArgumentBuffers = 8, causing Descriptor Sets 8 & 9 to fall back to
#    discrete Metal buffer bindings and collide with [[buffer(1)]] / [[buffer(4)]].
# 2. If any shader fails to compile, MoltenVK returns VK_NULL_HANDLE (0) and
#    subsequently segfaults in MVKCmdBindGraphicsPipeline::isTessellationPipeline().
# ==============================================================================
set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
OUTPUT_DIR="${1:-${SCRIPT_DIR}/dist}"
MVK_DIR="${2:-${SCRIPT_DIR}/deps/MoltenVK}"

mkdir -p "${OUTPUT_DIR}" "$(dirname "${MVK_DIR}")"

if [ ! -d "${MVK_DIR}" ]; then
    echo "==> Cloning KhronosGroup/MoltenVK..."
    git clone --depth 1 https://github.com/KhronosGroup/MoltenVK.git "${MVK_DIR}"
fi

cd "${MVK_DIR}"

if [ ! -d "External/SPIRV-Cross" ]; then
    echo "==> Fetching MoltenVK macOS dependencies..."
    ./fetchDependencies --macos
fi

echo "==> Applying SPIRV-Cross kMaxArgumentBuffers = 16 patch..."
sed -i '' 's/kMaxArgumentBuffers = 8;/kMaxArgumentBuffers = 16;/g' External/SPIRV-Cross/spirv_msl.hpp
sed -i '' 's/kMaxArgumentBuffers = 9;/kMaxArgumentBuffers = 16;/g' External/SPIRV-Cross/spirv_msl.hpp
grep -n "kMaxArgumentBuffers =" External/SPIRV-Cross/spirv_msl.hpp

echo "==> Applying MoltenVK null-pipeline guard patch..."
git apply --check "${SCRIPT_DIR}/patches/moltenvk-pipeline-null-guard.patch" 2>/dev/null && \
    git apply "${SCRIPT_DIR}/patches/moltenvk-pipeline-null-guard.patch" || \
    echo "    (Null-pipeline guard patch already applied)"

echo "==> Rebuilding SPIRV-Cross & ExternalDependencies-macOS..."
xcodebuild build \
    -project "ExternalDependencies.xcodeproj" \
    -scheme "ExternalDependencies-macOS" \
    -destination "generic/platform=macOS" \
    -configuration "Release" \
    -derivedDataPath "./External/build/Intermediates/macOS" \
    -quiet

./Scripts/create_ext_lib_xcframeworks.sh

echo "==> Building patched libMoltenVK.dylib..."
make macos

cp "Package/Release/MoltenVK/dynamic/dylib/macOS/libMoltenVK.dylib" "${OUTPUT_DIR}/libMoltenVK.dylib"
install_name_tool -id "@loader_path/libMoltenVK.dylib" "${OUTPUT_DIR}/libMoltenVK.dylib"
codesign -f -s - "${OUTPUT_DIR}/libMoltenVK.dylib"

echo "==> Patched libMoltenVK.dylib built successfully at: ${OUTPUT_DIR}/libMoltenVK.dylib"

