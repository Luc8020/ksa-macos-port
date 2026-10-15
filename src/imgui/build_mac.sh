#!/bin/bash
# Baut libimgui.dylib und libimplot.dylib (arm64) für den KSA-Mac-Port.
set -e
cd "$(dirname "$0")"

[ -d imgui ]   || git clone -q --depth 1 --branch v1.92.2-docking https://github.com/ocornut/imgui imgui
[ -d implot ]  || git clone -q --branch v0.17 --depth 1 https://github.com/epezent/implot implot

DEFS="-DNDEBUG -DIMGUI_USE_WCHAR32 -DIMGUI_DISABLE_OBSOLETE_FUNCTIONS -DIMPLOT_DISABLE_OBSOLETE_FUNCTIONS"
FL="-O2 -std=c++17 -fPIC -arch arm64 -w -Wno-return-type-c-linkage $DEFS"

clang++ $FL -Iimgui -dynamiclib \
  -Wl,-install_name,@loader_path/libimgui.dylib -o libimgui.dylib \
  imgui/imgui.cpp imgui/imgui_draw.cpp imgui/imgui_tables.cpp imgui/imgui_widgets.cpp imgui/imgui_demo.cpp \
  imgui_wrap.cpp imgui_extra.cpp

clang++ $FL -Iimgui -Iimplot -dynamiclib \
  -Wl,-install_name,@loader_path/libimplot.dylib -o libimplot.dylib \
  implot/implot.cpp implot/implot_items.cpp implot/implot_demo.cpp \
  implot_wrap.cpp -L. -limgui

echo "imgui exports:  $(nm -gU libimgui.dylib  | grep -c ' T _[A-Za-z]')"
echo "implot exports: $(nm -gU libimplot.dylib | grep -c ' T _[A-Za-z]')"
