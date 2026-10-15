#!/usr/bin/env python3
"""
Kitten Space Agency (KSA) - macOS Apple Silicon (.NET 10 ARM64) Assembly & Runtime Patcher

What this script does inside a KSA Linux game folder:
1. Reads KSA.deps.json to identify the bundled Linux x64 .NET runtime DLLs
   (runtimepack.Microsoft.NETCore.App.Runtime.linux-x64) and moves ONLY those
   into backup_dlls/, while preserving required NuGet assemblies such as
   Microsoft.Extensions.*.dll, System.CommandLine.dll, and System.IO.Hashing.dll.
2. Renames KSA.deps.json -> KSA.deps.json.bak so the macOS .NET host does not
   fail searching for the linux-x64 runtimepack.
3. Updates KSA.runtimeconfig.json from a self-contained config ("includedFrameworks")
   to a framework-dependent config ("frameworks") targeting macOS .NET 10.0.
4. Patches PE32+ (64-bit) game assemblies (such as KSA.dll) from AMD64 (0x8664)
   to ARM64 (0xAA64), sets COMIMAGE_FLAGS_ILONLY, and strips any ReadyToRun (R2R)
   native code header so the macOS ARM64 CoreCLR JIT compiles the IL natively.
"""

import glob
import json
import os
import shutil
import struct
import sys

GAME_DIR = os.path.abspath(sys.argv[1]) if len(sys.argv) > 1 else os.getcwd()
BACKUP_DIR = os.path.join(GAME_DIR, "backup_dlls")
os.makedirs(BACKUP_DIR, exist_ok=True)

# 1. Identify Linux runtimepack DLLs from KSA.deps.json (or KSA.deps.json.bak)
deps_path = os.path.join(GAME_DIR, "KSA.deps.json")
deps_bak_path = os.path.join(GAME_DIR, "KSA.deps.json.bak")
active_deps = deps_path if os.path.exists(deps_path) else (deps_bak_path if os.path.exists(deps_bak_path) else None)

linux_runtime_dlls = {
    "mscorlib.dll",
    "netstandard.dll",
    "WindowsBase.dll",
    "System.dll",
    "Microsoft.CSharp.dll",
    "Microsoft.VisualBasic.Core.dll",
    "Microsoft.VisualBasic.dll",
    "Microsoft.Win32.Primitives.dll",
    "Microsoft.Win32.Registry.dll",
}

app_nuget_dlls = {
    "System.CommandLine.dll",
    "System.IO.Hashing.dll",
}

if active_deps:
    with open(active_deps, "r", encoding="utf-8") as f:
        deps_data = json.load(f)
    targets = list(deps_data.get("targets", {}).values())
    if targets:
        for key, val in targets[-1].items():
            if "runtimepack.microsoft.netcore.app" in key.lower():
                for rt_file in val.get("runtime", {}).keys():
                    linux_runtime_dlls.add(os.path.basename(rt_file))
            else:
                for rt_file in val.get("runtime", {}).keys():
                    app_nuget_dlls.add(os.path.basename(rt_file))

# Restore any app NuGet DLLs if a user previously moved all System.*/Microsoft.* by mistake
for dll_name in sorted(app_nuget_dlls):
    if dll_name == "KSA.dll":
        continue
    src_in_backup = os.path.join(BACKUP_DIR, dll_name)
    dst_in_game = os.path.join(GAME_DIR, dll_name)
    if os.path.exists(src_in_backup) and not os.path.exists(dst_in_game):
        shutil.copy2(src_in_backup, dst_in_game)
        print(f"[RESTORE] Restored NuGet assembly from backup_dlls: {dll_name}")

# Move bundled Linux .NET runtime DLLs out of the game folder into backup_dlls/
moved_count = 0
for path in sorted(glob.glob(os.path.join(GAME_DIR, "*.dll"))):
    dll_name = os.path.basename(path)
    if dll_name in app_nuget_dlls or dll_name.startswith("Microsoft.Extensions."):
        continue
    if dll_name in linux_runtime_dlls or dll_name.startswith("System."):
        shutil.move(path, os.path.join(BACKUP_DIR, dll_name))
        moved_count += 1

