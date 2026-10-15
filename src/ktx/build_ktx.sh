#!/bin/bash
# ==============================================================================
# Builds libktx_real.dylib (from Khronos KTX-Software v4.4.2) and libKtx.dylib
# (the RocketWerkz "1"-suffixed C wrapper required by Brutal.Ktx.dll).
# ==============================================================================
set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
REPO_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"
OUTPUT_DIR="${1:-${REPO_ROOT}/dist}"
KTX_DIR="${2:-${REPO_ROOT}/deps/ktx}"

mkdir -p "${OUTPUT_DIR}"

# 1. Clone & build upstream KTX-Software v4.4.2 if not already built
if [ ! -f "${KTX_DIR}/build/libktx.dylib" ] && [ ! -f "${KTX_DIR}/build/Release/libktx.dylib" ]; then
    mkdir -p "$(dirname "${KTX_DIR}")"
    if [ ! -d "${KTX_DIR}" ]; then
        echo "==> Cloning KhronosGroup/KTX-Software (v4.4.2)..."
        git clone --depth 1 --branch v4.4.2 --recurse-submodules --shallow-submodules \
            https://github.com/KhronosGroup/KTX-Software.git "${KTX_DIR}"
    fi
    echo "==> Building KTX-Software (libktx.dylib)..."
    cmake -S "${KTX_DIR}" -B "${KTX_DIR}/build" \
        -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_OSX_ARCHITECTURES=arm64 \
        -DKTX_FEATURE_TOOLS=OFF \
        -DKTX_FEATURE_TESTS=OFF \
        -DKTX_FEATURE_LOADTEST_APPS=OFF \
        -DKTX_FEATURE_STATIC_LIBRARY=OFF \
        -DKTX_FEATURE_GL_UPLOAD=OFF \
        -DKTX_FEATURE_VK_UPLOAD=OFF \
        -DKTX_FEATURE_DOC=OFF \
        -DKTX_FEATURE_JNI=OFF \
        -DKTX_FEATURE_PY=OFF
    cmake --build "${KTX_DIR}/build" --config Release -j"$(sysctl -n hw.ncpu)" --target ktx
fi

# Locate built libktx.dylib
if [ -f "${KTX_DIR}/build/Release/libktx.dylib" ]; then
    KTX_BUILT="${KTX_DIR}/build/Release/libktx.dylib"
else
    KTX_BUILT="${KTX_DIR}/build/libktx.dylib"
fi

# 2. Copy upstream library as libktx_real.dylib (avoids APFS case-insensitive collision with libKtx.dylib)
cp -L "${KTX_BUILT}" "${OUTPUT_DIR}/libktx_real.dylib"
chmod +w "${OUTPUT_DIR}/libktx_real.dylib"
install_name_tool -id "@loader_path/libktx_real.dylib" "${OUTPUT_DIR}/libktx_real.dylib"
codesign -f -s - "${OUTPUT_DIR}/libktx_real.dylib"

# 3. Compile RocketWerkz wrapper (libKtx.dylib) linked against libktx_real.dylib
clang -O2 -DNDEBUG -shared -fPIC -arch arm64 -w \
    -I"${KTX_DIR}/include" \
    "${SCRIPT_DIR}/ktx_wrap.c" \
    -L"${OUTPUT_DIR}" -lktx_real \
    -Wl,-install_name,@loader_path/libKtx.dylib \
    -o "${OUTPUT_DIR}/libKtx.dylib"
codesign -f -s - "${OUTPUT_DIR}/libKtx.dylib"

echo "==> Built libktx_real.dylib & libKtx.dylib (exports: $(nm -gU "${OUTPUT_DIR}/libKtx.dylib" | grep -c '1$'))"
