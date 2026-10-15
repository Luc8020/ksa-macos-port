# Kitten Space Agency (KSA) — Native macOS Apple Silicon Port & Toolkit

[![Platform](https://img.shields.io/badge/Platform-macOS%20Apple%20Silicon%20(arm64)-black.svg?logo=apple)](https://apple.com)
[![Runtime](https://img.shields.io/badge/.NET-10.0%20(arm64)-purple.svg?logo=dotnet)](https://dotnet.microsoft.com)
[![Graphics](https://img.shields.io/badge/Graphics-Vulkan%201.4%20%E2%86%92%20Metal%203%20(MoltenVK)-orange.svg?logo=vulkan)](https://github.com/KhronosGroup/MoltenVK)
[![License](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)

Complete toolkit, native C/C++ wrappers, compiler patches, and step-by-step documentation to convert and run the Linux build of **Kitten Space Agency (KSA)** (`v2026.10.13.5602+`) **100% natively on macOS Apple Silicon (M1 / M2 / M3 / M4)** — with **all graphics features enabled** (Atmosphere, Volumetric Clouds, Cloud Shadows, Terrain Shadows, Godrays, Ground Clutter, Vessel Cascade Shadows, and FMOD Audio) and zero x86 emulation (no Rosetta 2, no Wine/CrossOver).

---

## Table of Contents
1. [Quick Start for Players (Pre-Ported Game Folder / ZIP)](#1-quick-start-for-players-pre-ported-game-folder--zip)
2. [Automated Porting Guide (From a Clean Linux Build)](#2-automated-porting-guide-from-a-clean-linux-build)
3. [Complete Manual Step-by-Step Tutorial (Deep Dive)](#3-complete-manual-step-by-step-tutorial-deep-dive)
   - [Step 1: Converting the .NET 10.0 Runtime & Patching PE32+ Assemblies](#step-1-converting-the-net-100-runtime--patching-pe32-assemblies)
   - [Step 2: Building Native C/C++ Helper Libraries (`stb`, `VulkanEx`, `vma`, `gli`)](#step-2-building-native-cc-helper-libraries-stb-vulkanex-vma-gli)
   - [Step 3: Building Dear ImGui (`v1.92.2-docking`) & ImPlot (`v0.17`)](#step-3-building-dear-imgui-v1922-docking--implot-v017)
   - [Step 4: Building KTX-Software (`v4.4.2`) & Solving the APFS Case-Insensitivity Trap](#step-4-building-ktx-software-v442--solving-the-apfs-case-insensitivity-trap)
   - [Step 5: Adding Native FMOD Engine Audio Libraries (`2.03.xx`)](#step-5-adding-native-fmod-engine-audio-libraries-203xx)
   - [Step 6: Patching SPIRV-Cross & MoltenVK (`kMaxArgumentBuffers = 16`)](#step-6-patching-spirv-cross--moltenvk-kmaxargumentbuffers--16)
   - [Step 7: Making the Game Folder Self-Contained (`@loader_path` & `codesign`)](#step-7-making-the-game-folder-self-contained-loader_path--codesign)
4. [Repository Structure](#4-repository-structure)
5. [Porting Future Game Updates](#5-porting-future-game-updates)
6. [Troubleshooting & FAQ](#6-troubleshooting--faq)
7. [Disclaimer](#7-disclaimer)

---

## 1. Quick Start for Players (Pre-Ported Game Folder / ZIP)

If someone shared an already-converted macOS game folder (`.zip` / `.tar.gz`) with you, all native `.dylib` libraries are already bundled inside the game folder. You only need to do **3 things**:

### Step 1: Install .NET 10.0 Runtime (Apple Silicon `arm64`)
KSA targets **.NET 10.0 (`net10.0`)**. Install the official macOS Arm64 `.NET 10` runtime or SDK:
- **Via Homebrew (recommended):**
  ```bash
  brew install --cask dotnet-sdk
  ```
- **Or via Microsoft's Official Installer:**  
  Download the **.NET 10.0 Arm64 `.pkg` installer** from [dotnet.microsoft.com/download/dotnet/10.0](https://dotnet.microsoft.com/download/dotnet/10.0).

Verify that `.NET 10.0` is visible:
```bash
dotnet --list-runtimes
# Must list: Microsoft.NETCore.App 10.0.x [/usr/local/share/dotnet/shared/Microsoft.NETCore.App]
```

### Step 2: Remove the macOS Gatekeeper Quarantine Attribute
When you download a `.zip` from a browser, Discord, or AirDrop, macOS attaches the `com.apple.quarantine` attribute to every file inside and blocks unsigned `.dylib` libraries from loading. Clear it once in Terminal:
```bash
cd /path/to/ksa_linux_v2026.10.13.5602
xattr -cr .
```

### Step 3: Launch the Game
Double-click **`start_mac.command`** in Finder, or run it from Terminal:
```bash
./start_mac.command
```

---

## 2. Automated Porting Guide (From a Clean Linux Build)

If you have the original, unmodified Linux archive of KSA (e.g., `ksa_linux_v2026.10.13.5602.tar`) and want to convert it into a standalone macOS Apple Silicon version automatically using the scripts in this repository:

### Step 1: Install Build Prerequisites
Ensure Xcode Command Line Tools (`xcode-select --install`), **Xcode.app** (needed once to compile MoltenVK's `ExternalDependencies.xcodeproj`), and [Homebrew](https://brew.sh) are installed, then run:
```bash
brew install --cask dotnet-sdk
brew install cmake glfw molten-vk vulkan-headers vulkan-loader shaderc spirv-tools glm
```

### Step 2: Download FMOD Engine for macOS (`v2.03.xx`)
FMOD is proprietary redistributable middleware and cannot be compiled from source:
1. Go to [fmod.com/download](https://www.fmod.com/download) (free account required).
2. Download **FMOD Engine → `2.03.xx` (e.g., `2.03.08` or `2.03.15`) → macOS** (`fmodstudioapi203xxmac-installer.dmg`).
3. Double-click the downloaded `.dmg` so it mounts at `/Volumes/FMOD Programmers API Mac` (our `port_game.sh` script detects this volume automatically).

### Step 3: Clone This Repository & Build Native Libraries
```bash
git clone https://github.com/Luc8020/ksa-macos-port.git
cd ksa-macos-port

# 1. Compile all native helper libraries (libstb, libVulkanEx, libvma, libgli, libimgui, libimplot, libKtx)
#    and bundle Homebrew runtime dylibs into ./dist
./build_all.sh

# 2. Clone, patch (kMaxArgumentBuffers = 16 + null-pipeline guard), and compile libMoltenVK.dylib into ./dist
./build_moltenvk.sh
```

### Step 4: Convert Your Extracted Linux KSA Folder
```bash
# Extract the original Linux archive if you haven't already:
mkdir -p ~/Games/KSA_Mac
tar -xf ~/Downloads/ksa_linux_v2026.10.13.5602.tar -C ~/Games/KSA_Mac

# Run the automated converter:
./port_game.sh ~/Games/KSA_Mac
```

### Step 5: Play!
```bash
cd ~/Games/KSA_Mac
./start_mac.command
```

---

## 3. Complete Manual Step-by-Step Tutorial (Deep Dive)

This section explains **every single technical barrier** between the Linux x64 release of KSA and macOS Apple Silicon, and how to perform each conversion step manually.

```
┌────────────────────────────────────────────────────────────────────┐
│                   KSA Game Engine (C# / .NET 10.0)                 │
│     KSA.dll patched: PE32+ Machine 0x8664 (AMD64) → 0xAA64 (ARM64) │
└───────────────┬────────────────────────────────────┬───────────────┘
                │ (P/Invoke / LibraryImport)         │ (.NET 10 JIT)
                ▼                                    ▼
┌───────────────────────────────────┐  ┌─────────────────────────────┐
│ Native ARM64 Helper Dylibs        │  │ macOS ARM64 CoreCLR Runtime │
│ • libstb.dylib / libgli.dylib     │  │ (172 Linux x64 R2R runtime  │
│ • libVulkanEx.dylib / libvma.dylib│  │  DLLs removed from folder)  │
│ • libimgui.dylib / libimplot.dylib│  └─────────────────────────────┘
│ • libKtx.dylib → libktx_real.dylib│
│ • libfmod.dylib / libfmodstudio   │
└───────────────┬───────────────────┘
                │ (Vulkan 1.4 API via libvulkan.1.dylib + MoltenVK_icd.json)
                ▼
┌────────────────────────────────────────────────────────────────────┐
│     Patched libMoltenVK.dylib + SPIRV-Cross                        │
│     • kMaxArgumentBuffers = 16 (supports Descriptor Sets 0..9)     │
│     • Null-pipeline guards in MVKCmdPipeline.mm                    │
└───────────────┬────────────────────────────────────────────────────┘
                │ (Metal Shading Language / Argument Buffers)
                ▼
┌────────────────────────────────────────────────────────────────────┐
│                    Apple Metal 3 (Apple Silicon GPU)               │
└────────────────────────────────────────────────────────────────────┘
```

---

### Step 1: Converting the .NET 10.0 Runtime & Patching PE32+ Assemblies

#### Why `dotnet KSA.dll` Fails Out of the Box
The official Linux archive (`ksa_linux_v2026.10.13.5602.tar`) is published as a **self-contained `linux-x64` `.NET 10.0` deployment**. This causes four immediate problems on macOS ARM64:

1. **`KSA.runtimeconfig.json` uses `"includedFrameworks"`:** This tells the `.NET` host to look for a self-contained runtime inside the current folder instead of the system-wide macOS `.NET 10.0` installation.
2. **`KSA.deps.json` requires `runtimepack.Microsoft.NETCore.App.Runtime.linux-x64/10.0.10`:** When the macOS `.NET` host reads `KSA.deps.json`, it aborts if the `linux-x64` runtimepack is missing or mismatched.
3. **172 Bundled Linux x64 ReadyToRun (R2R) Framework DLLs:** The root folder contains 172 `.NETCore.App` DLLs (`System.*.dll`, `Microsoft.CSharp.dll`, `Microsoft.VisualBasic*.dll`, `Microsoft.Win32.*.dll`, `mscorlib.dll`, `netstandard.dll`, `WindowsBase.dll`) compiled with Linux x86_64 ReadyToRun native code (`machine=0x8664` / `0xFD1D`). If left in the game directory, macOS `.NET` loads them instead of its own ARM64 framework assemblies and crashes with `System.BadImageFormatException`.
   - **⚠️ Critical Trap:** You must **NOT** blindly delete `System.*.dll` and `Microsoft.*.dll`! Of the 228 `.dll` files in the root directory, **15 files matching those prefixes are actually pure-IL NuGet dependencies of the game** that are *not* part of `Microsoft.NETCore.App`:
     - `System.CommandLine.dll`
     - `System.IO.Hashing.dll`
     - 13 `Microsoft.Extensions.*.dll` assemblies (`Configuration`, `DependencyInjection`, `Logging`, `ObjectPool`, `Options`, `Primitives`, etc.)
     If you delete those 15 files, the game will fail with `FileNotFoundException` unless you restore them from `backup_dlls/` or NuGet!
4. **`KSA.dll` Has `IMAGE_FILE_MACHINE_AMD64` (`0x8664`) in its PE32+ COFF Header:**
   - All 55 library/engine DLLs (`Brutal.*.dll`, `Planet.*.dll`, `BepuPhysics.dll`, etc.) are 32-bit PE32 (`magic=0x10B`) AnyCPU assemblies (`machine=0x014C`).
   - However, `KSA.dll` is a 64-bit **PE32+ (`magic=0x20B`)** assembly with COFF `Machine = 0x8664` (`AMD64`).
   - **⚠️ Critical Trap:** On macOS ARM64 `.NET 10`, patching a 64-bit `PE32+` (`0x20B`) assembly to `0x014C` (`I386`) still fails with `BadImageFormatException`! A `PE32+` (`0x20B`) assembly on Apple Silicon **must have `Machine = 0xAA64` (`IMAGE_FILE_MACHINE_ARM64`)** at `pe_offset + 4` (with `COMIMAGE_FLAGS_ILONLY = 1` and its ReadyToRun `ManagedNativeHeader` zeroed out).

#### How `patch_anycpu.py` Fixes All Four Issues Automatically
Run [`patch_anycpu.py`](patch_anycpu.py) against your game folder:
```bash
python3 patch_anycpu.py /path/to/ksa_linux_v2026.10.13.5602
```
What it does under the hood:
1. Parses `KSA.deps.json` (`runtimepack.Microsoft.NETCore.App.Runtime.linux-x64`) and moves **only** the 172 Linux `.NET` runtime DLLs into `backup_dlls/`, preserving `System.CommandLine.dll`, `System.IO.Hashing.dll`, and all 13 `Microsoft.Extensions.*.dll` files.
2. Renames `KSA.deps.json` $\rightarrow$ `KSA.deps.json.bak`.
3. Replaces `KSA.runtimeconfig.json` with a framework-dependent configuration:
   ```json
   {
     "runtimeOptions": {
       "tfm": "net10.0",
       "frameworks": [
         {
           "name": "Microsoft.NETCore.App",
           "version": "10.0.0"
         }
       ],
       "rollForward": "LatestMinor",
       "configProperties": {
         "System.Reflection.Metadata.MetadataUpdater.IsSupported": false,
         "System.Runtime.Serialization.EnableUnsafeBinaryFormatterSerialization": false
       }
     }
   }
   ```
4. Rewrites `KSA.dll`'s COFF `Machine` field (`offset 0x84..0x85`) from `0x8664` (`AMD64`) to `0xAA64` (`ARM64`), sets `COR20_FLAGS = 0x1` (`ILONLY`), and zeroes the ReadyToRun directory.

---

### Step 2: Building Native C/C++ Helper Libraries (`stb`, `VulkanEx`, `vma`, `gli`)

KSA's `Brutal.*` C# interop assemblies (`Brutal.Stb.dll`, `Brutal.Vulkan.dll`, `Brutal.Vulkan.Vma.dll`, `Brutal.Gli.dll`) P/Invoke into custom native helper libraries. On macOS ARM64, compile them with `-DNDEBUG` (critical: without `-DNDEBUG`, internal C++ `assert()` checks inside VMA and GLI abort the process during gameplay):

#### 2.1 `libstb.dylib` (`src/stb.c`)
Compiles `stb_image.h` and `stb_image_write.h` into a shared library:
```bash
clang -O2 -DNDEBUG -shared -fPIC -arch arm64 \
  -Wl,-install_name,@loader_path/libstb.dylib \
  -o dist/libstb.dylib src/stb.c
```

#### 2.2 `libVulkanEx.dylib` (`src/vulkanex.c`)
Implements RocketWerkz's batch Vulkan handle creation/destruction helpers (`vkCreateSAMPLER`, `vkDestroySAMPLER`, `vkDestroyIMAGE`, `vkDestroyBUFFER`, etc.):
```bash
clang -O2 -DNDEBUG -shared -fPIC -arch arm64 \
  -I/opt/homebrew/include -L/opt/homebrew/lib -lvulkan \
  -Wl,-install_name,@loader_path/libVulkanEx.dylib \
  -o dist/libVulkanEx.dylib src/vulkanex.c
```

#### 2.3 `libvma.dylib` (`src/vma.cpp`)
Compiles `VulkanMemoryAllocator` (`VMA_VULKAN_VERSION 1004000`) along with RocketWerkz's custom convenience exports (`vmaCreateDedicatedBuffer`, `vmaCreateDedicatedImage`, `vmaAllocateDedicatedMemory`, `vmaGetPhysicalDeviceProperties`, `vmaGetMemoryProperties`):
```bash
git clone --depth 1 https://github.com/GPUOpen-LibrariesAndSDKs/VulkanMemoryAllocator.git deps/vma
clang++ -O2 -DNDEBUG -std=c++17 -shared -fPIC -arch arm64 -w \
  -I deps/vma/include -I /opt/homebrew/include -L/opt/homebrew/lib -lvulkan \
  -Wl,-install_name,@loader_path/libvma.dylib \
  -o dist/libvma.dylib src/vma.cpp
```

#### 2.4 `libgli.dylib` (`src/gli_wrap.cpp`)
Wraps `g-truc/gli` (`createEmpty`, `create`, `load`, `loadFromMemory`, `imagedata`, `rowpitch`, `blocksize`, `iscompressed`, etc.) for `Brutal.Gli.dll`:
```bash
git clone --depth 1 https://github.com/g-truc/gli.git deps/gli
clang++ -O2 -DNDEBUG -std=c++17 -shared -fPIC -arch arm64 -DGLM_ENABLE_EXPERIMENTAL -w \
  -I deps/gli -I /opt/homebrew/include \
  -Wl,-install_name,@loader_path/libgli.dylib \
  -o dist/libgli.dylib src/gli_wrap.cpp
```

---

### Step 3: Building Dear ImGui (`v1.92.2-docking`) & ImPlot (`v0.17`)

`Brutal.ImGui.dll` and `Brutal.ImPlot.dll` bind to a custom C wrapper around **Dear ImGui `v1.92.2-docking`** and **ImPlot `v0.17`** compiled with 32-bit wide characters (`-DIMGUI_USE_WCHAR32`) and `-DNDEBUG`:

```bash
cd src/imgui
bash build_mac.sh
cp libimgui.dylib libimplot.dylib ../../dist/
```
This clones `ocornut/imgui` (`v1.92.2-docking`) and `epezent/implot` (`v0.17`), compiles them with `imgui_wrap.cpp`, `imgui_extra.cpp`, and `implot_wrap.cpp`, and exports all **1,050 ImGui functions** and **301 ImPlot functions** expected by KSA.

---

### Step 4: Building KTX-Software (`v4.4.2`) & Solving the APFS Case-Insensitivity Trap

`Brutal.Ktx.dll` P/Invokes `[LibraryImport("Ktx")]` (which resolves to `libKtx.dylib` on macOS) and calls functions suffixed with `1` (e.g., `ktxTexture_CreateFromNamedFile1`, `ktxTexture2_TranscodeBasis1`, `ktx_FreeWriteToMemoryBuffer1`).

Two macOS-specific pitfalls occur here:
1. **The APFS Case-Insensitivity Collision:**  
   macOS's default APFS file system is case-insensitive (`libktx.dylib` and `libKtx.dylib` refer to the exact same file!). If you put upstream `libktx.dylib` and the wrapper `libKtx.dylib` in the same folder, one overwrites the other.
   - **Solution:** Name the upstream Khronos library **`libktx_real.dylib`** (`install_name_tool -id @loader_path/libktx_real.dylib`) and link the wrapper **`libKtx.dylib`** against `-lktx_real`.
2. **Path Backslash & Non-Null-Terminated Span Sanitization (`src/ktx/ktx_wrap.c`):**  
   When KSA loads planetary `.ktx2` textures via `ktxTexture_CreateFromNamedFile1`, C# occasionally passes Windows-style backslashes (`\`) or a `ReadOnlySpan<byte>` buffer that is not null-terminated immediately after `.ktx2`. Our wrapper in [`src/ktx/ktx_wrap.c`](src/ktx/ktx_wrap.c) normalizes `\` $\rightarrow$ `/` and cleanly null-terminates after `.ktx2`.

Build both `libktx_real.dylib` and `libKtx.dylib` via:
```bash
bash src/ktx/build_ktx.sh dist deps/ktx
```

---

### Step 5: Adding Native FMOD Engine Audio Libraries (`2.03.xx`)

The Linux release ships `libfmod.so.14.8` and `libfmodstudio.so.14.8` (FMOD Studio API `2.03`).
1. Download **FMOD Engine `2.03.xx` for macOS** (`fmodstudioapi203xxmac-installer.dmg`) from [fmod.com/download](https://www.fmod.com/download).
2. Mount the `.dmg` and copy the 4 universal (`arm64` + `x86_64`) dylibs into the game directory:
   ```bash
   API="/Volumes/FMOD Programmers API Mac/FMOD Programmers API/api"
   cp "$API/core/lib/libfmod.dylib" "$API/core/lib/libfmodL.dylib" /path/to/game/
   cp "$API/studio/lib/libfmodstudio.dylib" "$API/studio/lib/libfmodstudioL.dylib" /path/to/game/
   ```
3. Add `@loader_path` to `libfmodstudio.dylib`'s RPATH so it finds `libfmod.dylib` in the game directory:
   ```bash
   install_name_tool -add_rpath @loader_path /path/to/game/libfmodstudio.dylib
   install_name_tool -add_rpath @loader_path /path/to/game/libfmodstudioL.dylib
   ```

---

### Step 6: Patching SPIRV-Cross & MoltenVK (`kMaxArgumentBuffers = 16`)

This is the most important fix required to run KSA with **all shaders and graphics settings enabled**.

#### Root Cause 1: Descriptor Set Overflow (`kMaxArgumentBuffers = 8`)
KSA's planet, cloud, and atmosphere shaders bind up to **10 Vulkan Descriptor Sets simultaneously** (`set = 0` through `set = 9`; for example, `ATMOSPHERE_DATA_SET = 8` in `RaymarchCloud.comp` and `PLANET_TEXTURE_SET = 9` in `StaticObject.frag`, `GaugeCanvas.frag`, `Display.frag`, and `Vessel.frag`).

Upstream `SPIRV-Cross` (bundled inside `MoltenVK`) hardcodes:
```cpp
// External/SPIRV-Cross/spirv_msl.hpp
static const uint32_t kMaxArgumentBuffers = 8;
```
Because `kMaxArgumentBuffers` is `8` (covering only sets `0..7`), whenever a shader uses Descriptor Set `8` or `9`, `SPIRV-Cross` fails to assign it a Metal Argument Buffer and falls back to discrete `[[buffer(N)]]` bindings starting at `[[buffer(1)]]`. That immediately collides with Descriptor Set 1's Argument Buffer (`spvDescriptorSet1 [[buffer(1)]]`) or Descriptor Set 4's Argument Buffer (`[[buffer(4)]]`), causing Metal shader compilation to fail:
```text
program_source:2636:632: error: cannot reserve 'buffer' resource location at index 1
kernel void main0(
    constant spvDescriptorSetBuffer0& spvDescriptorSet0 [[buffer(0)]],
    constant spvDescriptorSetBuffer1& spvDescriptorSet1 [[buffer(1)]],
    ...
    constant AtmosphereDataUbo& atmosphereDataUbo [[buffer(1)]], // <-- BUFFER INDEX COLLISION!
```

#### Root Cause 2: Null-Pipeline Dereference Crash in `MVKCmdPipeline.mm`
If any compute or graphics pipeline fails to compile, MoltenVK returns `VK_NULL_HANDLE` (`0x0`). When KSA subsequently calls `vkCmdBindPipeline(cmdBuf, bindPoint, VK_NULL_HANDLE)`, MoltenVK dereferences the null `_pipeline` pointer in `MVKCmdBindGraphicsPipeline::isTessellationPipeline()`, crashing the entire game with `SIGSEGV` (`KERN_INVALID_ADDRESS at 0x5d7`).

#### How to Build the Patched `libMoltenVK.dylib`
Run [`./build_moltenvk.sh`](build_moltenvk.sh), or execute these steps manually:
```bash
git clone --depth 1 https://github.com/KhronosGroup/MoltenVK.git deps/MoltenVK
cd deps/MoltenVK
./fetchDependencies --macos

# 1. Increase kMaxArgumentBuffers from 8 to 16 in SPIRV-Cross (Metal supports 31 buffers per stage)
sed -i '' 's/kMaxArgumentBuffers = 8;/kMaxArgumentBuffers = 16;/g' External/SPIRV-Cross/spirv_msl.hpp

# 2. Apply null-pipeline safety guards in MoltenVK/MoltenVK/Commands/MVKCmdPipeline.mm
git apply ../../patches/moltenvk-pipeline-null-guard.patch

# 3. Rebuild SPIRV-Cross static archives & package SPIRVCross.xcframework
xcodebuild build \
  -project "ExternalDependencies.xcodeproj" \
  -scheme "ExternalDependencies-macOS" \
  -destination "generic/platform=macOS" \
  -configuration "Release" \
  -derivedDataPath "./External/build/Intermediates/macOS" \
  -quiet
./Scripts/create_ext_lib_xcframeworks.sh

# 4. Build MoltenVK for macOS
make macos

# 5. Copy the resulting dylib into your game folder
cp Package/Release/MoltenVK/dynamic/dylib/macOS/libMoltenVK.dylib /path/to/game/
```

---

### Step 7: Making the Game Folder Self-Contained (`@loader_path` & `codesign`)

To ensure the game runs on any Apple Silicon Mac without requiring Homebrew or global environment variables:
1. **`MoltenVK_icd.json`** uses a relative path (`"./libMoltenVK.dylib"`) so the Vulkan Loader (`libvulkan.1.dylib`) always loads the patched `libMoltenVK.dylib` from the game directory rather than an unpatched Homebrew MoltenVK.
2. **`start_mac.command`** sets:
   - `DYLD_LIBRARY_PATH` and `DYLD_FALLBACK_LIBRARY_PATH` to the game folder (`$DIR`)
   - `VK_ICD_FILENAMES="$DIR/MoltenVK_icd.json"` and `VK_DRIVER_FILES="$DIR/MoltenVK_icd.json"`
   - `MVK_CONFIG_USE_METAL_ARGUMENT_BUFFERS=1` (enables Metal Argument Buffers for all descriptor sets)
   - `MVK_CONFIG_FAST_MATH_ENABLED=1`
3. **Ad-hoc Code Signing (`codesign`):**  
   Whenever `install_name_tool` modifies a Mach-O `.dylib` on Apple Silicon, its code signature is invalidated, causing macOS `amfid` to kill the process with `SIGKILL (Killed: 9)`. Always re-sign modified `.dylib` files:
   ```bash
   for f in /path/to/game/*.dylib; do
     [ -L "$f" ] || codesign -f -s - "$f"
   done
   ```

---

## 4. Repository Structure

```text
ksa-macos-port/
├── README.md                  # Complete English documentation & step-by-step tutorial
├── LICENSE                    # MIT License
├── build_all.sh               # Builds all native C/C++ dylibs & bundles Homebrew runtime libs
├── build_moltenvk.sh          # Clones, patches (kMaxArgumentBuffers=16), and builds libMoltenVK.dylib
├── port_game.sh               # All-in-one converter for a fresh Linux KSA game directory
├── patch_anycpu.py            # Cleans Linux x64 runtime DLLs, updates configs, patches KSA.dll to ARM64
├── pecheck.py                 # Diagnostic utility to inspect PE/CLR headers of .dll files
├── start_mac.command          # Double-clickable macOS game launcher script
├── MoltenVK_icd.json          # Vulkan ICD manifest pointing to ./libMoltenVK.dylib
├── patches/
│   ├── spirv-cross-kMaxArgumentBuffers.patch   # Increases Metal Argument Buffer limit from 8 to 16
│   └── moltenvk-pipeline-null-guard.patch      # Prevents SIGSEGV if a pipeline handle is null
└── src/
    ├── stb.c                  # STB Image / Image Write compilation unit
    ├── stb_image.h            # stb_image v2.30 header
    ├── stb_image_write.h      # stb_image_write v1.16 header
    ├── vulkanex.c             # RocketWerkz Vulkan batch creation/destruction extensions
    ├── vma.cpp                # Vulkan Memory Allocator (Vulkan 1.4) + custom dedicated helpers
    ├── gli_wrap.cpp           # C ABI wrapper around OpenGL Image (GLI)
    ├── vk_guard.c             # Optional Vulkan API interception layer for debugging
    ├── ktx/
    │   ├── build_ktx.sh       # Builds libktx_real.dylib (v4.4.2) and wrapper libKtx.dylib
    │   └── ktx_wrap.c         # RocketWerkz "1"-suffixed KTX wrapper + path sanitizer
    └── imgui/
        ├── build_mac.sh       # Clones & builds Dear ImGui (v1.92.2-docking) & ImPlot (v0.17)
        ├── imgui_wrap.cpp     # C ABI wrapper for Brutal.ImGui.dll (1,050 exports)
        ├── imgui_extra.cpp    # Custom ImGui extensions required by KSA
        └── implot_wrap.cpp    # C ABI wrapper for Brutal.ImPlot.dll (301 exports)
```

---

## 5. Porting Future Game Updates

When RocketWerkz releases a newer Linux version of KSA:
1. Extract the new Linux `.tar` archive into a folder.
2. Run:
   ```bash
   ./port_game.sh /path/to/new_ksa_linux_folder
   ```
   That's it! `port_game.sh` will automatically strip the bundled Linux x64 `.NET` runtime DLLs, update `KSA.runtimeconfig.json`, patch the new `KSA.dll` binary to `ARM64` (`0xAA64`), copy all native `.dylib` libraries, and sign the bundle.

---

## 6. Troubleshooting & FAQ

### Q: `You must install or update .NET to run this application. Framework: 'Microsoft.NETCore.App', version '10.0.0'`
**A:** You have `.NET 8` or `.NET 9` installed, or you installed the `x64` version instead of `arm64`. KSA requires **.NET 10.0 (`arm64`)**. Run:
```bash
brew install --cask dotnet-sdk
```

### Q: `System.BadImageFormatException: Could not load file or assembly '.../KSA.dll'`
**A:** Either:
1. `KSA.dll` still has `Machine = 0x8664` (`AMD64`) or `0x014C` (`I386`) in its PE32+ header instead of `0xAA64` (`ARM64`), OR
2. Bundled Linux x64 `System.*.dll` files are still sitting in the game folder.  
Run `python3 patch_anycpu.py /path/to/game` to fix both automatically.

### Q: `System.IO.FileNotFoundException: Could not load file or assembly 'Microsoft.Extensions.DependencyInjection.Abstractions...'` (or `System.CommandLine` / `System.IO.Hashing`)
**A:** You manually deleted all `System.*.dll` and `Microsoft.*.dll` files, which accidentally removed the 15 NuGet assemblies required by KSA. Run `python3 patch_anycpu.py /path/to/game` — it automatically restores those 15 NuGet DLLs from `backup_dlls/`.

### Q: Shader error `cannot reserve 'buffer' resource location at index 1` (or `index 4`)
**A:** The Vulkan Loader is loading an unpatched `libMoltenVK.dylib` (e.g., from `/opt/homebrew/lib/libMoltenVK.dylib`) instead of the patched one with `kMaxArgumentBuffers = 16`. Always launch the game via `./start_mac.command` so `VK_DRIVER_FILES` and `VK_ICD_FILENAMES` point to `./MoltenVK_icd.json`.

### Q: `GLFW Error: PlatformError Raw mouse motion is not supported on this system`
**A:** Harmless log message from GLFW on macOS. Cocoa does not use X11 raw mouse motion; GLFW automatically uses standard macOS cursor deltas and mouse look works normally.

### Q: macOS terminates the process immediately with `Killed: 9` (`SIGKILL`)
**A:** Apple Silicon enforces mandatory code signing on all native ARM64 Mach-O binaries. Clear quarantine attributes and re-sign all `.dylib` files:
```bash
xattr -cr /path/to/game
for f in /path/to/game/*.dylib; do [ -L "$f" ] || codesign -f -s - "$f"; done
```

---

## 7. Disclaimer

**Kitten Space Agency (KSA)** is developed and owned by **RocketWerkz**. This repository is an unofficial, independent community compatibility toolkit and contains **no proprietary game code, no original `.dll` binaries, no FMOD binaries, and no copyrighted game assets**. You must own or download an official copy of Kitten Space Agency to use this toolkit.