if moved_count > 0:
    print(f"[CLEANUP] Moved {moved_count} Linux x64 .NET runtime DLLs to backup_dlls/")

# 2. Disable KSA.deps.json so macOS .NET does not look for linux-x64 runtimepack
if os.path.exists(deps_path):
    shutil.move(deps_path, deps_bak_path)
    print("[CONFIG]  Renamed KSA.deps.json -> KSA.deps.json.bak")

# 3. Rewrite KSA.runtimeconfig.json for shared macOS .NET 10.0 runtime
rtconfig_path = os.path.join(GAME_DIR, "KSA.runtimeconfig.json")
rtconfig_bak_path = os.path.join(GAME_DIR, "KSA.runtimeconfig.json.bak")
if os.path.exists(rtconfig_path) and not os.path.exists(rtconfig_bak_path):
    shutil.copy2(rtconfig_path, rtconfig_bak_path)

runtimeconfig_content = {
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
            "System.Reflection.Metadata.MetadataUpdater.IsSupported": False,
            "System.Runtime.Serialization.EnableUnsafeBinaryFormatterSerialization": False
        }
    }
}
with open(rtconfig_path, "w", encoding="utf-8") as f:
    json.dump(runtimeconfig_content, f, indent=2)
    f.write("\n")
print("[CONFIG]  Updated KSA.runtimeconfig.json for macOS .NET 10.0 (rollForward: LatestMinor)")

# 4. Patch PE32+ (64-bit) game assemblies (e.g., KSA.dll) to ARM64 (0xAA64) + ILONLY
for path in sorted(glob.glob(os.path.join(GAME_DIR, "*.dll"))):
    dll_name = os.path.basename(path)
    with open(path, "rb") as f:
        data = bytearray(f.read())

    if len(data) < 0x100 or data[:2] != b"MZ":
        continue

    pe_offset = struct.unpack_from("<I", data, 0x3C)[0]
    if pe_offset + 26 > len(data) or data[pe_offset:pe_offset + 4] != b"PE\x00\x00":
        continue

    machine = struct.unpack_from("<H", data, pe_offset + 4)[0]
    magic = struct.unpack_from("<H", data, pe_offset + 24)[0]

    # PE32+ (64-bit header = 0x20B): must have Machine == 0xAA64 (ARM64) on Apple Silicon
    if magic == 0x20B and machine in (0x8664, 0x014C, 0xAA64):
        backup_target = os.path.join(BACKUP_DIR, dll_name)
        if not os.path.exists(backup_target):
            shutil.copy2(path, backup_target)

        # Set COFF Machine type to IMAGE_FILE_MACHINE_ARM64 (0xAA64)
        struct.pack_into("<H", data, pe_offset + 4, 0xAA64)

        # Locate CLR Header DataDirectory (Index 14 in PE32+ is at pe_offset + 24 + 112 + 14*8)
        clr_rva, clr_size = struct.unpack_from("<II", data, pe_offset + 24 + 112 + 112)
        if clr_rva > 0:
            num_sections = struct.unpack_from("<H", data, pe_offset + 6)[0]
            opt_hdr_size = struct.unpack_from("<H", data, pe_offset + 20)[0]
            sec_offset = pe_offset + 24 + opt_hdr_size
            for i in range(num_sections):
                v_size, v_addr, r_size, r_ptr = struct.unpack_from("<IIII", data, sec_offset + i * 40 + 8)
                if v_addr <= clr_rva < v_addr + max(v_size, r_size):
                    clr_file_offset = r_ptr + (clr_rva - v_addr)
                    # Set CLR Flags to 1 (COMIMAGE_FLAGS_ILONLY) & zero ManagedNativeHeader (R2R)
                    struct.pack_into("<I", data, clr_file_offset + 16, 1)
                    struct.pack_into("<II", data, clr_file_offset + 64, 0, 0)
                    break

        with open(path, "wb") as f:
            f.write(data)
        print(f"[PATCH]   Patched PE32+ assembly to ARM64 (0xAA64, IL-only): {dll_name}")

print("[DONE]    .NET assemblies and runtime configuration are ready for macOS ARM64!")