// generated: C wrappers matching Brutal.implot P/Invoke names
#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"
#include "imgui_internal.h"
#include "implot.h"
#include "implot_internal.h"
#include <stdarg.h>
#define EXPORT extern "C" __attribute__((visibility("default")))

EXPORT bool ImPlotRange_Contains(ImPlotRange *target, double a0) { return target->Contains(a0); }
EXPORT double ImPlotRange_Size(ImPlotRange *target) { return target->Size(); }
EXPORT double ImPlotRange_Clamp(ImPlotRange *target, double a0) { return target->Clamp(a0); }
EXPORT bool ImPlotRect_Contains_0(ImPlotRect *target, const ImPlotPoint *a0) { return target->Contains(*a0); }
EXPORT bool ImPlotRect_Contains_1(ImPlotRect *target, double a0, double a1) { return target->Contains(a0, a1); }
EXPORT ImPlotPoint ImPlotRect_Size(ImPlotRect *target) { return target->Size(); }
EXPORT ImPlotPoint ImPlotRect_Clamp_0(ImPlotRect *target, const ImPlotPoint *a0) { return target->Clamp(*a0); }
EXPORT ImPlotPoint ImPlotRect_Clamp_1(ImPlotRect *target, double a0, double a1) { return target->Clamp(a0, a1); }
EXPORT ImPlotPoint ImPlotRect_Min(ImPlotRect *target) { return target->Min(); }
EXPORT ImPlotPoint ImPlotRect_Max(ImPlotRect *target) { return target->Max(); }
EXPORT ImPlotContext * CreateContext(void) { return ImPlot::CreateContext(); }
EXPORT void DestroyContext(ImPlotContext * a0) { ImPlot::DestroyContext(a0); }
EXPORT ImPlotContext * GetCurrentContext(void) { return ImPlot::GetCurrentContext(); }
EXPORT void SetCurrentContext(ImPlotContext * a0) { ImPlot::SetCurrentContext(a0); }
EXPORT void SetImGuiContext(ImGuiContext * a0) { ImPlot::SetImGuiContext(a0); }
EXPORT bool BeginPlot(const char * a0, const ImVec2 *a1, ImPlotFlags a2) { return ImPlot::BeginPlot(a0, *a1, a2); }
EXPORT void EndPlot(void) { ImPlot::EndPlot(); }
EXPORT bool BeginSubplots(const char * a0, int a1, int a2, const ImVec2 *a3, ImPlotSubplotFlags a4, float * a5, float * a6) { return ImPlot::BeginSubplots(a0, a1, a2, *a3, a4, a5, a6); }
EXPORT void EndSubplots(void) { ImPlot::EndSubplots(); }
EXPORT void SetupAxis(ImAxis a0, const char * a1, ImPlotAxisFlags a2) { ImPlot::SetupAxis(a0, a1, a2); }
EXPORT void SetupAxisLimits(ImAxis a0, double a1, double a2, ImPlotCond a3) { ImPlot::SetupAxisLimits(a0, a1, a2, a3); }
EXPORT void SetupAxisLinks(ImAxis a0, double * a1, double * a2) { ImPlot::SetupAxisLinks(a0, a1, a2); }
EXPORT void SetupAxisFormat_0(ImAxis a0, const char * a1) { ImPlot::SetupAxisFormat(a0, a1); }
EXPORT void SetupAxisFormat_1(ImAxis a0, ImPlotFormatter a1, void * a2) { ImPlot::SetupAxisFormat(a0, a1, a2); }
EXPORT void SetupAxisTicks_0(ImAxis a0, const double * a1, int a2, const char *const a3[], bool a4) { ImPlot::SetupAxisTicks(a0, a1, a2, a3, a4); }
EXPORT void SetupAxisTicks_1(ImAxis a0, double a1, double a2, int a3, const char *const a4[], bool a5) { ImPlot::SetupAxisTicks(a0, a1, a2, a3, a4, a5); }
EXPORT void SetupAxisScale_0(ImAxis a0, ImPlotScale a1) { ImPlot::SetupAxisScale(a0, a1); }
EXPORT void SetupAxisScale_1(ImAxis a0, ImPlotTransform a1, ImPlotTransform a2, void * a3) { ImPlot::SetupAxisScale(a0, a1, a2, a3); }
EXPORT void SetupAxisLimitsConstraints(ImAxis a0, double a1, double a2) { ImPlot::SetupAxisLimitsConstraints(a0, a1, a2); }
EXPORT void SetupAxisZoomConstraints(ImAxis a0, double a1, double a2) { ImPlot::SetupAxisZoomConstraints(a0, a1, a2); }
EXPORT void SetupAxes(const char * a0, const char * a1, ImPlotAxisFlags a2, ImPlotAxisFlags a3) { ImPlot::SetupAxes(a0, a1, a2, a3); }
EXPORT void SetupAxesLimits(double a0, double a1, double a2, double a3, ImPlotCond a4) { ImPlot::SetupAxesLimits(a0, a1, a2, a3, a4); }
EXPORT void SetupLegend(ImPlotLocation a0, ImPlotLegendFlags a1) { ImPlot::SetupLegend(a0, a1); }
EXPORT void SetupMouseText(ImPlotLocation a0, ImPlotMouseTextFlags a1) { ImPlot::SetupMouseText(a0, a1); }
EXPORT void SetupFinish(void) { ImPlot::SetupFinish(); }
EXPORT void SetNextAxisLimits(ImAxis a0, double a1, double a2, ImPlotCond a3) { ImPlot::SetNextAxisLimits(a0, a1, a2, a3); }
EXPORT void SetNextAxisLinks(ImAxis a0, double * a1, double * a2) { ImPlot::SetNextAxisLinks(a0, a1, a2); }
EXPORT void SetNextAxisToFit(ImAxis a0) { ImPlot::SetNextAxisToFit(a0); }
EXPORT void SetNextAxesLimits(double a0, double a1, double a2, double a3, ImPlotCond a4) { ImPlot::SetNextAxesLimits(a0, a1, a2, a3, a4); }
EXPORT void SetNextAxesToFit(void) { ImPlot::SetNextAxesToFit(); }
EXPORT void PlotLine_0_float(const char * a0, const float * a1, int a2, double a3, double a4, ImPlotLineFlags a5, int a6, int a7) { ImPlot::PlotLine<float>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotLine_0_double(const char * a0, const double * a1, int a2, double a3, double a4, ImPlotLineFlags a5, int a6, int a7) { ImPlot::PlotLine<double>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotLine_0_byte(const char * a0, const ImU8 * a1, int a2, double a3, double a4, ImPlotLineFlags a5, int a6, int a7) { ImPlot::PlotLine<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotLine_0_sbyte(const char * a0, const ImS8 * a1, int a2, double a3, double a4, ImPlotLineFlags a5, int a6, int a7) { ImPlot::PlotLine<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotLine_0_short(const char * a0, const ImS16 * a1, int a2, double a3, double a4, ImPlotLineFlags a5, int a6, int a7) { ImPlot::PlotLine<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotLine_0_ushort(const char * a0, const ImU16 * a1, int a2, double a3, double a4, ImPlotLineFlags a5, int a6, int a7) { ImPlot::PlotLine<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotLine_0_int(const char * a0, const ImS32 * a1, int a2, double a3, double a4, ImPlotLineFlags a5, int a6, int a7) { ImPlot::PlotLine<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotLine_0_uint(const char * a0, const ImU32 * a1, int a2, double a3, double a4, ImPlotLineFlags a5, int a6, int a7) { ImPlot::PlotLine<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotLine_0_long(const char * a0, const ImS64 * a1, int a2, double a3, double a4, ImPlotLineFlags a5, int a6, int a7) { ImPlot::PlotLine<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotLine_0_ulong(const char * a0, const ImU64 * a1, int a2, double a3, double a4, ImPlotLineFlags a5, int a6, int a7) { ImPlot::PlotLine<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotLine_1_float(const char * a0, const float * a1, const float * a2, int a3, ImPlotLineFlags a4, int a5, int a6) { ImPlot::PlotLine<float>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotLine_1_double(const char * a0, const double * a1, const double * a2, int a3, ImPlotLineFlags a4, int a5, int a6) { ImPlot::PlotLine<double>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotLine_1_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, int a3, ImPlotLineFlags a4, int a5, int a6) { ImPlot::PlotLine<ImU8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotLine_1_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, int a3, ImPlotLineFlags a4, int a5, int a6) { ImPlot::PlotLine<ImS8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotLine_1_short(const char * a0, const ImS16 * a1, const ImS16 * a2, int a3, ImPlotLineFlags a4, int a5, int a6) { ImPlot::PlotLine<ImS16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotLine_1_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, int a3, ImPlotLineFlags a4, int a5, int a6) { ImPlot::PlotLine<ImU16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotLine_1_int(const char * a0, const ImS32 * a1, const ImS32 * a2, int a3, ImPlotLineFlags a4, int a5, int a6) { ImPlot::PlotLine<ImS32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotLine_1_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, int a3, ImPlotLineFlags a4, int a5, int a6) { ImPlot::PlotLine<ImU32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotLine_1_long(const char * a0, const ImS64 * a1, const ImS64 * a2, int a3, ImPlotLineFlags a4, int a5, int a6) { ImPlot::PlotLine<ImS64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotLine_1_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, int a3, ImPlotLineFlags a4, int a5, int a6) { ImPlot::PlotLine<ImU64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotLineG(const char * a0, ImPlotGetter a1, void * a2, int a3, ImPlotLineFlags a4) { ImPlot::PlotLineG(a0, a1, a2, a3, a4); }
EXPORT void PlotScatter_0_float(const char * a0, const float * a1, int a2, double a3, double a4, ImPlotScatterFlags a5, int a6, int a7) { ImPlot::PlotScatter<float>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotScatter_0_double(const char * a0, const double * a1, int a2, double a3, double a4, ImPlotScatterFlags a5, int a6, int a7) { ImPlot::PlotScatter<double>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotScatter_0_byte(const char * a0, const ImU8 * a1, int a2, double a3, double a4, ImPlotScatterFlags a5, int a6, int a7) { ImPlot::PlotScatter<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotScatter_0_sbyte(const char * a0, const ImS8 * a1, int a2, double a3, double a4, ImPlotScatterFlags a5, int a6, int a7) { ImPlot::PlotScatter<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotScatter_0_short(const char * a0, const ImS16 * a1, int a2, double a3, double a4, ImPlotScatterFlags a5, int a6, int a7) { ImPlot::PlotScatter<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotScatter_0_ushort(const char * a0, const ImU16 * a1, int a2, double a3, double a4, ImPlotScatterFlags a5, int a6, int a7) { ImPlot::PlotScatter<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotScatter_0_int(const char * a0, const ImS32 * a1, int a2, double a3, double a4, ImPlotScatterFlags a5, int a6, int a7) { ImPlot::PlotScatter<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotScatter_0_uint(const char * a0, const ImU32 * a1, int a2, double a3, double a4, ImPlotScatterFlags a5, int a6, int a7) { ImPlot::PlotScatter<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotScatter_0_long(const char * a0, const ImS64 * a1, int a2, double a3, double a4, ImPlotScatterFlags a5, int a6, int a7) { ImPlot::PlotScatter<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotScatter_0_ulong(const char * a0, const ImU64 * a1, int a2, double a3, double a4, ImPlotScatterFlags a5, int a6, int a7) { ImPlot::PlotScatter<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotScatter_1_float(const char * a0, const float * a1, const float * a2, int a3, ImPlotScatterFlags a4, int a5, int a6) { ImPlot::PlotScatter<float>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotScatter_1_double(const char * a0, const double * a1, const double * a2, int a3, ImPlotScatterFlags a4, int a5, int a6) { ImPlot::PlotScatter<double>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotScatter_1_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, int a3, ImPlotScatterFlags a4, int a5, int a6) { ImPlot::PlotScatter<ImU8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotScatter_1_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, int a3, ImPlotScatterFlags a4, int a5, int a6) { ImPlot::PlotScatter<ImS8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotScatter_1_short(const char * a0, const ImS16 * a1, const ImS16 * a2, int a3, ImPlotScatterFlags a4, int a5, int a6) { ImPlot::PlotScatter<ImS16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotScatter_1_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, int a3, ImPlotScatterFlags a4, int a5, int a6) { ImPlot::PlotScatter<ImU16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotScatter_1_int(const char * a0, const ImS32 * a1, const ImS32 * a2, int a3, ImPlotScatterFlags a4, int a5, int a6) { ImPlot::PlotScatter<ImS32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotScatter_1_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, int a3, ImPlotScatterFlags a4, int a5, int a6) { ImPlot::PlotScatter<ImU32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotScatter_1_long(const char * a0, const ImS64 * a1, const ImS64 * a2, int a3, ImPlotScatterFlags a4, int a5, int a6) { ImPlot::PlotScatter<ImS64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotScatter_1_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, int a3, ImPlotScatterFlags a4, int a5, int a6) { ImPlot::PlotScatter<ImU64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotScatterG(const char * a0, ImPlotGetter a1, void * a2, int a3, ImPlotScatterFlags a4) { ImPlot::PlotScatterG(a0, a1, a2, a3, a4); }
EXPORT void PlotStairs_0_float(const char * a0, const float * a1, int a2, double a3, double a4, ImPlotStairsFlags a5, int a6, int a7) { ImPlot::PlotStairs<float>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStairs_0_double(const char * a0, const double * a1, int a2, double a3, double a4, ImPlotStairsFlags a5, int a6, int a7) { ImPlot::PlotStairs<double>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStairs_0_byte(const char * a0, const ImU8 * a1, int a2, double a3, double a4, ImPlotStairsFlags a5, int a6, int a7) { ImPlot::PlotStairs<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStairs_0_sbyte(const char * a0, const ImS8 * a1, int a2, double a3, double a4, ImPlotStairsFlags a5, int a6, int a7) { ImPlot::PlotStairs<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStairs_0_short(const char * a0, const ImS16 * a1, int a2, double a3, double a4, ImPlotStairsFlags a5, int a6, int a7) { ImPlot::PlotStairs<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStairs_0_ushort(const char * a0, const ImU16 * a1, int a2, double a3, double a4, ImPlotStairsFlags a5, int a6, int a7) { ImPlot::PlotStairs<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStairs_0_int(const char * a0, const ImS32 * a1, int a2, double a3, double a4, ImPlotStairsFlags a5, int a6, int a7) { ImPlot::PlotStairs<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStairs_0_uint(const char * a0, const ImU32 * a1, int a2, double a3, double a4, ImPlotStairsFlags a5, int a6, int a7) { ImPlot::PlotStairs<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStairs_0_long(const char * a0, const ImS64 * a1, int a2, double a3, double a4, ImPlotStairsFlags a5, int a6, int a7) { ImPlot::PlotStairs<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStairs_0_ulong(const char * a0, const ImU64 * a1, int a2, double a3, double a4, ImPlotStairsFlags a5, int a6, int a7) { ImPlot::PlotStairs<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStairs_1_float(const char * a0, const float * a1, const float * a2, int a3, ImPlotStairsFlags a4, int a5, int a6) { ImPlot::PlotStairs<float>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotStairs_1_double(const char * a0, const double * a1, const double * a2, int a3, ImPlotStairsFlags a4, int a5, int a6) { ImPlot::PlotStairs<double>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotStairs_1_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, int a3, ImPlotStairsFlags a4, int a5, int a6) { ImPlot::PlotStairs<ImU8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotStairs_1_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, int a3, ImPlotStairsFlags a4, int a5, int a6) { ImPlot::PlotStairs<ImS8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotStairs_1_short(const char * a0, const ImS16 * a1, const ImS16 * a2, int a3, ImPlotStairsFlags a4, int a5, int a6) { ImPlot::PlotStairs<ImS16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotStairs_1_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, int a3, ImPlotStairsFlags a4, int a5, int a6) { ImPlot::PlotStairs<ImU16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotStairs_1_int(const char * a0, const ImS32 * a1, const ImS32 * a2, int a3, ImPlotStairsFlags a4, int a5, int a6) { ImPlot::PlotStairs<ImS32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotStairs_1_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, int a3, ImPlotStairsFlags a4, int a5, int a6) { ImPlot::PlotStairs<ImU32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotStairs_1_long(const char * a0, const ImS64 * a1, const ImS64 * a2, int a3, ImPlotStairsFlags a4, int a5, int a6) { ImPlot::PlotStairs<ImS64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotStairs_1_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, int a3, ImPlotStairsFlags a4, int a5, int a6) { ImPlot::PlotStairs<ImU64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotStairsG(const char * a0, ImPlotGetter a1, void * a2, int a3, ImPlotStairsFlags a4) { ImPlot::PlotStairsG(a0, a1, a2, a3, a4); }
EXPORT void PlotShaded_0_float(const char * a0, const float * a1, int a2, double a3, double a4, double a5, ImPlotShadedFlags a6, int a7, int a8) { ImPlot::PlotShaded<float>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotShaded_0_double(const char * a0, const double * a1, int a2, double a3, double a4, double a5, ImPlotShadedFlags a6, int a7, int a8) { ImPlot::PlotShaded<double>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotShaded_0_byte(const char * a0, const ImU8 * a1, int a2, double a3, double a4, double a5, ImPlotShadedFlags a6, int a7, int a8) { ImPlot::PlotShaded<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotShaded_0_sbyte(const char * a0, const ImS8 * a1, int a2, double a3, double a4, double a5, ImPlotShadedFlags a6, int a7, int a8) { ImPlot::PlotShaded<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotShaded_0_short(const char * a0, const ImS16 * a1, int a2, double a3, double a4, double a5, ImPlotShadedFlags a6, int a7, int a8) { ImPlot::PlotShaded<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotShaded_0_ushort(const char * a0, const ImU16 * a1, int a2, double a3, double a4, double a5, ImPlotShadedFlags a6, int a7, int a8) { ImPlot::PlotShaded<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotShaded_0_int(const char * a0, const ImS32 * a1, int a2, double a3, double a4, double a5, ImPlotShadedFlags a6, int a7, int a8) { ImPlot::PlotShaded<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotShaded_0_uint(const char * a0, const ImU32 * a1, int a2, double a3, double a4, double a5, ImPlotShadedFlags a6, int a7, int a8) { ImPlot::PlotShaded<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotShaded_0_long(const char * a0, const ImS64 * a1, int a2, double a3, double a4, double a5, ImPlotShadedFlags a6, int a7, int a8) { ImPlot::PlotShaded<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotShaded_0_ulong(const char * a0, const ImU64 * a1, int a2, double a3, double a4, double a5, ImPlotShadedFlags a6, int a7, int a8) { ImPlot::PlotShaded<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotShaded_1_float(const char * a0, const float * a1, const float * a2, int a3, double a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<float>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_1_double(const char * a0, const double * a1, const double * a2, int a3, double a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<double>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_1_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, int a3, double a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_1_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, int a3, double a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_1_short(const char * a0, const ImS16 * a1, const ImS16 * a2, int a3, double a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_1_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, int a3, double a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_1_int(const char * a0, const ImS32 * a1, const ImS32 * a2, int a3, double a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_1_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, int a3, double a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_1_long(const char * a0, const ImS64 * a1, const ImS64 * a2, int a3, double a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_1_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, int a3, double a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_2_float(const char * a0, const float * a1, const float * a2, const float * a3, int a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<float>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_2_double(const char * a0, const double * a1, const double * a2, const double * a3, int a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<double>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_2_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, const ImU8 * a3, int a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_2_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, const ImS8 * a3, int a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_2_short(const char * a0, const ImS16 * a1, const ImS16 * a2, const ImS16 * a3, int a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_2_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, const ImU16 * a3, int a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_2_int(const char * a0, const ImS32 * a1, const ImS32 * a2, const ImS32 * a3, int a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_2_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, const ImU32 * a3, int a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_2_long(const char * a0, const ImS64 * a1, const ImS64 * a2, const ImS64 * a3, int a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShaded_2_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, const ImU64 * a3, int a4, ImPlotShadedFlags a5, int a6, int a7) { ImPlot::PlotShaded<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotShadedG(const char * a0, ImPlotGetter a1, void * a2, ImPlotGetter a3, void * a4, int a5, ImPlotShadedFlags a6) { ImPlot::PlotShadedG(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotBars_0_float(const char * a0, const float * a1, int a2, double a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<float>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_0_double(const char * a0, const double * a1, int a2, double a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<double>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_0_byte(const char * a0, const ImU8 * a1, int a2, double a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_0_sbyte(const char * a0, const ImS8 * a1, int a2, double a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_0_short(const char * a0, const ImS16 * a1, int a2, double a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_0_ushort(const char * a0, const ImU16 * a1, int a2, double a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_0_int(const char * a0, const ImS32 * a1, int a2, double a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_0_uint(const char * a0, const ImU32 * a1, int a2, double a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_0_long(const char * a0, const ImS64 * a1, int a2, double a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_0_ulong(const char * a0, const ImU64 * a1, int a2, double a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_1_float(const char * a0, const float * a1, const float * a2, int a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<float>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_1_double(const char * a0, const double * a1, const double * a2, int a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<double>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_1_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, int a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_1_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, int a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_1_short(const char * a0, const ImS16 * a1, const ImS16 * a2, int a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_1_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, int a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_1_int(const char * a0, const ImS32 * a1, const ImS32 * a2, int a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_1_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, int a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_1_long(const char * a0, const ImS64 * a1, const ImS64 * a2, int a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBars_1_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, int a3, double a4, ImPlotBarsFlags a5, int a6, int a7) { ImPlot::PlotBars<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotBarsG(const char * a0, ImPlotGetter a1, void * a2, int a3, double a4, ImPlotBarsFlags a5) { ImPlot::PlotBarsG(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotBarGroups_float(const char *const a0[], const float * a1, int a2, int a3, double a4, double a5, ImPlotBarGroupsFlags a6) { ImPlot::PlotBarGroups<float>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotBarGroups_double(const char *const a0[], const double * a1, int a2, int a3, double a4, double a5, ImPlotBarGroupsFlags a6) { ImPlot::PlotBarGroups<double>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotBarGroups_byte(const char *const a0[], const ImU8 * a1, int a2, int a3, double a4, double a5, ImPlotBarGroupsFlags a6) { ImPlot::PlotBarGroups<ImU8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotBarGroups_sbyte(const char *const a0[], const ImS8 * a1, int a2, int a3, double a4, double a5, ImPlotBarGroupsFlags a6) { ImPlot::PlotBarGroups<ImS8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotBarGroups_short(const char *const a0[], const ImS16 * a1, int a2, int a3, double a4, double a5, ImPlotBarGroupsFlags a6) { ImPlot::PlotBarGroups<ImS16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotBarGroups_ushort(const char *const a0[], const ImU16 * a1, int a2, int a3, double a4, double a5, ImPlotBarGroupsFlags a6) { ImPlot::PlotBarGroups<ImU16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotBarGroups_int(const char *const a0[], const ImS32 * a1, int a2, int a3, double a4, double a5, ImPlotBarGroupsFlags a6) { ImPlot::PlotBarGroups<ImS32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotBarGroups_uint(const char *const a0[], const ImU32 * a1, int a2, int a3, double a4, double a5, ImPlotBarGroupsFlags a6) { ImPlot::PlotBarGroups<ImU32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotBarGroups_long(const char *const a0[], const ImS64 * a1, int a2, int a3, double a4, double a5, ImPlotBarGroupsFlags a6) { ImPlot::PlotBarGroups<ImS64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotBarGroups_ulong(const char *const a0[], const ImU64 * a1, int a2, int a3, double a4, double a5, ImPlotBarGroupsFlags a6) { ImPlot::PlotBarGroups<ImU64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotErrorBars_0_float(const char * a0, const float * a1, const float * a2, const float * a3, int a4, ImPlotErrorBarsFlags a5, int a6, int a7) { ImPlot::PlotErrorBars<float>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotErrorBars_0_double(const char * a0, const double * a1, const double * a2, const double * a3, int a4, ImPlotErrorBarsFlags a5, int a6, int a7) { ImPlot::PlotErrorBars<double>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotErrorBars_0_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, const ImU8 * a3, int a4, ImPlotErrorBarsFlags a5, int a6, int a7) { ImPlot::PlotErrorBars<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotErrorBars_0_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, const ImS8 * a3, int a4, ImPlotErrorBarsFlags a5, int a6, int a7) { ImPlot::PlotErrorBars<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotErrorBars_0_short(const char * a0, const ImS16 * a1, const ImS16 * a2, const ImS16 * a3, int a4, ImPlotErrorBarsFlags a5, int a6, int a7) { ImPlot::PlotErrorBars<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotErrorBars_0_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, const ImU16 * a3, int a4, ImPlotErrorBarsFlags a5, int a6, int a7) { ImPlot::PlotErrorBars<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotErrorBars_0_int(const char * a0, const ImS32 * a1, const ImS32 * a2, const ImS32 * a3, int a4, ImPlotErrorBarsFlags a5, int a6, int a7) { ImPlot::PlotErrorBars<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotErrorBars_0_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, const ImU32 * a3, int a4, ImPlotErrorBarsFlags a5, int a6, int a7) { ImPlot::PlotErrorBars<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotErrorBars_0_long(const char * a0, const ImS64 * a1, const ImS64 * a2, const ImS64 * a3, int a4, ImPlotErrorBarsFlags a5, int a6, int a7) { ImPlot::PlotErrorBars<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotErrorBars_0_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, const ImU64 * a3, int a4, ImPlotErrorBarsFlags a5, int a6, int a7) { ImPlot::PlotErrorBars<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotErrorBars_1_float(const char * a0, const float * a1, const float * a2, const float * a3, const float * a4, int a5, ImPlotErrorBarsFlags a6, int a7, int a8) { ImPlot::PlotErrorBars<float>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotErrorBars_1_double(const char * a0, const double * a1, const double * a2, const double * a3, const double * a4, int a5, ImPlotErrorBarsFlags a6, int a7, int a8) { ImPlot::PlotErrorBars<double>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotErrorBars_1_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, const ImU8 * a3, const ImU8 * a4, int a5, ImPlotErrorBarsFlags a6, int a7, int a8) { ImPlot::PlotErrorBars<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotErrorBars_1_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, const ImS8 * a3, const ImS8 * a4, int a5, ImPlotErrorBarsFlags a6, int a7, int a8) { ImPlot::PlotErrorBars<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotErrorBars_1_short(const char * a0, const ImS16 * a1, const ImS16 * a2, const ImS16 * a3, const ImS16 * a4, int a5, ImPlotErrorBarsFlags a6, int a7, int a8) { ImPlot::PlotErrorBars<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotErrorBars_1_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, const ImU16 * a3, const ImU16 * a4, int a5, ImPlotErrorBarsFlags a6, int a7, int a8) { ImPlot::PlotErrorBars<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotErrorBars_1_int(const char * a0, const ImS32 * a1, const ImS32 * a2, const ImS32 * a3, const ImS32 * a4, int a5, ImPlotErrorBarsFlags a6, int a7, int a8) { ImPlot::PlotErrorBars<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotErrorBars_1_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, const ImU32 * a3, const ImU32 * a4, int a5, ImPlotErrorBarsFlags a6, int a7, int a8) { ImPlot::PlotErrorBars<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotErrorBars_1_long(const char * a0, const ImS64 * a1, const ImS64 * a2, const ImS64 * a3, const ImS64 * a4, int a5, ImPlotErrorBarsFlags a6, int a7, int a8) { ImPlot::PlotErrorBars<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotErrorBars_1_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, const ImU64 * a3, const ImU64 * a4, int a5, ImPlotErrorBarsFlags a6, int a7, int a8) { ImPlot::PlotErrorBars<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_0_float(const char * a0, const float * a1, int a2, double a3, double a4, double a5, ImPlotStemsFlags a6, int a7, int a8) { ImPlot::PlotStems<float>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_0_double(const char * a0, const double * a1, int a2, double a3, double a4, double a5, ImPlotStemsFlags a6, int a7, int a8) { ImPlot::PlotStems<double>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_0_byte(const char * a0, const ImU8 * a1, int a2, double a3, double a4, double a5, ImPlotStemsFlags a6, int a7, int a8) { ImPlot::PlotStems<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_0_sbyte(const char * a0, const ImS8 * a1, int a2, double a3, double a4, double a5, ImPlotStemsFlags a6, int a7, int a8) { ImPlot::PlotStems<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_0_short(const char * a0, const ImS16 * a1, int a2, double a3, double a4, double a5, ImPlotStemsFlags a6, int a7, int a8) { ImPlot::PlotStems<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_0_ushort(const char * a0, const ImU16 * a1, int a2, double a3, double a4, double a5, ImPlotStemsFlags a6, int a7, int a8) { ImPlot::PlotStems<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_0_int(const char * a0, const ImS32 * a1, int a2, double a3, double a4, double a5, ImPlotStemsFlags a6, int a7, int a8) { ImPlot::PlotStems<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_0_uint(const char * a0, const ImU32 * a1, int a2, double a3, double a4, double a5, ImPlotStemsFlags a6, int a7, int a8) { ImPlot::PlotStems<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_0_long(const char * a0, const ImS64 * a1, int a2, double a3, double a4, double a5, ImPlotStemsFlags a6, int a7, int a8) { ImPlot::PlotStems<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_0_ulong(const char * a0, const ImU64 * a1, int a2, double a3, double a4, double a5, ImPlotStemsFlags a6, int a7, int a8) { ImPlot::PlotStems<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotStems_1_float(const char * a0, const float * a1, const float * a2, int a3, double a4, ImPlotStemsFlags a5, int a6, int a7) { ImPlot::PlotStems<float>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStems_1_double(const char * a0, const double * a1, const double * a2, int a3, double a4, ImPlotStemsFlags a5, int a6, int a7) { ImPlot::PlotStems<double>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStems_1_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, int a3, double a4, ImPlotStemsFlags a5, int a6, int a7) { ImPlot::PlotStems<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStems_1_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, int a3, double a4, ImPlotStemsFlags a5, int a6, int a7) { ImPlot::PlotStems<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStems_1_short(const char * a0, const ImS16 * a1, const ImS16 * a2, int a3, double a4, ImPlotStemsFlags a5, int a6, int a7) { ImPlot::PlotStems<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStems_1_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, int a3, double a4, ImPlotStemsFlags a5, int a6, int a7) { ImPlot::PlotStems<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStems_1_int(const char * a0, const ImS32 * a1, const ImS32 * a2, int a3, double a4, ImPlotStemsFlags a5, int a6, int a7) { ImPlot::PlotStems<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStems_1_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, int a3, double a4, ImPlotStemsFlags a5, int a6, int a7) { ImPlot::PlotStems<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStems_1_long(const char * a0, const ImS64 * a1, const ImS64 * a2, int a3, double a4, ImPlotStemsFlags a5, int a6, int a7) { ImPlot::PlotStems<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotStems_1_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, int a3, double a4, ImPlotStemsFlags a5, int a6, int a7) { ImPlot::PlotStems<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotInfLines_float(const char * a0, const float * a1, int a2, ImPlotInfLinesFlags a3, int a4, int a5) { ImPlot::PlotInfLines<float>(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotInfLines_double(const char * a0, const double * a1, int a2, ImPlotInfLinesFlags a3, int a4, int a5) { ImPlot::PlotInfLines<double>(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotInfLines_byte(const char * a0, const ImU8 * a1, int a2, ImPlotInfLinesFlags a3, int a4, int a5) { ImPlot::PlotInfLines<ImU8>(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotInfLines_sbyte(const char * a0, const ImS8 * a1, int a2, ImPlotInfLinesFlags a3, int a4, int a5) { ImPlot::PlotInfLines<ImS8>(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotInfLines_short(const char * a0, const ImS16 * a1, int a2, ImPlotInfLinesFlags a3, int a4, int a5) { ImPlot::PlotInfLines<ImS16>(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotInfLines_ushort(const char * a0, const ImU16 * a1, int a2, ImPlotInfLinesFlags a3, int a4, int a5) { ImPlot::PlotInfLines<ImU16>(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotInfLines_int(const char * a0, const ImS32 * a1, int a2, ImPlotInfLinesFlags a3, int a4, int a5) { ImPlot::PlotInfLines<ImS32>(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotInfLines_uint(const char * a0, const ImU32 * a1, int a2, ImPlotInfLinesFlags a3, int a4, int a5) { ImPlot::PlotInfLines<ImU32>(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotInfLines_long(const char * a0, const ImS64 * a1, int a2, ImPlotInfLinesFlags a3, int a4, int a5) { ImPlot::PlotInfLines<ImS64>(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotInfLines_ulong(const char * a0, const ImU64 * a1, int a2, ImPlotInfLinesFlags a3, int a4, int a5) { ImPlot::PlotInfLines<ImU64>(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotPieChart_0_float(const char *const a0[], const float * a1, int a2, double a3, double a4, double a5, ImPlotFormatter a6, void * a7, double a8, ImPlotPieChartFlags a9) { ImPlot::PlotPieChart<float>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void PlotPieChart_0_double(const char *const a0[], const double * a1, int a2, double a3, double a4, double a5, ImPlotFormatter a6, void * a7, double a8, ImPlotPieChartFlags a9) { ImPlot::PlotPieChart<double>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void PlotPieChart_0_byte(const char *const a0[], const ImU8 * a1, int a2, double a3, double a4, double a5, ImPlotFormatter a6, void * a7, double a8, ImPlotPieChartFlags a9) { ImPlot::PlotPieChart<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void PlotPieChart_0_sbyte(const char *const a0[], const ImS8 * a1, int a2, double a3, double a4, double a5, ImPlotFormatter a6, void * a7, double a8, ImPlotPieChartFlags a9) { ImPlot::PlotPieChart<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void PlotPieChart_0_short(const char *const a0[], const ImS16 * a1, int a2, double a3, double a4, double a5, ImPlotFormatter a6, void * a7, double a8, ImPlotPieChartFlags a9) { ImPlot::PlotPieChart<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void PlotPieChart_0_ushort(const char *const a0[], const ImU16 * a1, int a2, double a3, double a4, double a5, ImPlotFormatter a6, void * a7, double a8, ImPlotPieChartFlags a9) { ImPlot::PlotPieChart<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void PlotPieChart_0_int(const char *const a0[], const ImS32 * a1, int a2, double a3, double a4, double a5, ImPlotFormatter a6, void * a7, double a8, ImPlotPieChartFlags a9) { ImPlot::PlotPieChart<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void PlotPieChart_0_uint(const char *const a0[], const ImU32 * a1, int a2, double a3, double a4, double a5, ImPlotFormatter a6, void * a7, double a8, ImPlotPieChartFlags a9) { ImPlot::PlotPieChart<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void PlotPieChart_0_long(const char *const a0[], const ImS64 * a1, int a2, double a3, double a4, double a5, ImPlotFormatter a6, void * a7, double a8, ImPlotPieChartFlags a9) { ImPlot::PlotPieChart<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void PlotPieChart_0_ulong(const char *const a0[], const ImU64 * a1, int a2, double a3, double a4, double a5, ImPlotFormatter a6, void * a7, double a8, ImPlotPieChartFlags a9) { ImPlot::PlotPieChart<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void PlotPieChart_1_float(const char *const a0[], const float * a1, int a2, double a3, double a4, double a5, const char * a6, double a7, ImPlotPieChartFlags a8) { ImPlot::PlotPieChart<float>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotPieChart_1_double(const char *const a0[], const double * a1, int a2, double a3, double a4, double a5, const char * a6, double a7, ImPlotPieChartFlags a8) { ImPlot::PlotPieChart<double>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotPieChart_1_byte(const char *const a0[], const ImU8 * a1, int a2, double a3, double a4, double a5, const char * a6, double a7, ImPlotPieChartFlags a8) { ImPlot::PlotPieChart<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotPieChart_1_sbyte(const char *const a0[], const ImS8 * a1, int a2, double a3, double a4, double a5, const char * a6, double a7, ImPlotPieChartFlags a8) { ImPlot::PlotPieChart<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotPieChart_1_short(const char *const a0[], const ImS16 * a1, int a2, double a3, double a4, double a5, const char * a6, double a7, ImPlotPieChartFlags a8) { ImPlot::PlotPieChart<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotPieChart_1_ushort(const char *const a0[], const ImU16 * a1, int a2, double a3, double a4, double a5, const char * a6, double a7, ImPlotPieChartFlags a8) { ImPlot::PlotPieChart<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotPieChart_1_int(const char *const a0[], const ImS32 * a1, int a2, double a3, double a4, double a5, const char * a6, double a7, ImPlotPieChartFlags a8) { ImPlot::PlotPieChart<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotPieChart_1_uint(const char *const a0[], const ImU32 * a1, int a2, double a3, double a4, double a5, const char * a6, double a7, ImPlotPieChartFlags a8) { ImPlot::PlotPieChart<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotPieChart_1_long(const char *const a0[], const ImS64 * a1, int a2, double a3, double a4, double a5, const char * a6, double a7, ImPlotPieChartFlags a8) { ImPlot::PlotPieChart<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotPieChart_1_ulong(const char *const a0[], const ImU64 * a1, int a2, double a3, double a4, double a5, const char * a6, double a7, ImPlotPieChartFlags a8) { ImPlot::PlotPieChart<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotHeatmap_float(const char * a0, const float * a1, int a2, int a3, double a4, double a5, const char * a6, const ImPlotPoint *a7, const ImPlotPoint *a8, ImPlotHeatmapFlags a9) { ImPlot::PlotHeatmap<float>(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9); }
EXPORT void PlotHeatmap_double(const char * a0, const double * a1, int a2, int a3, double a4, double a5, const char * a6, const ImPlotPoint *a7, const ImPlotPoint *a8, ImPlotHeatmapFlags a9) { ImPlot::PlotHeatmap<double>(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9); }
EXPORT void PlotHeatmap_byte(const char * a0, const ImU8 * a1, int a2, int a3, double a4, double a5, const char * a6, const ImPlotPoint *a7, const ImPlotPoint *a8, ImPlotHeatmapFlags a9) { ImPlot::PlotHeatmap<ImU8>(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9); }
EXPORT void PlotHeatmap_sbyte(const char * a0, const ImS8 * a1, int a2, int a3, double a4, double a5, const char * a6, const ImPlotPoint *a7, const ImPlotPoint *a8, ImPlotHeatmapFlags a9) { ImPlot::PlotHeatmap<ImS8>(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9); }
EXPORT void PlotHeatmap_short(const char * a0, const ImS16 * a1, int a2, int a3, double a4, double a5, const char * a6, const ImPlotPoint *a7, const ImPlotPoint *a8, ImPlotHeatmapFlags a9) { ImPlot::PlotHeatmap<ImS16>(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9); }
EXPORT void PlotHeatmap_ushort(const char * a0, const ImU16 * a1, int a2, int a3, double a4, double a5, const char * a6, const ImPlotPoint *a7, const ImPlotPoint *a8, ImPlotHeatmapFlags a9) { ImPlot::PlotHeatmap<ImU16>(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9); }
EXPORT void PlotHeatmap_int(const char * a0, const ImS32 * a1, int a2, int a3, double a4, double a5, const char * a6, const ImPlotPoint *a7, const ImPlotPoint *a8, ImPlotHeatmapFlags a9) { ImPlot::PlotHeatmap<ImS32>(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9); }
EXPORT void PlotHeatmap_uint(const char * a0, const ImU32 * a1, int a2, int a3, double a4, double a5, const char * a6, const ImPlotPoint *a7, const ImPlotPoint *a8, ImPlotHeatmapFlags a9) { ImPlot::PlotHeatmap<ImU32>(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9); }
EXPORT void PlotHeatmap_long(const char * a0, const ImS64 * a1, int a2, int a3, double a4, double a5, const char * a6, const ImPlotPoint *a7, const ImPlotPoint *a8, ImPlotHeatmapFlags a9) { ImPlot::PlotHeatmap<ImS64>(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9); }
EXPORT void PlotHeatmap_ulong(const char * a0, const ImU64 * a1, int a2, int a3, double a4, double a5, const char * a6, const ImPlotPoint *a7, const ImPlotPoint *a8, ImPlotHeatmapFlags a9) { ImPlot::PlotHeatmap<ImU64>(a0, a1, a2, a3, a4, a5, a6, *a7, *a8, a9); }
EXPORT double PlotHistogram_float(const char * a0, const float * a1, int a2, int a3, double a4, ImPlotRange a5, ImPlotHistogramFlags a6) { return ImPlot::PlotHistogram<float>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT double PlotHistogram_double(const char * a0, const double * a1, int a2, int a3, double a4, ImPlotRange a5, ImPlotHistogramFlags a6) { return ImPlot::PlotHistogram<double>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT double PlotHistogram_byte(const char * a0, const ImU8 * a1, int a2, int a3, double a4, ImPlotRange a5, ImPlotHistogramFlags a6) { return ImPlot::PlotHistogram<ImU8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT double PlotHistogram_sbyte(const char * a0, const ImS8 * a1, int a2, int a3, double a4, ImPlotRange a5, ImPlotHistogramFlags a6) { return ImPlot::PlotHistogram<ImS8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT double PlotHistogram_short(const char * a0, const ImS16 * a1, int a2, int a3, double a4, ImPlotRange a5, ImPlotHistogramFlags a6) { return ImPlot::PlotHistogram<ImS16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT double PlotHistogram_ushort(const char * a0, const ImU16 * a1, int a2, int a3, double a4, ImPlotRange a5, ImPlotHistogramFlags a6) { return ImPlot::PlotHistogram<ImU16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT double PlotHistogram_int(const char * a0, const ImS32 * a1, int a2, int a3, double a4, ImPlotRange a5, ImPlotHistogramFlags a6) { return ImPlot::PlotHistogram<ImS32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT double PlotHistogram_uint(const char * a0, const ImU32 * a1, int a2, int a3, double a4, ImPlotRange a5, ImPlotHistogramFlags a6) { return ImPlot::PlotHistogram<ImU32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT double PlotHistogram_long(const char * a0, const ImS64 * a1, int a2, int a3, double a4, ImPlotRange a5, ImPlotHistogramFlags a6) { return ImPlot::PlotHistogram<ImS64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT double PlotHistogram_ulong(const char * a0, const ImU64 * a1, int a2, int a3, double a4, ImPlotRange a5, ImPlotHistogramFlags a6) { return ImPlot::PlotHistogram<ImU64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT double PlotHistogram2D_float(const char * a0, const float * a1, const float * a2, int a3, int a4, int a5, ImPlotRect a6, ImPlotHistogramFlags a7) { return ImPlot::PlotHistogram2D<float>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT double PlotHistogram2D_double(const char * a0, const double * a1, const double * a2, int a3, int a4, int a5, ImPlotRect a6, ImPlotHistogramFlags a7) { return ImPlot::PlotHistogram2D<double>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT double PlotHistogram2D_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, int a3, int a4, int a5, ImPlotRect a6, ImPlotHistogramFlags a7) { return ImPlot::PlotHistogram2D<ImU8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT double PlotHistogram2D_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, int a3, int a4, int a5, ImPlotRect a6, ImPlotHistogramFlags a7) { return ImPlot::PlotHistogram2D<ImS8>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT double PlotHistogram2D_short(const char * a0, const ImS16 * a1, const ImS16 * a2, int a3, int a4, int a5, ImPlotRect a6, ImPlotHistogramFlags a7) { return ImPlot::PlotHistogram2D<ImS16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT double PlotHistogram2D_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, int a3, int a4, int a5, ImPlotRect a6, ImPlotHistogramFlags a7) { return ImPlot::PlotHistogram2D<ImU16>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT double PlotHistogram2D_int(const char * a0, const ImS32 * a1, const ImS32 * a2, int a3, int a4, int a5, ImPlotRect a6, ImPlotHistogramFlags a7) { return ImPlot::PlotHistogram2D<ImS32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT double PlotHistogram2D_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, int a3, int a4, int a5, ImPlotRect a6, ImPlotHistogramFlags a7) { return ImPlot::PlotHistogram2D<ImU32>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT double PlotHistogram2D_long(const char * a0, const ImS64 * a1, const ImS64 * a2, int a3, int a4, int a5, ImPlotRect a6, ImPlotHistogramFlags a7) { return ImPlot::PlotHistogram2D<ImS64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT double PlotHistogram2D_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, int a3, int a4, int a5, ImPlotRect a6, ImPlotHistogramFlags a7) { return ImPlot::PlotHistogram2D<ImU64>(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void PlotDigital_float(const char * a0, const float * a1, const float * a2, int a3, ImPlotDigitalFlags a4, int a5, int a6) { ImPlot::PlotDigital<float>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotDigital_double(const char * a0, const double * a1, const double * a2, int a3, ImPlotDigitalFlags a4, int a5, int a6) { ImPlot::PlotDigital<double>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotDigital_byte(const char * a0, const ImU8 * a1, const ImU8 * a2, int a3, ImPlotDigitalFlags a4, int a5, int a6) { ImPlot::PlotDigital<ImU8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotDigital_sbyte(const char * a0, const ImS8 * a1, const ImS8 * a2, int a3, ImPlotDigitalFlags a4, int a5, int a6) { ImPlot::PlotDigital<ImS8>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotDigital_short(const char * a0, const ImS16 * a1, const ImS16 * a2, int a3, ImPlotDigitalFlags a4, int a5, int a6) { ImPlot::PlotDigital<ImS16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotDigital_ushort(const char * a0, const ImU16 * a1, const ImU16 * a2, int a3, ImPlotDigitalFlags a4, int a5, int a6) { ImPlot::PlotDigital<ImU16>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotDigital_int(const char * a0, const ImS32 * a1, const ImS32 * a2, int a3, ImPlotDigitalFlags a4, int a5, int a6) { ImPlot::PlotDigital<ImS32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotDigital_uint(const char * a0, const ImU32 * a1, const ImU32 * a2, int a3, ImPlotDigitalFlags a4, int a5, int a6) { ImPlot::PlotDigital<ImU32>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotDigital_long(const char * a0, const ImS64 * a1, const ImS64 * a2, int a3, ImPlotDigitalFlags a4, int a5, int a6) { ImPlot::PlotDigital<ImS64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotDigital_ulong(const char * a0, const ImU64 * a1, const ImU64 * a2, int a3, ImPlotDigitalFlags a4, int a5, int a6) { ImPlot::PlotDigital<ImU64>(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void PlotDigitalG(const char * a0, ImPlotGetter a1, void * a2, int a3, ImPlotDigitalFlags a4) { ImPlot::PlotDigitalG(a0, a1, a2, a3, a4); }
EXPORT void PlotImage(const char * a0, ImTextureRef a1, const ImPlotPoint *a2, const ImPlotPoint *a3, const ImVec2 *a4, const ImVec2 *a5, const ImVec4 *a6, ImPlotImageFlags a7) { ImPlot::PlotImage(a0, a1, *a2, *a3, *a4, *a5, *a6, a7); }
EXPORT void PlotText(const char * a0, double a1, double a2, const ImVec2 *a3, ImPlotTextFlags a4) { ImPlot::PlotText(a0, a1, a2, *a3, a4); }
EXPORT void PlotDummy(const char * a0, ImPlotDummyFlags a1) { ImPlot::PlotDummy(a0, a1); }
EXPORT bool DragPoint(int a0, double * a1, double * a2, const ImVec4 *a3, float a4, ImPlotDragToolFlags a5, bool * a6, bool * a7, bool * a8) { return ImPlot::DragPoint(a0, a1, a2, *a3, a4, a5, a6, a7, a8); }
EXPORT bool DragLineX(int a0, double * a1, const ImVec4 *a2, float a3, ImPlotDragToolFlags a4, bool * a5, bool * a6, bool * a7) { return ImPlot::DragLineX(a0, a1, *a2, a3, a4, a5, a6, a7); }
EXPORT bool DragLineY(int a0, double * a1, const ImVec4 *a2, float a3, ImPlotDragToolFlags a4, bool * a5, bool * a6, bool * a7) { return ImPlot::DragLineY(a0, a1, *a2, a3, a4, a5, a6, a7); }
EXPORT bool DragRect(int a0, double * a1, double * a2, double * a3, double * a4, const ImVec4 *a5, ImPlotDragToolFlags a6, bool * a7, bool * a8, bool * a9) { return ImPlot::DragRect(a0, a1, a2, a3, a4, *a5, a6, a7, a8, a9); }
EXPORT void Annotation_0(double a0, double a1, const ImVec4 *a2, const ImVec2 *a3, bool a4, bool a5) { ImPlot::Annotation(a0, a1, *a2, *a3, a4, a5); }
EXPORT void Annotation_1(double a0, double a1, const ImVec4 *a2, const ImVec2 *a3, bool a4, const char * a5) { ImPlot::Annotation(a0, a1, *a2, *a3, a4, "%s", a5); }
EXPORT void TagX_0(double a0, const ImVec4 *a1, bool a2) { ImPlot::TagX(a0, *a1, a2); }
EXPORT void TagX_1(double a0, const ImVec4 *a1, const char * a2) { ImPlot::TagX(a0, *a1, "%s", a2); }
EXPORT void TagY_0(double a0, const ImVec4 *a1, bool a2) { ImPlot::TagY(a0, *a1, a2); }
EXPORT void TagY_1(double a0, const ImVec4 *a1, const char * a2) { ImPlot::TagY(a0, *a1, "%s", a2); }
EXPORT void SetAxis(ImAxis a0) { ImPlot::SetAxis(a0); }
EXPORT void SetAxes(ImAxis a0, ImAxis a1) { ImPlot::SetAxes(a0, a1); }
EXPORT ImPlotPoint PixelsToPlot_0(const ImVec2 *a0, ImAxis a1, ImAxis a2) { return ImPlot::PixelsToPlot(*a0, a1, a2); }
EXPORT ImPlotPoint PixelsToPlot_1(float a0, float a1, ImAxis a2, ImAxis a3) { return ImPlot::PixelsToPlot(a0, a1, a2, a3); }
EXPORT ImVec2 PlotToPixels_0(const ImPlotPoint *a0, ImAxis a1, ImAxis a2) { return ImPlot::PlotToPixels(*a0, a1, a2); }
EXPORT ImVec2 PlotToPixels_1(double a0, double a1, ImAxis a2, ImAxis a3) { return ImPlot::PlotToPixels(a0, a1, a2, a3); }
EXPORT ImVec2 GetPlotPos(void) { return ImPlot::GetPlotPos(); }
EXPORT ImVec2 GetPlotSize(void) { return ImPlot::GetPlotSize(); }
EXPORT ImPlotPoint GetPlotMousePos(ImAxis a0, ImAxis a1) { return ImPlot::GetPlotMousePos(a0, a1); }
EXPORT ImPlotRect GetPlotLimits(ImAxis a0, ImAxis a1) { return ImPlot::GetPlotLimits(a0, a1); }
EXPORT bool IsPlotHovered(void) { return ImPlot::IsPlotHovered(); }
EXPORT bool IsAxisHovered(ImAxis a0) { return ImPlot::IsAxisHovered(a0); }
EXPORT bool IsSubplotsHovered(void) { return ImPlot::IsSubplotsHovered(); }
EXPORT bool IsPlotSelected(void) { return ImPlot::IsPlotSelected(); }
EXPORT ImPlotRect GetPlotSelection(ImAxis a0, ImAxis a1) { return ImPlot::GetPlotSelection(a0, a1); }
EXPORT void CancelPlotSelection(void) { ImPlot::CancelPlotSelection(); }
EXPORT void HideNextItem(bool a0, ImPlotCond a1) { ImPlot::HideNextItem(a0, a1); }
EXPORT bool BeginAlignedPlots(const char * a0, bool a1) { return ImPlot::BeginAlignedPlots(a0, a1); }
EXPORT void EndAlignedPlots(void) { ImPlot::EndAlignedPlots(); }
EXPORT bool BeginLegendPopup(const char * a0, ImGuiMouseButton a1) { return ImPlot::BeginLegendPopup(a0, a1); }
EXPORT void EndLegendPopup(void) { ImPlot::EndLegendPopup(); }
EXPORT bool IsLegendEntryHovered(const char * a0) { return ImPlot::IsLegendEntryHovered(a0); }
EXPORT bool BeginDragDropTargetPlot(void) { return ImPlot::BeginDragDropTargetPlot(); }
EXPORT bool BeginDragDropTargetAxis(ImAxis a0) { return ImPlot::BeginDragDropTargetAxis(a0); }
EXPORT bool BeginDragDropTargetLegend(void) { return ImPlot::BeginDragDropTargetLegend(); }
EXPORT void EndDragDropTarget(void) { ImPlot::EndDragDropTarget(); }
EXPORT bool BeginDragDropSourcePlot(ImGuiDragDropFlags a0) { return ImPlot::BeginDragDropSourcePlot(a0); }
EXPORT bool BeginDragDropSourceAxis(ImAxis a0, ImGuiDragDropFlags a1) { return ImPlot::BeginDragDropSourceAxis(a0, a1); }
EXPORT bool BeginDragDropSourceItem(const char * a0, ImGuiDragDropFlags a1) { return ImPlot::BeginDragDropSourceItem(a0, a1); }
EXPORT void EndDragDropSource(void) { ImPlot::EndDragDropSource(); }
EXPORT ImPlotStyle * GetStyle(void) { return &ImPlot::GetStyle(); }
EXPORT void StyleColorsAuto(ImPlotStyle * a0) { ImPlot::StyleColorsAuto(a0); }
EXPORT void StyleColorsClassic(ImPlotStyle * a0) { ImPlot::StyleColorsClassic(a0); }
EXPORT void StyleColorsDark(ImPlotStyle * a0) { ImPlot::StyleColorsDark(a0); }
EXPORT void StyleColorsLight(ImPlotStyle * a0) { ImPlot::StyleColorsLight(a0); }
EXPORT void PushStyleColor_0(ImPlotCol a0, ImU32 a1) { ImPlot::PushStyleColor(a0, a1); }
EXPORT void PushStyleColor_1(ImPlotCol a0, const ImVec4 *a1) { ImPlot::PushStyleColor(a0, *a1); }
EXPORT void PopStyleColor(int a0) { ImPlot::PopStyleColor(a0); }
EXPORT void PushStyleVar_0(ImPlotStyleVar a0, float a1) { ImPlot::PushStyleVar(a0, a1); }
EXPORT void PushStyleVar_1(ImPlotStyleVar a0, int a1) { ImPlot::PushStyleVar(a0, a1); }
EXPORT void PushStyleVar_2(ImPlotStyleVar a0, const ImVec2 *a1) { ImPlot::PushStyleVar(a0, *a1); }
EXPORT void PopStyleVar(int a0) { ImPlot::PopStyleVar(a0); }
EXPORT void SetNextLineStyle(const ImVec4 *a0, float a1) { ImPlot::SetNextLineStyle(*a0, a1); }
EXPORT void SetNextFillStyle(const ImVec4 *a0, float a1) { ImPlot::SetNextFillStyle(*a0, a1); }
EXPORT void SetNextMarkerStyle(ImPlotMarker a0, float a1, const ImVec4 *a2, float a3, const ImVec4 *a4) { ImPlot::SetNextMarkerStyle(a0, a1, *a2, a3, *a4); }
EXPORT void SetNextErrorBarStyle(const ImVec4 *a0, float a1, float a2) { ImPlot::SetNextErrorBarStyle(*a0, a1, a2); }
EXPORT ImVec4 GetLastItemColor(void) { return ImPlot::GetLastItemColor(); }
EXPORT const char * GetStyleColorName(ImPlotCol a0) { return ImPlot::GetStyleColorName(a0); }
EXPORT const char * GetMarkerName(ImPlotMarker a0) { return ImPlot::GetMarkerName(a0); }
EXPORT ImPlotColormap AddColormap_0(const char * a0, const ImVec4 * a1, int a2, bool a3) { return ImPlot::AddColormap(a0, a1, a2, a3); }
EXPORT ImPlotColormap AddColormap_1(const char * a0, const ImU32 * a1, int a2, bool a3) { return ImPlot::AddColormap(a0, a1, a2, a3); }
EXPORT int GetColormapCount(void) { return ImPlot::GetColormapCount(); }
EXPORT const char * GetColormapName(ImPlotColormap a0) { return ImPlot::GetColormapName(a0); }
EXPORT ImPlotColormap GetColormapIndex(const char * a0) { return ImPlot::GetColormapIndex(a0); }
EXPORT void PushColormap_0(ImPlotColormap a0) { ImPlot::PushColormap(a0); }
EXPORT void PushColormap_1(const char * a0) { ImPlot::PushColormap(a0); }
EXPORT void PopColormap(int a0) { ImPlot::PopColormap(a0); }
EXPORT ImVec4 NextColormapColor(void) { return ImPlot::NextColormapColor(); }
EXPORT int GetColormapSize(ImPlotColormap a0) { return ImPlot::GetColormapSize(a0); }
EXPORT ImVec4 GetColormapColor(int a0, ImPlotColormap a1) { return ImPlot::GetColormapColor(a0, a1); }
EXPORT ImVec4 SampleColormap(float a0, ImPlotColormap a1) { return ImPlot::SampleColormap(a0, a1); }
EXPORT void ColormapScale(const char * a0, double a1, double a2, const ImVec2 *a3, const char * a4, ImPlotColormapScaleFlags a5, ImPlotColormap a6) { ImPlot::ColormapScale(a0, a1, a2, *a3, a4, a5, a6); }
EXPORT bool ColormapSlider(const char * a0, float * a1, ImVec4 * a2, const char * a3, ImPlotColormap a4) { return ImPlot::ColormapSlider(a0, a1, a2, a3, a4); }
EXPORT bool ColormapButton(const char * a0, const ImVec2 *a1, ImPlotColormap a2) { return ImPlot::ColormapButton(a0, *a1, a2); }
EXPORT void BustColorCache(const char * a0) { ImPlot::BustColorCache(a0); }
EXPORT ImPlotInputMap * GetInputMap(void) { return &ImPlot::GetInputMap(); }
EXPORT void MapInputDefault(ImPlotInputMap * a0) { ImPlot::MapInputDefault(a0); }
EXPORT void MapInputReverse(ImPlotInputMap * a0) { ImPlot::MapInputReverse(a0); }
EXPORT void ItemIcon_0(const ImVec4 *a0) { ImPlot::ItemIcon(*a0); }
EXPORT void ItemIcon_1(ImU32 a0) { ImPlot::ItemIcon(a0); }
EXPORT void ColormapIcon(ImPlotColormap a0) { ImPlot::ColormapIcon(a0); }
EXPORT ImDrawList * GetPlotDrawList(void) { return ImPlot::GetPlotDrawList(); }
EXPORT void PushPlotClipRect(float a0) { ImPlot::PushPlotClipRect(a0); }
EXPORT void PopPlotClipRect(void) { ImPlot::PopPlotClipRect(); }
EXPORT bool ShowStyleSelector(const char * a0) { return ImPlot::ShowStyleSelector(a0); }
EXPORT bool ShowColormapSelector(const char * a0) { return ImPlot::ShowColormapSelector(a0); }
EXPORT bool ShowInputMapSelector(const char * a0) { return ImPlot::ShowInputMapSelector(a0); }
EXPORT void ShowStyleEditor(ImPlotStyle * a0) { ImPlot::ShowStyleEditor(a0); }
EXPORT void ShowUserGuide(void) { ImPlot::ShowUserGuide(); }
EXPORT void ShowMetricsWindow(bool * a0) { ImPlot::ShowMetricsWindow(a0); }
EXPORT void ShowDemoWindow(bool * a0) { ImPlot::ShowDemoWindow(a0); }
EXPORT void ImPlotTime_RollOver_internal(ImPlotTime *target) { target->RollOver(); }
EXPORT double ImPlotTime_ToDouble_internal(ImPlotTime *target) { return target->ToDouble(); }
EXPORT ImPlotTime ImPlotTime_FromDouble_internal(double a0) { return ImPlotTime::FromDouble(a0); }
EXPORT int ImPlotColormapData_Append_internal(ImPlotColormapData *target, const char * a0, const ImU32 * a1, int a2, bool a3) { return target->Append(a0, a1, a2, a3); }
EXPORT void ImPlotColormapData_AppendTable_internal(ImPlotColormapData *target, ImPlotColormap a0) { target->_AppendTable(a0); }
EXPORT void ImPlotColormapData_RebuildTables_internal(ImPlotColormapData *target) { target->RebuildTables(); }
EXPORT bool ImPlotColormapData_IsQual_internal(ImPlotColormapData *target, ImPlotColormap a0) { return target->IsQual(a0); }
EXPORT const char * ImPlotColormapData_GetName_internal(ImPlotColormapData *target, ImPlotColormap a0) { return target->GetName(a0); }
EXPORT ImPlotColormap ImPlotColormapData_GetIndex_internal(ImPlotColormapData *target, const char * a0) { return target->GetIndex(a0); }
EXPORT const ImU32 * ImPlotColormapData_GetKeys_internal(ImPlotColormapData *target, ImPlotColormap a0) { return target->GetKeys(a0); }
EXPORT int ImPlotColormapData_GetKeyCount_internal(ImPlotColormapData *target, ImPlotColormap a0) { return target->GetKeyCount(a0); }
EXPORT ImU32 ImPlotColormapData_GetKeyColor_internal(ImPlotColormapData *target, ImPlotColormap a0, int a1) { return target->GetKeyColor(a0, a1); }
EXPORT void ImPlotColormapData_SetKeyColor_internal(ImPlotColormapData *target, ImPlotColormap a0, int a1, ImU32 a2) { target->SetKeyColor(a0, a1, a2); }
EXPORT const ImU32 * ImPlotColormapData_GetTable_internal(ImPlotColormapData *target, ImPlotColormap a0) { return target->GetTable(a0); }
EXPORT int ImPlotColormapData_GetTableSize_internal(ImPlotColormapData *target, ImPlotColormap a0) { return target->GetTableSize(a0); }
EXPORT ImU32 ImPlotColormapData_GetTableColor_internal(ImPlotColormapData *target, ImPlotColormap a0, int a1) { return target->GetTableColor(a0, a1); }
EXPORT ImU32 ImPlotColormapData_LerpTable_internal(ImPlotColormapData *target, ImPlotColormap a0, float a1) { return target->LerpTable(a0, a1); }
EXPORT void ImPlotAnnotationCollection_AppendV_internal(ImPlotAnnotationCollection *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2, ImU32 a3, bool a4, const char * a5, va_list a6) { target->AppendV(*a0, *a1, a2, a3, a4, a5, a6); }
EXPORT void ImPlotAnnotationCollection_Append_internal(ImPlotAnnotationCollection *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2, ImU32 a3, bool a4, const char * a5) { target->Append(*a0, *a1, a2, a3, a4, "%s", a5); }
EXPORT const char * ImPlotAnnotationCollection_GetText_internal(ImPlotAnnotationCollection *target, int a0) { return target->GetText(a0); }
EXPORT void ImPlotAnnotationCollection_Reset_internal(ImPlotAnnotationCollection *target) { target->Reset(); }
EXPORT void ImPlotTagCollection_AppendV_internal(ImPlotTagCollection *target, ImAxis a0, double a1, ImU32 a2, ImU32 a3, const char * a4, va_list a5) { target->AppendV(a0, a1, a2, a3, a4, a5); }
EXPORT void ImPlotTagCollection_Append_internal(ImPlotTagCollection *target, ImAxis a0, double a1, ImU32 a2, ImU32 a3, const char * a4) { target->Append(a0, a1, a2, a3, "%s", a4); }
EXPORT const char * ImPlotTagCollection_GetText_internal(ImPlotTagCollection *target, int a0) { return target->GetText(a0); }
EXPORT void ImPlotTagCollection_Reset_internal(ImPlotTagCollection *target) { target->Reset(); }
EXPORT ImPlotTick * ImPlotTicker_AddTick_internal_0(ImPlotTicker *target, double a0, bool a1, int a2, bool a3, const char * a4) { return &target->AddTick(a0, a1, a2, a3, a4); }
EXPORT ImPlotTick * ImPlotTicker_AddTick_internal_1(ImPlotTicker *target, double a0, bool a1, int a2, bool a3, ImPlotFormatter a4, void * a5) { return &target->AddTick(a0, a1, a2, a3, a4, a5); }
EXPORT ImPlotTick * ImPlotTicker_AddTick_internal_2(ImPlotTicker *target, ImPlotTick a0) { return &target->AddTick(a0); }
EXPORT const char * ImPlotTicker_GetText_internal_0(ImPlotTicker *target, int a0) { return target->GetText(a0); }
EXPORT const char * ImPlotTicker_GetText_internal_1(ImPlotTicker *target, const ImPlotTick *a0) { return target->GetText(*a0); }
EXPORT void ImPlotTicker_OverrideSizeLate_internal(ImPlotTicker *target, const ImVec2 *a0) { target->OverrideSizeLate(*a0); }
EXPORT void ImPlotTicker_Reset_internal(ImPlotTicker *target) { target->Reset(); }
EXPORT int ImPlotTicker_TickCount_internal(ImPlotTicker *target) { return target->TickCount(); }
EXPORT void ImPlotAxis_Reset_internal(ImPlotAxis *target) { target->Reset(); }
EXPORT bool ImPlotAxis_SetMin_internal(ImPlotAxis *target, double a0, bool a1) { return target->SetMin(a0, a1); }
EXPORT bool ImPlotAxis_SetMax_internal(ImPlotAxis *target, double a0, bool a1) { return target->SetMax(a0, a1); }
EXPORT void ImPlotAxis_SetRange_internal_0(ImPlotAxis *target, double a0, double a1) { target->SetRange(a0, a1); }
EXPORT void ImPlotAxis_SetRange_internal_1(ImPlotAxis *target, const ImPlotRange *a0) { target->SetRange(*a0); }
EXPORT void ImPlotAxis_SetAspect_internal(ImPlotAxis *target, double a0) { target->SetAspect(a0); }
EXPORT float ImPlotAxis_PixelSize_internal(ImPlotAxis *target) { return target->PixelSize(); }
EXPORT double ImPlotAxis_GetAspect_internal(ImPlotAxis *target) { return target->GetAspect(); }
EXPORT void ImPlotAxis_Constrain_internal(ImPlotAxis *target) { target->Constrain(); }
EXPORT void ImPlotAxis_UpdateTransformCache_internal(ImPlotAxis *target) { target->UpdateTransformCache(); }
EXPORT float ImPlotAxis_PlotToPixels_internal(ImPlotAxis *target, double a0) { return target->PlotToPixels(a0); }
EXPORT double ImPlotAxis_PixelsToPlot_internal(ImPlotAxis *target, float a0) { return target->PixelsToPlot(a0); }
EXPORT void ImPlotAxis_ExtendFit_internal(ImPlotAxis *target, double a0) { target->ExtendFit(a0); }
EXPORT void ImPlotAxis_ExtendFitWith_internal(ImPlotAxis *target, ImPlotAxis *a0, double a1, double a2) { target->ExtendFitWith(*a0, a1, a2); }
EXPORT void ImPlotAxis_ApplyFit_internal(ImPlotAxis *target, float a0) { target->ApplyFit(a0); }
EXPORT bool ImPlotAxis_HasLabel_internal(ImPlotAxis *target) { return target->HasLabel(); }
EXPORT bool ImPlotAxis_HasGridLines_internal(ImPlotAxis *target) { return target->HasGridLines(); }
EXPORT bool ImPlotAxis_HasTickLabels_internal(ImPlotAxis *target) { return target->HasTickLabels(); }
EXPORT bool ImPlotAxis_HasTickMarks_internal(ImPlotAxis *target) { return target->HasTickMarks(); }
EXPORT bool ImPlotAxis_WillRender_internal(ImPlotAxis *target) { return target->WillRender(); }
EXPORT bool ImPlotAxis_IsOpposite_internal(ImPlotAxis *target) { return target->IsOpposite(); }
EXPORT bool ImPlotAxis_IsInverted_internal(ImPlotAxis *target) { return target->IsInverted(); }
EXPORT bool ImPlotAxis_IsForeground_internal(ImPlotAxis *target) { return target->IsForeground(); }
EXPORT bool ImPlotAxis_IsAutoFitting_internal(ImPlotAxis *target) { return target->IsAutoFitting(); }
EXPORT bool ImPlotAxis_CanInitFit_internal(ImPlotAxis *target) { return target->CanInitFit(); }
EXPORT bool ImPlotAxis_IsRangeLocked_internal(ImPlotAxis *target) { return target->IsRangeLocked(); }
EXPORT bool ImPlotAxis_IsLockedMin_internal(ImPlotAxis *target) { return target->IsLockedMin(); }
EXPORT bool ImPlotAxis_IsLockedMax_internal(ImPlotAxis *target) { return target->IsLockedMax(); }
EXPORT bool ImPlotAxis_IsLocked_internal(ImPlotAxis *target) { return target->IsLocked(); }
EXPORT bool ImPlotAxis_IsInputLockedMin_internal(ImPlotAxis *target) { return target->IsInputLockedMin(); }
EXPORT bool ImPlotAxis_IsInputLockedMax_internal(ImPlotAxis *target) { return target->IsInputLockedMax(); }
EXPORT bool ImPlotAxis_IsInputLocked_internal(ImPlotAxis *target) { return target->IsInputLocked(); }
EXPORT bool ImPlotAxis_HasMenus_internal(ImPlotAxis *target) { return target->HasMenus(); }
EXPORT bool ImPlotAxis_IsPanLocked_internal(ImPlotAxis *target, bool a0) { return target->IsPanLocked(a0); }
EXPORT void ImPlotAxis_PushLinks_internal(ImPlotAxis *target) { target->PushLinks(); }
EXPORT void ImPlotAxis_PullLinks_internal(ImPlotAxis *target) { target->PullLinks(); }
EXPORT void ImPlotAlignmentData_Begin_internal(ImPlotAlignmentData *target) { target->Begin(); }
EXPORT void ImPlotAlignmentData_Update_internal(ImPlotAlignmentData *target, float *a0, float *a1, float *a2, float *a3) { target->Update(*a0, *a1, *a2, *a3); }
EXPORT void ImPlotAlignmentData_End_internal(ImPlotAlignmentData *target) { target->End(); }
EXPORT void ImPlotAlignmentData_Reset_internal(ImPlotAlignmentData *target) { target->Reset(); }
EXPORT void ImPlotLegend_Reset_internal(ImPlotLegend *target) { target->Reset(); }
EXPORT int ImPlotItemGroup_GetItemCount_internal(ImPlotItemGroup *target) { return target->GetItemCount(); }
EXPORT ImGuiID ImPlotItemGroup_GetItemID_internal(ImPlotItemGroup *target, const char * a0) { return target->GetItemID(a0); }
EXPORT ImPlotItem * ImPlotItemGroup_GetItem_internal_0(ImPlotItemGroup *target, ImGuiID a0) { return target->GetItem(a0); }
EXPORT ImPlotItem * ImPlotItemGroup_GetItem_internal_1(ImPlotItemGroup *target, const char * a0) { return target->GetItem(a0); }
EXPORT ImPlotItem * ImPlotItemGroup_GetOrAddItem_internal(ImPlotItemGroup *target, ImGuiID a0) { return target->GetOrAddItem(a0); }
EXPORT ImPlotItem * ImPlotItemGroup_GetItemByIndex_internal(ImPlotItemGroup *target, int a0) { return target->GetItemByIndex(a0); }
EXPORT int ImPlotItemGroup_GetItemIndex_internal(ImPlotItemGroup *target, ImPlotItem * a0) { return target->GetItemIndex(a0); }
EXPORT int ImPlotItemGroup_GetLegendCount_internal(ImPlotItemGroup *target) { return target->GetLegendCount(); }
EXPORT ImPlotItem * ImPlotItemGroup_GetLegendItem_internal(ImPlotItemGroup *target, int a0) { return target->GetLegendItem(a0); }
EXPORT const char * ImPlotItemGroup_GetLegendLabel_internal(ImPlotItemGroup *target, int a0) { return target->GetLegendLabel(a0); }
EXPORT void ImPlotItemGroup_Reset_internal(ImPlotItemGroup *target) { target->Reset(); }
EXPORT bool ImPlotPlot_IsInputLocked_internal(ImPlotPlot *target) { return target->IsInputLocked(); }
EXPORT void ImPlotPlot_ClearTextBuffer_internal(ImPlotPlot *target) { target->ClearTextBuffer(); }
EXPORT void ImPlotPlot_SetTitle_internal(ImPlotPlot *target, const char * a0) { target->SetTitle(a0); }
EXPORT bool ImPlotPlot_HasTitle_internal(ImPlotPlot *target) { return target->HasTitle(); }
EXPORT const char * ImPlotPlot_GetTitle_internal(ImPlotPlot *target) { return target->GetTitle(); }
EXPORT ImPlotAxis * ImPlotPlot_XAxis_internal_0(ImPlotPlot *target, int a0) { return &target->XAxis(a0); }
EXPORT ImPlotAxis * ImPlotPlot_YAxis_internal_0(ImPlotPlot *target, int a0) { return &target->YAxis(a0); }
EXPORT int ImPlotPlot_EnabledAxesX_internal(ImPlotPlot *target) { return target->EnabledAxesX(); }
EXPORT int ImPlotPlot_EnabledAxesY_internal(ImPlotPlot *target) { return target->EnabledAxesY(); }
EXPORT void ImPlotPlot_SetAxisLabel_internal(ImPlotPlot *target, ImPlotAxis *a0, const char * a1) { target->SetAxisLabel(*a0, a1); }
EXPORT const char * ImPlotPlot_GetAxisLabel_internal(ImPlotPlot *target, const ImPlotAxis *a0) { return target->GetAxisLabel(*a0); }
EXPORT void ImPlotNextPlotData_Reset_internal(ImPlotNextPlotData *target) { target->Reset(); }
EXPORT void ImPlotNextItemData_Reset_internal(ImPlotNextItemData *target) { target->Reset(); }
EXPORT void Initialize_internal(ImPlotContext * a0) { ImPlot::Initialize(a0); }
EXPORT void ResetCtxForNextPlot_internal(ImPlotContext * a0) { ImPlot::ResetCtxForNextPlot(a0); }
EXPORT void ResetCtxForNextAlignedPlots_internal(ImPlotContext * a0) { ImPlot::ResetCtxForNextAlignedPlots(a0); }
EXPORT void ResetCtxForNextSubplot_internal(ImPlotContext * a0) { ImPlot::ResetCtxForNextSubplot(a0); }
EXPORT ImPlotPlot * GetPlot_internal(const char * a0) { return ImPlot::GetPlot(a0); }
EXPORT ImPlotPlot * GetCurrentPlot_internal(void) { return ImPlot::GetCurrentPlot(); }
EXPORT void BustPlotCache_internal(void) { ImPlot::BustPlotCache(); }
EXPORT void ShowPlotContextMenu_internal(ImPlotPlot *a0) { ImPlot::ShowPlotContextMenu(*a0); }
EXPORT void SetupLock_internal(void) { ImPlot::SetupLock(); }
EXPORT void SubplotNextCell_internal(void) { ImPlot::SubplotNextCell(); }
EXPORT void ShowSubplotsContextMenu_internal(ImPlotSubplot *a0) { ImPlot::ShowSubplotsContextMenu(*a0); }
EXPORT bool BeginItem_internal(const char * a0, ImPlotItemFlags a1, ImPlotCol a2) { return ImPlot::BeginItem(a0, a1, a2); }
EXPORT void EndItem_internal(void) { ImPlot::EndItem(); }
EXPORT ImPlotItem * RegisterOrGetItem_internal(const char * a0, ImPlotItemFlags a1, bool * a2) { return ImPlot::RegisterOrGetItem(a0, a1, a2); }
EXPORT ImPlotItem * GetItem_internal(const char * a0) { return ImPlot::GetItem(a0); }
EXPORT ImPlotItem * GetCurrentItem_internal(void) { return ImPlot::GetCurrentItem(); }
EXPORT void BustItemCache_internal(void) { ImPlot::BustItemCache(); }
EXPORT bool AnyAxesInputLocked_internal(ImPlotAxis * a0, int a1) { return ImPlot::AnyAxesInputLocked(a0, a1); }
EXPORT bool AllAxesInputLocked_internal(ImPlotAxis * a0, int a1) { return ImPlot::AllAxesInputLocked(a0, a1); }
EXPORT bool AnyAxesHeld_internal(ImPlotAxis * a0, int a1) { return ImPlot::AnyAxesHeld(a0, a1); }
EXPORT bool AnyAxesHovered_internal(ImPlotAxis * a0, int a1) { return ImPlot::AnyAxesHovered(a0, a1); }
EXPORT bool FitThisFrame_internal(void) { return ImPlot::FitThisFrame(); }
EXPORT void FitPointX_internal(double a0) { ImPlot::FitPointX(a0); }
EXPORT void FitPointY_internal(double a0) { ImPlot::FitPointY(a0); }
EXPORT void FitPoint_internal(const ImPlotPoint *a0) { ImPlot::FitPoint(*a0); }
EXPORT bool RangesOverlap_internal(const ImPlotRange *a0, const ImPlotRange *a1) { return ImPlot::RangesOverlap(*a0, *a1); }
EXPORT void ShowAxisContextMenu_internal(ImPlotAxis *a0, ImPlotAxis * a1, bool a2) { ImPlot::ShowAxisContextMenu(*a0, a1, a2); }
EXPORT ImVec2 GetLocationPos_internal(const ImRect *a0, const ImVec2 *a1, ImPlotLocation a2, const ImVec2 *a3) { return ImPlot::GetLocationPos(*a0, *a1, a2, *a3); }
EXPORT ImVec2 CalcLegendSize_internal(ImPlotItemGroup *a0, const ImVec2 *a1, const ImVec2 *a2, bool a3) { return ImPlot::CalcLegendSize(*a0, *a1, *a2, a3); }
EXPORT bool ClampLegendRect_internal(ImRect *a0, const ImRect *a1, const ImVec2 *a2) { return ImPlot::ClampLegendRect(*a0, *a1, *a2); }
EXPORT bool ShowLegendEntries_internal(ImPlotItemGroup *a0, const ImRect *a1, bool a2, const ImVec2 *a3, const ImVec2 *a4, bool a5, ImDrawList *a6) { return ImPlot::ShowLegendEntries(*a0, *a1, a2, *a3, *a4, a5, *a6); }
EXPORT void ShowAltLegend_internal(const char * a0, bool a1, const ImVec2 a2, bool a3) { ImPlot::ShowAltLegend(a0, a1, a2, a3); }
EXPORT bool ShowLegendContextMenu_internal(ImPlotLegend *a0, bool a1) { return ImPlot::ShowLegendContextMenu(*a0, a1); }
EXPORT void LabelAxisValue_internal(const ImPlotAxis *a0, double a1, char * a2, int a3, bool a4) { ImPlot::LabelAxisValue(*a0, a1, a2, a3, a4); }
EXPORT const ImPlotNextItemData * GetItemData_internal(void) { return &ImPlot::GetItemData(); }
EXPORT bool IsColorAuto_internal_0(const ImVec4 *a0) { return ImPlot::IsColorAuto(*a0); }
EXPORT bool IsColorAuto_internal_1(ImPlotCol a0) { return ImPlot::IsColorAuto(a0); }
EXPORT ImVec4 GetAutoColor_internal(ImPlotCol a0) { return ImPlot::GetAutoColor(a0); }
EXPORT ImVec4 GetStyleColorVec4_internal(ImPlotCol a0) { return ImPlot::GetStyleColorVec4(a0); }
EXPORT ImU32 GetStyleColorU32_internal(ImPlotCol a0) { return ImPlot::GetStyleColorU32(a0); }
EXPORT void AddTextVertical_internal(ImDrawList * a0, ImVec2 a1, ImU32 a2, const char * a3, const char * a4) { ImPlot::AddTextVertical(a0, a1, a2, a3, a4); }
EXPORT void AddTextCentered_internal(ImDrawList * a0, ImVec2 a1, ImU32 a2, const char * a3, const char * a4) { ImPlot::AddTextCentered(a0, a1, a2, a3, a4); }
EXPORT ImVec2 CalcTextSizeVertical_internal(const char * a0) { return ImPlot::CalcTextSizeVertical(a0); }
EXPORT ImU32 CalcTextColor_internal_0(const ImVec4 *a0) { return ImPlot::CalcTextColor(*a0); }
EXPORT ImU32 CalcTextColor_internal_1(ImU32 a0) { return ImPlot::CalcTextColor(a0); }
EXPORT ImU32 CalcHoverColor_internal(ImU32 a0) { return ImPlot::CalcHoverColor(a0); }
EXPORT ImVec2 ClampLabelPos_internal(ImVec2 a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3) { return ImPlot::ClampLabelPos(a0, *a1, *a2, *a3); }
EXPORT ImU32 GetColormapColorU32_internal(int a0, ImPlotColormap a1) { return ImPlot::GetColormapColorU32(a0, a1); }
EXPORT ImU32 NextColormapColorU32_internal(void) { return ImPlot::NextColormapColorU32(); }
EXPORT ImU32 SampleColormapU32_internal(float a0, ImPlotColormap a1) { return ImPlot::SampleColormapU32(a0, a1); }
EXPORT void RenderColorBar_internal(const ImU32 * a0, int a1, ImDrawList *a2, const ImRect *a3, bool a4, bool a5, bool a6) { ImPlot::RenderColorBar(a0, a1, *a2, *a3, a4, a5, a6); }
EXPORT double NiceNum_internal(double a0, bool a1) { return ImPlot::NiceNum(a0, a1); }
EXPORT int OrderOfMagnitude_internal(double a0) { return ImPlot::OrderOfMagnitude(a0); }
EXPORT int OrderToPrecision_internal(int a0) { return ImPlot::OrderToPrecision(a0); }
EXPORT int Precision_internal(double a0) { return ImPlot::Precision(a0); }
EXPORT double RoundTo_internal(double a0, int a1) { return ImPlot::RoundTo(a0, a1); }
EXPORT ImVec2 Intersection_internal(const ImVec2 *a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3) { return ImPlot::Intersection(*a0, *a1, *a2, *a3); }
EXPORT void CalculateBins_internal_float(const float * a0, int a1, ImPlotBin a2, const ImPlotRange *a3, int *a4, double *a5) { ImPlot::CalculateBins<float>(a0, a1, a2, *a3, *a4, *a5); }
EXPORT void CalculateBins_internal_double(const double * a0, int a1, ImPlotBin a2, const ImPlotRange *a3, int *a4, double *a5) { ImPlot::CalculateBins<double>(a0, a1, a2, *a3, *a4, *a5); }
EXPORT void CalculateBins_internal_byte(const ImU8 * a0, int a1, ImPlotBin a2, const ImPlotRange *a3, int *a4, double *a5) { ImPlot::CalculateBins<ImU8>(a0, a1, a2, *a3, *a4, *a5); }
EXPORT void CalculateBins_internal_sbyte(const ImS8 * a0, int a1, ImPlotBin a2, const ImPlotRange *a3, int *a4, double *a5) { ImPlot::CalculateBins<ImS8>(a0, a1, a2, *a3, *a4, *a5); }
EXPORT void CalculateBins_internal_short(const ImS16 * a0, int a1, ImPlotBin a2, const ImPlotRange *a3, int *a4, double *a5) { ImPlot::CalculateBins<ImS16>(a0, a1, a2, *a3, *a4, *a5); }
EXPORT void CalculateBins_internal_ushort(const ImU16 * a0, int a1, ImPlotBin a2, const ImPlotRange *a3, int *a4, double *a5) { ImPlot::CalculateBins<ImU16>(a0, a1, a2, *a3, *a4, *a5); }
EXPORT void CalculateBins_internal_int(const ImS32 * a0, int a1, ImPlotBin a2, const ImPlotRange *a3, int *a4, double *a5) { ImPlot::CalculateBins<ImS32>(a0, a1, a2, *a3, *a4, *a5); }
EXPORT void CalculateBins_internal_uint(const ImU32 * a0, int a1, ImPlotBin a2, const ImPlotRange *a3, int *a4, double *a5) { ImPlot::CalculateBins<ImU32>(a0, a1, a2, *a3, *a4, *a5); }
EXPORT void CalculateBins_internal_long(const ImS64 * a0, int a1, ImPlotBin a2, const ImPlotRange *a3, int *a4, double *a5) { ImPlot::CalculateBins<ImS64>(a0, a1, a2, *a3, *a4, *a5); }
EXPORT void CalculateBins_internal_ulong(const ImU64 * a0, int a1, ImPlotBin a2, const ImPlotRange *a3, int *a4, double *a5) { ImPlot::CalculateBins<ImU64>(a0, a1, a2, *a3, *a4, *a5); }
EXPORT bool IsLeapYear_internal(int a0) { return ImPlot::IsLeapYear(a0); }
EXPORT int GetDaysInMonth_internal(int a0, int a1) { return ImPlot::GetDaysInMonth(a0, a1); }
EXPORT ImPlotTime MkGmtTime_internal(struct tm * a0) { return ImPlot::MkGmtTime(a0); }
EXPORT tm * GetGmtTime_internal(const ImPlotTime *a0, tm * a1) { return ImPlot::GetGmtTime(*a0, a1); }
EXPORT ImPlotTime MkLocTime_internal(struct tm * a0) { return ImPlot::MkLocTime(a0); }
EXPORT tm * GetLocTime_internal(const ImPlotTime *a0, tm * a1) { return ImPlot::GetLocTime(*a0, a1); }
EXPORT ImPlotTime MkTime_internal(struct tm * a0) { return ImPlot::MkTime(a0); }
EXPORT tm * GetTime_internal(const ImPlotTime *a0, tm * a1) { return ImPlot::GetTime(*a0, a1); }
EXPORT ImPlotTime MakeTime_internal(int a0, int a1, int a2, int a3, int a4, int a5, int a6) { return ImPlot::MakeTime(a0, a1, a2, a3, a4, a5, a6); }
EXPORT int GetYear_internal(const ImPlotTime *a0) { return ImPlot::GetYear(*a0); }
EXPORT int GetMonth_internal(const ImPlotTime *a0) { return ImPlot::GetMonth(*a0); }
EXPORT ImPlotTime AddTime_internal(const ImPlotTime *a0, ImPlotTimeUnit a1, int a2) { return ImPlot::AddTime(*a0, a1, a2); }
EXPORT ImPlotTime FloorTime_internal(const ImPlotTime *a0, ImPlotTimeUnit a1) { return ImPlot::FloorTime(*a0, a1); }
EXPORT ImPlotTime CeilTime_internal(const ImPlotTime *a0, ImPlotTimeUnit a1) { return ImPlot::CeilTime(*a0, a1); }
EXPORT ImPlotTime RoundTime_internal(const ImPlotTime *a0, ImPlotTimeUnit a1) { return ImPlot::RoundTime(*a0, a1); }
EXPORT ImPlotTime CombineDateTime_internal(const ImPlotTime *a0, const ImPlotTime *a1) { return ImPlot::CombineDateTime(*a0, *a1); }
EXPORT ImPlotTime Now_internal(void) { return ImPlot::Now(); }
EXPORT ImPlotTime Today_internal(void) { return ImPlot::Today(); }
EXPORT int FormatTime_internal(const ImPlotTime *a0, char * a1, int a2, ImPlotTimeFmt a3, bool a4) { return ImPlot::FormatTime(*a0, a1, a2, a3, a4); }
EXPORT int FormatDate_internal(const ImPlotTime *a0, char * a1, int a2, ImPlotDateFmt a3, bool a4) { return ImPlot::FormatDate(*a0, a1, a2, a3, a4); }
EXPORT int FormatDateTime_internal(const ImPlotTime *a0, char * a1, int a2, ImPlotDateTimeSpec a3) { return ImPlot::FormatDateTime(*a0, a1, a2, a3); }
EXPORT bool ShowDatePicker_internal(const char * a0, int * a1, ImPlotTime * a2, const ImPlotTime * a3, const ImPlotTime * a4) { return ImPlot::ShowDatePicker(a0, a1, a2, a3, a4); }
EXPORT bool ShowTimePicker_internal(const char * a0, ImPlotTime * a1) { return ImPlot::ShowTimePicker(a0, a1); }
EXPORT double TransformForward_Log10_internal(double a0, void * a1) { return ImPlot::TransformForward_Log10(a0, a1); }
EXPORT double TransformInverse_Log10_internal(double a0, void * a1) { return ImPlot::TransformInverse_Log10(a0, a1); }
EXPORT double TransformForward_SymLog_internal(double a0, void * a1) { return ImPlot::TransformForward_SymLog(a0, a1); }
EXPORT double TransformInverse_SymLog_internal(double a0, void * a1) { return ImPlot::TransformInverse_SymLog(a0, a1); }
EXPORT double TransformForward_Logit_internal(double a0, void * a1) { return ImPlot::TransformForward_Logit(a0, a1); }
EXPORT double TransformInverse_Logit_internal(double a0, void * a1) { return ImPlot::TransformInverse_Logit(a0, a1); }
EXPORT int Formatter_Default_internal(double a0, char * a1, int a2, void * a3) { return ImPlot::Formatter_Default(a0, a1, a2, a3); }
EXPORT int Formatter_Logit_internal(double a0, char * a1, int a2, void * a3) { return ImPlot::Formatter_Logit(a0, a1, a2, a3); }
EXPORT int Formatter_Time_internal(double a0, char * a1, int a2, void * a3) { return ImPlot::Formatter_Time(a0, a1, a2, a3); }
EXPORT void Locator_Default_internal(ImPlotTicker *a0, const ImPlotRange *a1, float a2, bool a3, ImPlotFormatter a4, void * a5) { ImPlot::Locator_Default(*a0, *a1, a2, a3, a4, a5); }
EXPORT void Locator_Time_internal(ImPlotTicker *a0, const ImPlotRange *a1, float a2, bool a3, ImPlotFormatter a4, void * a5) { ImPlot::Locator_Time(*a0, *a1, a2, a3, a4, a5); }
EXPORT void Locator_Log10_internal(ImPlotTicker *a0, const ImPlotRange *a1, float a2, bool a3, ImPlotFormatter a4, void * a5) { ImPlot::Locator_Log10(*a0, *a1, a2, a3, a4, a5); }
EXPORT void Locator_SymLog_internal(ImPlotTicker *a0, const ImPlotRange *a1, float a2, bool a3, ImPlotFormatter a4, void * a5) { ImPlot::Locator_SymLog(*a0, *a1, a2, a3, a4, a5); }
