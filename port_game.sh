#!/bin/bash
# ==============================================================================
# Kitten Space Agency (KSA) - Automated Linux-to-macOS Game Folder Converter
#
# Usage:
#   ./port_game.sh /path/to/ksa_linux_v2026.x.x.xxxx [dist_dir]
# ==============================================================================
set -e

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
GAME_DIR="${1}"
DIST_DIR="${2:-${SCRIPT_DIR}/dist}"

if [ -z "${GAME_DIR}" ] || [ ! -f "${GAME_DIR}/KSA.dll" ]; then
    echo "Usage: ./port_game.sh /path/to/ksa_linux_folder [dist_dir]"
    echo "Error: Target folder must contain KSA.dll."
    exit 1
fi

GAME_DIR="$(cd "${GAME_DIR}" && pwd)"
echo "==> Converting KSA Linux folder to macOS Apple Silicon (ARM64): ${GAME_DIR}"

# 1. Patch .NET assemblies, runtimeconfig.json, deps.json, and clean Linux x64 runtime DLLs
echo "==> [1/5] Patching .NET 10.0 assemblies & runtime configuration..."
python3 "${SCRIPT_DIR}/patch_anycpu.py" "${GAME_DIR}"

# 2. Copy native macOS dylibs from dist/
echo "==> [2/5] Installing native ARM64 dylibs from ${DIST_DIR}..."
if [ ! -f "${DIST_DIR}/libstb.dylib" ] || [ ! -f "${DIST_DIR}/libKtx.dylib" ]; then
    echo "    dist/ libraries not found; running ./build_all.sh first..."
    bash "${SCRIPT_DIR}/build_all.sh" "${DIST_DIR}"
fi

cp -P "${DIST_DIR}"/*.dylib "${GAME_DIR}/"

if [ ! -f "${GAME_DIR}/libMoltenVK.dylib" ]; then
    echo "    WARNING: libMoltenVK.dylib not found in ${DIST_DIR}."
    echo "             Run ./build_moltenvk.sh \"${DIST_DIR}\" to build the patched MoltenVK."
fi

# 3. Locate & install FMOD Engine for macOS dylibs if not already in GAME_DIR
echo "==> [3/5] Checking FMOD Engine audio libraries..."
if [ ! -f "${GAME_DIR}/libfmod.dylib" ] || [ ! -f "${GAME_DIR}/libfmodstudio.dylib" ]; then
    for FMOD_API in \
        "/Volumes/FMOD Programmers API Mac/FMOD Programmers API/api" \
        "/Applications/FMOD Programmers API/api" \
        "/Applications/FMOD SoundSystem/FMOD Studio API Mac/api"; do
        if [ -f "${FMOD_API}/core/lib/libfmod.dylib" ]; then
            echo "    Found FMOD API at: ${FMOD_API}"
            cp "${FMOD_API}/core/lib/libfmod.dylib" "${FMOD_API}/core/lib/libfmodL.dylib" "${GAME_DIR}/"
            cp "${FMOD_API}/studio/lib/libfmodstudio.dylib" "${FMOD_API}/studio/lib/libfmodstudioL.dylib" "${GAME_DIR}/"
            break
        fi
    done
fi

if [ -f "${GAME_DIR}/libfmodstudio.dylib" ]; then
    chmod +w "${GAME_DIR}"/libfmod*.dylib
    install_name_tool -add_rpath "@loader_path" "${GAME_DIR}/libfmodstudio.dylib" 2>/dev/null || true
    [ -f "${GAME_DIR}/libfmodstudioL.dylib" ] && \
        install_name_tool -add_rpath "@loader_path" "${GAME_DIR}/libfmodstudioL.dylib" 2>/dev/null || true
else
    echo "    WARNING: libfmod.dylib / libfmodstudio.dylib not found!"
    echo "             Download 'FMOD Engine 2.03.xx for macOS' from https://www.fmod.com/download,"
    echo "             mount the .dmg, and re-run this script (or copy libfmod*.dylib into the game folder)."
fi

# 4. Install MoltenVK ICD manifest and launcher script
echo "==> [4/5] Installing MoltenVK_icd.json and start_mac.command..."
cp "${SCRIPT_DIR}/MoltenVK_icd.json" "${GAME_DIR}/MoltenVK_icd.json"
cp "${SCRIPT_DIR}/start_mac.command" "${GAME_DIR}/start_mac.command"
chmod +x "${GAME_DIR}/start_mac.command"

# 5. Clear macOS quarantine & ad-hoc sign all dylibs
echo "==> [5/5] Removing macOS quarantine attributes & ad-hoc signing dylibs..."
xattr -cr "${GAME_DIR}/start_mac.command" "${GAME_DIR}/MoltenVK_icd.json" "${GAME_DIR}"/*.dylib "${GAME_DIR}"/*.dll 2>/dev/null || true
for f in "${GAME_DIR}"/*.dylib; do
    if [ -f "$f" ] && [ ! -L "$f" ]; then
        codesign -f -s - "$f" 2>/dev/null || true
    fi
done

echo ""
echo "==> Conversion complete! Launch the game with:"
echo "    cd \"${GAME_DIR}\" && ./start_mac.command"

