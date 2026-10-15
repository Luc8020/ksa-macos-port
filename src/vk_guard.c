#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <dlfcn.h>

typedef void* VkInstance;
typedef void* VkDevice;
typedef void* VkCommandBuffer;
typedef uint64_t VkPipeline;
typedef void (*PFN_vkVoidFunction)(void);

typedef PFN_vkVoidFunction (*PFN_vkGetInstanceProcAddr)(VkInstance, const char*);
typedef PFN_vkVoidFunction (*PFN_vkGetDeviceProcAddr)(VkDevice, const char*);
typedef void (*PFN_vkCmdBindPipeline)(VkCommandBuffer, int, VkPipeline);
typedef void (*PFN_vkCmdDraw)(VkCommandBuffer, uint32_t, uint32_t, uint32_t, uint32_t);
typedef void (*PFN_vkCmdDrawIndexed)(VkCommandBuffer, uint32_t, uint32_t, uint32_t, int32_t, uint32_t);
typedef void (*PFN_vkCmdDrawIndirect)(VkCommandBuffer, uint64_t, uint64_t, uint32_t, uint32_t);
typedef void (*PFN_vkCmdDrawIndexedIndirect)(VkCommandBuffer, uint64_t, uint64_t, uint32_t, uint32_t);

static PFN_vkCmdBindPipeline real_vkCmdBindPipeline = NULL;
static PFN_vkCmdDraw real_vkCmdDraw = NULL;
static PFN_vkCmdDrawIndexed real_vkCmdDrawIndexed = NULL;
static PFN_vkCmdDrawIndirect real_vkCmdDrawIndirect = NULL;
static PFN_vkCmdDrawIndexedIndirect real_vkCmdDrawIndexedIndirect = NULL;
static PFN_vkGetInstanceProcAddr real_vkGetInstanceProcAddr = NULL;
static PFN_vkGetDeviceProcAddr real_vkGetDeviceProcAddr = NULL;

// Merkt sich pro Thread, ob die zuletzt gebundene Graphics/Compute-Pipeline NULL war
static _Thread_local int skip_graphics_draws = 0;
static _Thread_local int skip_compute_draws = 0;
static int logged_null_pipeline = 0;

static void hooked_vkCmdBindPipeline(VkCommandBuffer cmd, int bindPoint, VkPipeline pipeline) {
    if (pipeline == 0) {
        if (!logged_null_pipeline) {
            fprintf(stderr, "[VK_GUARD] WARNUNG: vkCmdBindPipeline(bindPoint=%d, pipeline=NULL) abgefangen! Verhindere Crash.\n", bindPoint);
            logged_null_pipeline = 1;
        }
        if (bindPoint == 0) skip_graphics_draws = 1;
        else if (bindPoint == 1) skip_compute_draws = 1;
        return;
    }
    if (bindPoint == 0) skip_graphics_draws = 0;
    else if (bindPoint == 1) skip_compute_draws = 0;
    if (real_vkCmdBindPipeline) real_vkCmdBindPipeline(cmd, bindPoint, pipeline);
}

static void hooked_vkCmdDraw(VkCommandBuffer cmd, uint32_t vc, uint32_t ic, uint32_t fv, uint32_t fi) {
    if (skip_graphics_draws) return;
    if (real_vkCmdDraw) real_vkCmdDraw(cmd, vc, ic, fv, fi);
}

static void hooked_vkCmdDrawIndexed(VkCommandBuffer cmd, uint32_t ic, uint32_t instc, uint32_t fi, int32_t vo, uint32_t finst) {
    if (skip_graphics_draws) return;
    if (real_vkCmdDrawIndexed) real_vkCmdDrawIndexed(cmd, ic, instc, fi, vo, finst);
}

static void hooked_vkCmdDrawIndirect(VkCommandBuffer cmd, uint64_t buf, uint64_t off, uint32_t dc, uint32_t stride) {
    if (skip_graphics_draws) return;
    if (real_vkCmdDrawIndirect) real_vkCmdDrawIndirect(cmd, buf, off, dc, stride);
}

static void hooked_vkCmdDrawIndexedIndirect(VkCommandBuffer cmd, uint64_t buf, uint64_t off, uint32_t dc, uint32_t stride) {
    if (skip_graphics_draws) return;
    if (real_vkCmdDrawIndexedIndirect) real_vkCmdDrawIndexedIndirect(cmd, buf, off, dc, stride);
}

static PFN_vkVoidFunction wrap_proc(const char* name, PFN_vkVoidFunction fn) {
    if (!name || !fn) return fn;
    if (strcmp(name, "vkCmdBindPipeline") == 0) { real_vkCmdBindPipeline = (PFN_vkCmdBindPipeline)fn; return (PFN_vkVoidFunction)hooked_vkCmdBindPipeline; }
    if (strcmp(name, "vkCmdDraw") == 0) { real_vkCmdDraw = (PFN_vkCmdDraw)fn; return (PFN_vkVoidFunction)hooked_vkCmdDraw; }
    if (strcmp(name, "vkCmdDrawIndexed") == 0) { real_vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed)fn; return (PFN_vkVoidFunction)hooked_vkCmdDrawIndexed; }
    if (strcmp(name, "vkCmdDrawIndirect") == 0) { real_vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect)fn; return (PFN_vkVoidFunction)hooked_vkCmdDrawIndirect; }
    if (strcmp(name, "vkCmdDrawIndexedIndirect") == 0) { real_vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect)fn; return (PFN_vkVoidFunction)hooked_vkCmdDrawIndexedIndirect; }
    return fn;
}

PFN_vkVoidFunction vkGetDeviceProcAddr(VkDevice device, const char* pName) {
    if (!real_vkGetDeviceProcAddr) real_vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)dlsym(RTLD_NEXT, "vkGetDeviceProcAddr");
    PFN_vkVoidFunction fn = real_vkGetDeviceProcAddr ? real_vkGetDeviceProcAddr(device, pName) : NULL;
    if (pName && strcmp(pName, "vkGetDeviceProcAddr") == 0) return (PFN_vkVoidFunction)vkGetDeviceProcAddr;
    return wrap_proc(pName, fn);
}

PFN_vkVoidFunction vkGetInstanceProcAddr(VkInstance instance, const char* pName) {
    if (!real_vkGetInstanceProcAddr) real_vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr)dlsym(RTLD_NEXT, "vkGetInstanceProcAddr");
    PFN_vkVoidFunction fn = real_vkGetInstanceProcAddr ? real_vkGetInstanceProcAddr(instance, pName) : NULL;
    if (pName && strcmp(pName, "vkGetInstanceProcAddr") == 0) return (PFN_vkVoidFunction)vkGetInstanceProcAddr;
    if (pName && strcmp(pName, "vkGetDeviceProcAddr") == 0) { real_vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr)fn; return (PFN_vkVoidFunction)vkGetDeviceProcAddr; }
    return wrap_proc(pName, fn);
}
