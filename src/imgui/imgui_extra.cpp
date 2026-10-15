// Native trampolines expected by Brutal.ImGui's Interop.CreateTrampoline():
//   1) exported data symbol  Platform_<Name>_ManagedFunctionPointer  (slot the managed side fills in)
//   2) exported function     Get_<Name>_InteropPointer()            (returns the native callback for ImGuiPlatformIO)
#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"
#include "imgui_internal.h"

#define EXPORT extern "C" __attribute__((visibility("default")))

#define TRAMPOLINE_VP_VEC2(NAME)                                                                   \
    EXPORT ImVec2 (*Platform_##NAME##_ManagedFunctionPointer)(ImGuiViewport*) = nullptr;           \
    static ImVec2 Platform_##NAME##_Trampoline(ImGuiViewport* vp) {                                \
        return Platform_##NAME##_ManagedFunctionPointer ? Platform_##NAME##_ManagedFunctionPointer(vp) : ImVec2(0, 0); \
    }                                                                                              \
    EXPORT void* Get_##NAME##_InteropPointer(void) { return (void*)&Platform_##NAME##_Trampoline; }

TRAMPOLINE_VP_VEC2(GetWindowPos)
TRAMPOLINE_VP_VEC2(GetWindowSize)
TRAMPOLINE_VP_VEC2(GetWindowFramebufferScale)
