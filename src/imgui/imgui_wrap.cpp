// generated: C wrappers matching Brutal.imgui P/Invoke names
#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui.h"
#include "imgui_internal.h"
#include <stdarg.h>
#define EXPORT extern "C" __attribute__((visibility("default")))

EXPORT ImTextureID ImTextureRef_GetTexID(ImTextureRef *target) { return target->GetTexID(); }
EXPORT ImGuiContext * CreateContext(ImFontAtlas * a0) { return ImGui::CreateContext(a0); }
EXPORT void DestroyContext(ImGuiContext * a0) { ImGui::DestroyContext(a0); }
EXPORT ImGuiContext * GetCurrentContext(void) { return ImGui::GetCurrentContext(); }
EXPORT void SetCurrentContext(ImGuiContext * a0) { ImGui::SetCurrentContext(a0); }
EXPORT ImGuiIO * GetIO(void) { return &ImGui::GetIO(); }
EXPORT ImGuiPlatformIO * GetPlatformIO(void) { return &ImGui::GetPlatformIO(); }
EXPORT ImGuiStyle * GetStyle(void) { return &ImGui::GetStyle(); }
EXPORT void NewFrame(void) { ImGui::NewFrame(); }
EXPORT void EndFrame(void) { ImGui::EndFrame(); }
EXPORT void Render(void) { ImGui::Render(); }
EXPORT ImDrawData * GetDrawData(void) { return ImGui::GetDrawData(); }
EXPORT void ShowDemoWindow(bool * a0) { ImGui::ShowDemoWindow(a0); }
EXPORT void ShowMetricsWindow(bool * a0) { ImGui::ShowMetricsWindow(a0); }
EXPORT void ShowDebugLogWindow(bool * a0) { ImGui::ShowDebugLogWindow(a0); }
EXPORT void ShowIDStackToolWindow(bool * a0) { ImGui::ShowIDStackToolWindow(a0); }
EXPORT void ShowAboutWindow(bool * a0) { ImGui::ShowAboutWindow(a0); }
EXPORT void ShowStyleEditor(ImGuiStyle * a0) { ImGui::ShowStyleEditor(a0); }
EXPORT bool ShowStyleSelector(const char * a0) { return ImGui::ShowStyleSelector(a0); }
EXPORT void ShowFontSelector(const char * a0) { ImGui::ShowFontSelector(a0); }
EXPORT void ShowUserGuide(void) { ImGui::ShowUserGuide(); }
EXPORT const char * GetVersion(void) { return ImGui::GetVersion(); }
EXPORT void StyleColorsDark(ImGuiStyle * a0) { ImGui::StyleColorsDark(a0); }
EXPORT void StyleColorsLight(ImGuiStyle * a0) { ImGui::StyleColorsLight(a0); }
EXPORT void StyleColorsClassic(ImGuiStyle * a0) { ImGui::StyleColorsClassic(a0); }
EXPORT bool Begin(const char * a0, bool * a1, ImGuiWindowFlags a2) { return ImGui::Begin(a0, a1, a2); }
EXPORT void End(void) { ImGui::End(); }
EXPORT bool BeginChild_0(const char * a0, const ImVec2 *a1, ImGuiChildFlags a2, ImGuiWindowFlags a3) { return ImGui::BeginChild(a0, *a1, a2, a3); }
EXPORT bool BeginChild_1(ImGuiID a0, const ImVec2 *a1, ImGuiChildFlags a2, ImGuiWindowFlags a3) { return ImGui::BeginChild(a0, *a1, a2, a3); }
EXPORT void EndChild(void) { ImGui::EndChild(); }
EXPORT bool IsWindowAppearing(void) { return ImGui::IsWindowAppearing(); }
EXPORT bool IsWindowCollapsed(void) { return ImGui::IsWindowCollapsed(); }
EXPORT bool IsWindowFocused(ImGuiFocusedFlags a0) { return ImGui::IsWindowFocused(a0); }
EXPORT bool IsWindowHovered(ImGuiHoveredFlags a0) { return ImGui::IsWindowHovered(a0); }
EXPORT ImDrawList * GetWindowDrawList(void) { return ImGui::GetWindowDrawList(); }
EXPORT float GetWindowDpiScale(void) { return ImGui::GetWindowDpiScale(); }
EXPORT ImVec2 GetWindowPos(void) { return ImGui::GetWindowPos(); }
EXPORT ImVec2 GetWindowSize(void) { return ImGui::GetWindowSize(); }
EXPORT float GetWindowWidth(void) { return ImGui::GetWindowWidth(); }
EXPORT float GetWindowHeight(void) { return ImGui::GetWindowHeight(); }
EXPORT ImGuiViewport * GetWindowViewport(void) { return ImGui::GetWindowViewport(); }
EXPORT void SetNextWindowPos(const ImVec2 *a0, ImGuiCond a1, const ImVec2 *a2) { ImGui::SetNextWindowPos(*a0, a1, *a2); }
EXPORT void SetNextWindowSize(const ImVec2 *a0, ImGuiCond a1) { ImGui::SetNextWindowSize(*a0, a1); }
EXPORT void SetNextWindowSizeConstraints(const ImVec2 *a0, const ImVec2 *a1, ImGuiSizeCallback a2, void * a3) { ImGui::SetNextWindowSizeConstraints(*a0, *a1, a2, a3); }
EXPORT void SetNextWindowContentSize(const ImVec2 *a0) { ImGui::SetNextWindowContentSize(*a0); }
EXPORT void SetNextWindowCollapsed(bool a0, ImGuiCond a1) { ImGui::SetNextWindowCollapsed(a0, a1); }
EXPORT void SetNextWindowFocus(void) { ImGui::SetNextWindowFocus(); }
EXPORT void SetNextWindowScroll(const ImVec2 *a0) { ImGui::SetNextWindowScroll(*a0); }
EXPORT void SetNextWindowBgAlpha(float a0) { ImGui::SetNextWindowBgAlpha(a0); }
EXPORT void SetNextWindowViewport(ImGuiID a0) { ImGui::SetNextWindowViewport(a0); }
EXPORT void SetWindowPos_0(const ImVec2 *a0, ImGuiCond a1) { ImGui::SetWindowPos(*a0, a1); }
EXPORT void SetWindowSize_0(const ImVec2 *a0, ImGuiCond a1) { ImGui::SetWindowSize(*a0, a1); }
EXPORT void SetWindowCollapsed_0(bool a0, ImGuiCond a1) { ImGui::SetWindowCollapsed(a0, a1); }
EXPORT void SetWindowFocus_0(void) { ImGui::SetWindowFocus(); }
EXPORT void SetWindowPos_1(const char * a0, const ImVec2 *a1, ImGuiCond a2) { ImGui::SetWindowPos(a0, *a1, a2); }
EXPORT void SetWindowSize_1(const char * a0, const ImVec2 *a1, ImGuiCond a2) { ImGui::SetWindowSize(a0, *a1, a2); }
EXPORT void SetWindowCollapsed_1(const char * a0, bool a1, ImGuiCond a2) { ImGui::SetWindowCollapsed(a0, a1, a2); }
EXPORT void SetWindowFocus_1(const char * a0) { ImGui::SetWindowFocus(a0); }
EXPORT float GetScrollX(void) { return ImGui::GetScrollX(); }
EXPORT float GetScrollY(void) { return ImGui::GetScrollY(); }
EXPORT void SetScrollX(float a0) { ImGui::SetScrollX(a0); }
EXPORT void SetScrollY(float a0) { ImGui::SetScrollY(a0); }
EXPORT float GetScrollMaxX(void) { return ImGui::GetScrollMaxX(); }
EXPORT float GetScrollMaxY(void) { return ImGui::GetScrollMaxY(); }
EXPORT void SetScrollHereX(float a0) { ImGui::SetScrollHereX(a0); }
EXPORT void SetScrollHereY(float a0) { ImGui::SetScrollHereY(a0); }
EXPORT void SetScrollFromPosX(float a0, float a1) { ImGui::SetScrollFromPosX(a0, a1); }
EXPORT void SetScrollFromPosY(float a0, float a1) { ImGui::SetScrollFromPosY(a0, a1); }
EXPORT void PushFont(ImFont * a0, float a1) { ImGui::PushFont(a0, a1); }
EXPORT void PopFont(void) { ImGui::PopFont(); }
EXPORT ImFont * GetFont(void) { return ImGui::GetFont(); }
EXPORT float GetFontSize(void) { return ImGui::GetFontSize(); }
EXPORT ImFontBaked * GetFontBaked(void) { return ImGui::GetFontBaked(); }
EXPORT void PushStyleColor_0(ImGuiCol a0, ImU32 a1) { ImGui::PushStyleColor(a0, a1); }
EXPORT void PushStyleColor_1(ImGuiCol a0, const ImVec4 *a1) { ImGui::PushStyleColor(a0, *a1); }
EXPORT void PopStyleColor(int a0) { ImGui::PopStyleColor(a0); }
EXPORT void PushStyleVar_0(ImGuiStyleVar a0, float a1) { ImGui::PushStyleVar(a0, a1); }
EXPORT void PushStyleVar_1(ImGuiStyleVar a0, const ImVec2 *a1) { ImGui::PushStyleVar(a0, *a1); }
EXPORT void PushStyleVarX(ImGuiStyleVar a0, float a1) { ImGui::PushStyleVarX(a0, a1); }
EXPORT void PushStyleVarY(ImGuiStyleVar a0, float a1) { ImGui::PushStyleVarY(a0, a1); }
EXPORT void PopStyleVar(int a0) { ImGui::PopStyleVar(a0); }
EXPORT void PushItemFlag(ImGuiItemFlags a0, bool a1) { ImGui::PushItemFlag(a0, a1); }
EXPORT void PopItemFlag(void) { ImGui::PopItemFlag(); }
EXPORT void PushItemWidth(float a0) { ImGui::PushItemWidth(a0); }
EXPORT void PopItemWidth(void) { ImGui::PopItemWidth(); }
EXPORT void SetNextItemWidth(float a0) { ImGui::SetNextItemWidth(a0); }
EXPORT float CalcItemWidth(void) { return ImGui::CalcItemWidth(); }
EXPORT void PushTextWrapPos(float a0) { ImGui::PushTextWrapPos(a0); }
EXPORT void PopTextWrapPos(void) { ImGui::PopTextWrapPos(); }
EXPORT ImVec2 GetFontTexUvWhitePixel(void) { return ImGui::GetFontTexUvWhitePixel(); }
EXPORT ImU32 GetColorU32_0(ImGuiCol a0, float a1) { return ImGui::GetColorU32(a0, a1); }
EXPORT ImU32 GetColorU32_1(const ImVec4 *a0) { return ImGui::GetColorU32(*a0); }
EXPORT ImU32 GetColorU32_2(ImU32 a0, float a1) { return ImGui::GetColorU32(a0, a1); }
EXPORT const ImVec4 * GetStyleColorVec4(ImGuiCol a0) { return &ImGui::GetStyleColorVec4(a0); }
EXPORT ImVec2 GetCursorScreenPos(void) { return ImGui::GetCursorScreenPos(); }
EXPORT void SetCursorScreenPos(const ImVec2 *a0) { ImGui::SetCursorScreenPos(*a0); }
EXPORT ImVec2 GetContentRegionAvail(void) { return ImGui::GetContentRegionAvail(); }
EXPORT ImVec2 GetCursorPos(void) { return ImGui::GetCursorPos(); }
EXPORT float GetCursorPosX(void) { return ImGui::GetCursorPosX(); }
EXPORT float GetCursorPosY(void) { return ImGui::GetCursorPosY(); }
EXPORT void SetCursorPos(const ImVec2 *a0) { ImGui::SetCursorPos(*a0); }
EXPORT void SetCursorPosX(float a0) { ImGui::SetCursorPosX(a0); }
EXPORT void SetCursorPosY(float a0) { ImGui::SetCursorPosY(a0); }
EXPORT ImVec2 GetCursorStartPos(void) { return ImGui::GetCursorStartPos(); }
EXPORT void Separator(void) { ImGui::Separator(); }
EXPORT void SameLine(float a0, float a1) { ImGui::SameLine(a0, a1); }
EXPORT void NewLine(void) { ImGui::NewLine(); }
EXPORT void Spacing(void) { ImGui::Spacing(); }
EXPORT void Dummy(const ImVec2 *a0) { ImGui::Dummy(*a0); }
EXPORT void Indent(float a0) { ImGui::Indent(a0); }
EXPORT void Unindent(float a0) { ImGui::Unindent(a0); }
EXPORT void BeginGroup(void) { ImGui::BeginGroup(); }
EXPORT void EndGroup(void) { ImGui::EndGroup(); }
EXPORT void AlignTextToFramePadding(void) { ImGui::AlignTextToFramePadding(); }
EXPORT float GetTextLineHeight(void) { return ImGui::GetTextLineHeight(); }
EXPORT float GetTextLineHeightWithSpacing(void) { return ImGui::GetTextLineHeightWithSpacing(); }
EXPORT float GetFrameHeight(void) { return ImGui::GetFrameHeight(); }
EXPORT float GetFrameHeightWithSpacing(void) { return ImGui::GetFrameHeightWithSpacing(); }
EXPORT void PushID_0(const char * a0) { ImGui::PushID(a0); }
EXPORT void PushID_1(const char * a0, const char * a1) { ImGui::PushID(a0, a1); }
EXPORT void PushID_2(const void * a0) { ImGui::PushID(a0); }
EXPORT void PushID_3(int a0) { ImGui::PushID(a0); }
EXPORT void PopID(void) { ImGui::PopID(); }
EXPORT ImGuiID GetID_0(const char * a0) { return ImGui::GetID(a0); }
EXPORT ImGuiID GetID_1(const char * a0, const char * a1) { return ImGui::GetID(a0, a1); }
EXPORT ImGuiID GetID_2(const void * a0) { return ImGui::GetID(a0); }
EXPORT ImGuiID GetID_3(int a0) { return ImGui::GetID(a0); }
EXPORT void TextUnformatted(const char * a0, const char * a1) { ImGui::TextUnformatted(a0, a1); }
EXPORT void Text(const char * a0) { ImGui::Text("%s", a0); }
EXPORT void TextV(const char * a0, va_list a1) { ImGui::TextV(a0, a1); }
EXPORT void TextColored(const ImVec4 *a0, const char * a1) { ImGui::TextColored(*a0, "%s", a1); }
EXPORT void TextDisabled(const char * a0) { ImGui::TextDisabled("%s", a0); }
EXPORT void TextWrapped(const char * a0) { ImGui::TextWrapped("%s", a0); }
EXPORT void LabelText(const char * a0, const char * a1) { ImGui::LabelText(a0, "%s", a1); }
EXPORT void BulletText(const char * a0) { ImGui::BulletText("%s", a0); }
EXPORT void SeparatorText(const char * a0) { ImGui::SeparatorText(a0); }
EXPORT bool Button(const char * a0, const ImVec2 *a1) { return ImGui::Button(a0, *a1); }
EXPORT bool SmallButton(const char * a0) { return ImGui::SmallButton(a0); }
EXPORT bool InvisibleButton(const char * a0, const ImVec2 *a1, ImGuiButtonFlags a2) { return ImGui::InvisibleButton(a0, *a1, a2); }
EXPORT bool ArrowButton(const char * a0, ImGuiDir a1) { return ImGui::ArrowButton(a0, a1); }
EXPORT bool Checkbox(const char * a0, bool * a1) { return ImGui::Checkbox(a0, a1); }
EXPORT bool CheckboxFlags_0(const char * a0, int * a1, int a2) { return ImGui::CheckboxFlags(a0, a1, a2); }
EXPORT bool CheckboxFlags_1(const char * a0, unsigned int * a1, unsigned int a2) { return ImGui::CheckboxFlags(a0, a1, a2); }
EXPORT bool RadioButton_0(const char * a0, bool a1) { return ImGui::RadioButton(a0, a1); }
EXPORT bool RadioButton_1(const char * a0, int * a1, int a2) { return ImGui::RadioButton(a0, a1, a2); }
EXPORT void ProgressBar(float a0, const ImVec2 *a1, const char * a2) { ImGui::ProgressBar(a0, *a1, a2); }
EXPORT void Bullet(void) { ImGui::Bullet(); }
EXPORT bool TextLink(const char * a0) { return ImGui::TextLink(a0); }
EXPORT bool TextLinkOpenURL(const char * a0, const char * a1) { return ImGui::TextLinkOpenURL(a0, a1); }
EXPORT void Image(ImTextureRef a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3) { ImGui::Image(a0, *a1, *a2, *a3); }
EXPORT void ImageWithBg(ImTextureRef a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3, const ImVec4 *a4, const ImVec4 *a5) { ImGui::ImageWithBg(a0, *a1, *a2, *a3, *a4, *a5); }
EXPORT bool ImageButton(const char * a0, ImTextureRef a1, const ImVec2 *a2, const ImVec2 *a3, const ImVec2 *a4, const ImVec4 *a5, const ImVec4 *a6) { return ImGui::ImageButton(a0, a1, *a2, *a3, *a4, *a5, *a6); }
EXPORT bool BeginCombo(const char * a0, const char * a1, ImGuiComboFlags a2) { return ImGui::BeginCombo(a0, a1, a2); }
EXPORT void EndCombo(void) { ImGui::EndCombo(); }
EXPORT bool Combo_0(const char * a0, int * a1, const char *const a2[], int a3, int a4) { return ImGui::Combo(a0, a1, a2, a3, a4); }
EXPORT bool Combo_1(const char * a0, int * a1, const char * a2, int a3) { return ImGui::Combo(a0, a1, a2, a3); }
EXPORT bool Combo_2(const char * a0, int * a1, const char *(*a2)(void *, int), void * a3, int a4, int a5) { return ImGui::Combo(a0, a1, a2, a3, a4, a5); }
EXPORT bool DragFloat(const char * a0, float * a1, float a2, float a3, float a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::DragFloat(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool DragFloat2(const char * a0, float a1[2], float a2, float a3, float a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::DragFloat2(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool DragFloat3(const char * a0, float a1[3], float a2, float a3, float a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::DragFloat3(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool DragFloat4(const char * a0, float a1[4], float a2, float a3, float a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::DragFloat4(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool DragFloatRange2(const char * a0, float * a1, float * a2, float a3, float a4, float a5, const char * a6, const char * a7, ImGuiSliderFlags a8) { return ImGui::DragFloatRange2(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT bool DragInt(const char * a0, int * a1, float a2, int a3, int a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::DragInt(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool DragInt2(const char * a0, int a1[2], float a2, int a3, int a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::DragInt2(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool DragInt3(const char * a0, int a1[3], float a2, int a3, int a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::DragInt3(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool DragInt4(const char * a0, int a1[4], float a2, int a3, int a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::DragInt4(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool DragIntRange2(const char * a0, int * a1, int * a2, float a3, int a4, int a5, const char * a6, const char * a7, ImGuiSliderFlags a8) { return ImGui::DragIntRange2(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT bool DragScalar(const char * a0, ImGuiDataType a1, void * a2, float a3, const void * a4, const void * a5, const char * a6, ImGuiSliderFlags a7) { return ImGui::DragScalar(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT bool DragScalarN(const char * a0, ImGuiDataType a1, void * a2, int a3, float a4, const void * a5, const void * a6, const char * a7, ImGuiSliderFlags a8) { return ImGui::DragScalarN(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT bool SliderFloat(const char * a0, float * a1, float a2, float a3, const char * a4, ImGuiSliderFlags a5) { return ImGui::SliderFloat(a0, a1, a2, a3, a4, a5); }
EXPORT bool SliderFloat2(const char * a0, float a1[2], float a2, float a3, const char * a4, ImGuiSliderFlags a5) { return ImGui::SliderFloat2(a0, a1, a2, a3, a4, a5); }
EXPORT bool SliderFloat3(const char * a0, float a1[3], float a2, float a3, const char * a4, ImGuiSliderFlags a5) { return ImGui::SliderFloat3(a0, a1, a2, a3, a4, a5); }
EXPORT bool SliderFloat4(const char * a0, float a1[4], float a2, float a3, const char * a4, ImGuiSliderFlags a5) { return ImGui::SliderFloat4(a0, a1, a2, a3, a4, a5); }
EXPORT bool SliderAngle(const char * a0, float * a1, float a2, float a3, const char * a4, ImGuiSliderFlags a5) { return ImGui::SliderAngle(a0, a1, a2, a3, a4, a5); }
EXPORT bool SliderInt(const char * a0, int * a1, int a2, int a3, const char * a4, ImGuiSliderFlags a5) { return ImGui::SliderInt(a0, a1, a2, a3, a4, a5); }
EXPORT bool SliderInt2(const char * a0, int a1[2], int a2, int a3, const char * a4, ImGuiSliderFlags a5) { return ImGui::SliderInt2(a0, a1, a2, a3, a4, a5); }
EXPORT bool SliderInt3(const char * a0, int a1[3], int a2, int a3, const char * a4, ImGuiSliderFlags a5) { return ImGui::SliderInt3(a0, a1, a2, a3, a4, a5); }
EXPORT bool SliderInt4(const char * a0, int a1[4], int a2, int a3, const char * a4, ImGuiSliderFlags a5) { return ImGui::SliderInt4(a0, a1, a2, a3, a4, a5); }
EXPORT bool SliderScalar(const char * a0, ImGuiDataType a1, void * a2, const void * a3, const void * a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::SliderScalar(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool SliderScalarN(const char * a0, ImGuiDataType a1, void * a2, int a3, const void * a4, const void * a5, const char * a6, ImGuiSliderFlags a7) { return ImGui::SliderScalarN(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT bool VSliderFloat(const char * a0, const ImVec2 *a1, float * a2, float a3, float a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::VSliderFloat(a0, *a1, a2, a3, a4, a5, a6); }
EXPORT bool VSliderInt(const char * a0, const ImVec2 *a1, int * a2, int a3, int a4, const char * a5, ImGuiSliderFlags a6) { return ImGui::VSliderInt(a0, *a1, a2, a3, a4, a5, a6); }
EXPORT bool VSliderScalar(const char * a0, const ImVec2 *a1, ImGuiDataType a2, void * a3, const void * a4, const void * a5, const char * a6, ImGuiSliderFlags a7) { return ImGui::VSliderScalar(a0, *a1, a2, a3, a4, a5, a6, a7); }
EXPORT bool InputText(const char * a0, char * a1, size_t a2, ImGuiInputTextFlags a3, ImGuiInputTextCallback a4, void * a5) { return ImGui::InputText(a0, a1, a2, a3, a4, a5); }
EXPORT bool InputTextMultiline(const char * a0, char * a1, size_t a2, const ImVec2 *a3, ImGuiInputTextFlags a4, ImGuiInputTextCallback a5, void * a6) { return ImGui::InputTextMultiline(a0, a1, a2, *a3, a4, a5, a6); }
EXPORT bool InputTextWithHint(const char * a0, const char * a1, char * a2, size_t a3, ImGuiInputTextFlags a4, ImGuiInputTextCallback a5, void * a6) { return ImGui::InputTextWithHint(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool InputFloat(const char * a0, float * a1, float a2, float a3, const char * a4, ImGuiInputTextFlags a5) { return ImGui::InputFloat(a0, a1, a2, a3, a4, a5); }
EXPORT bool InputFloat2(const char * a0, float a1[2], const char * a2, ImGuiInputTextFlags a3) { return ImGui::InputFloat2(a0, a1, a2, a3); }
EXPORT bool InputFloat3(const char * a0, float a1[3], const char * a2, ImGuiInputTextFlags a3) { return ImGui::InputFloat3(a0, a1, a2, a3); }
EXPORT bool InputFloat4(const char * a0, float a1[4], const char * a2, ImGuiInputTextFlags a3) { return ImGui::InputFloat4(a0, a1, a2, a3); }
EXPORT bool InputInt(const char * a0, int * a1, int a2, int a3, ImGuiInputTextFlags a4) { return ImGui::InputInt(a0, a1, a2, a3, a4); }
EXPORT bool InputInt2(const char * a0, int a1[2], ImGuiInputTextFlags a2) { return ImGui::InputInt2(a0, a1, a2); }
EXPORT bool InputInt3(const char * a0, int a1[3], ImGuiInputTextFlags a2) { return ImGui::InputInt3(a0, a1, a2); }
EXPORT bool InputInt4(const char * a0, int a1[4], ImGuiInputTextFlags a2) { return ImGui::InputInt4(a0, a1, a2); }
EXPORT bool InputDouble(const char * a0, double * a1, double a2, double a3, const char * a4, ImGuiInputTextFlags a5) { return ImGui::InputDouble(a0, a1, a2, a3, a4, a5); }
EXPORT bool InputScalar(const char * a0, ImGuiDataType a1, void * a2, const void * a3, const void * a4, const char * a5, ImGuiInputTextFlags a6) { return ImGui::InputScalar(a0, a1, a2, a3, a4, a5, a6); }
EXPORT bool InputScalarN(const char * a0, ImGuiDataType a1, void * a2, int a3, const void * a4, const void * a5, const char * a6, ImGuiInputTextFlags a7) { return ImGui::InputScalarN(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT bool ColorEdit3(const char * a0, float a1[3], ImGuiColorEditFlags a2) { return ImGui::ColorEdit3(a0, a1, a2); }
EXPORT bool ColorEdit4(const char * a0, float a1[4], ImGuiColorEditFlags a2) { return ImGui::ColorEdit4(a0, a1, a2); }
EXPORT bool ColorPicker3(const char * a0, float a1[3], ImGuiColorEditFlags a2) { return ImGui::ColorPicker3(a0, a1, a2); }
EXPORT bool ColorPicker4(const char * a0, float a1[4], ImGuiColorEditFlags a2, const float * a3) { return ImGui::ColorPicker4(a0, a1, a2, a3); }
EXPORT bool ColorButton(const char * a0, const ImVec4 *a1, ImGuiColorEditFlags a2, const ImVec2 *a3) { return ImGui::ColorButton(a0, *a1, a2, *a3); }
EXPORT void SetColorEditOptions(ImGuiColorEditFlags a0) { ImGui::SetColorEditOptions(a0); }
EXPORT bool TreeNode_0(const char * a0) { return ImGui::TreeNode(a0); }
EXPORT bool TreeNode_1(const char * a0, const char * a1) { return ImGui::TreeNode(a0, "%s", a1); }
EXPORT bool TreeNode_2(const void * a0, const char * a1) { return ImGui::TreeNode(a0, "%s", a1); }
EXPORT bool TreeNodeEx_0(const char * a0, ImGuiTreeNodeFlags a1) { return ImGui::TreeNodeEx(a0, a1); }
EXPORT bool TreeNodeEx_1(const char * a0, ImGuiTreeNodeFlags a1, const char * a2) { return ImGui::TreeNodeEx(a0, a1, "%s", a2); }
EXPORT bool TreeNodeEx_2(const void * a0, ImGuiTreeNodeFlags a1, const char * a2) { return ImGui::TreeNodeEx(a0, a1, "%s", a2); }
EXPORT void TreePush_0(const char * a0) { ImGui::TreePush(a0); }
EXPORT void TreePush_1(const void * a0) { ImGui::TreePush(a0); }
EXPORT void TreePop(void) { ImGui::TreePop(); }
EXPORT float GetTreeNodeToLabelSpacing(void) { return ImGui::GetTreeNodeToLabelSpacing(); }
EXPORT bool CollapsingHeader_0(const char * a0, ImGuiTreeNodeFlags a1) { return ImGui::CollapsingHeader(a0, a1); }
EXPORT bool CollapsingHeader_1(const char * a0, bool * a1, ImGuiTreeNodeFlags a2) { return ImGui::CollapsingHeader(a0, a1, a2); }
EXPORT void SetNextItemOpen(bool a0, ImGuiCond a1) { ImGui::SetNextItemOpen(a0, a1); }
EXPORT void SetNextItemStorageID(ImGuiID a0) { ImGui::SetNextItemStorageID(a0); }
EXPORT bool Selectable_0(const char * a0, bool a1, ImGuiSelectableFlags a2, const ImVec2 *a3) { return ImGui::Selectable(a0, a1, a2, *a3); }
EXPORT bool Selectable_1(const char * a0, bool * a1, ImGuiSelectableFlags a2, const ImVec2 *a3) { return ImGui::Selectable(a0, a1, a2, *a3); }
EXPORT ImGuiMultiSelectIO * BeginMultiSelect(ImGuiMultiSelectFlags a0, int a1, int a2) { return ImGui::BeginMultiSelect(a0, a1, a2); }
EXPORT ImGuiMultiSelectIO * EndMultiSelect(void) { return ImGui::EndMultiSelect(); }
EXPORT void SetNextItemSelectionUserData(ImGuiSelectionUserData a0) { ImGui::SetNextItemSelectionUserData(a0); }
EXPORT bool IsItemToggledSelection(void) { return ImGui::IsItemToggledSelection(); }
EXPORT bool BeginListBox(const char * a0, const ImVec2 *a1) { return ImGui::BeginListBox(a0, *a1); }
EXPORT void EndListBox(void) { ImGui::EndListBox(); }
EXPORT bool ListBox_0(const char * a0, int * a1, const char *const a2[], int a3, int a4) { return ImGui::ListBox(a0, a1, a2, a3, a4); }
EXPORT bool ListBox_1(const char * a0, int * a1, const char *(*a2)(void *, int), void * a3, int a4, int a5) { return ImGui::ListBox(a0, a1, a2, a3, a4, a5); }
EXPORT void PlotLines_0(const char * a0, const float * a1, int a2, int a3, const char * a4, float a5, float a6, ImVec2 a7, int a8) { ImGui::PlotLines(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotLines_1(const char * a0, float (*a1)(void *, int), void * a2, int a3, int a4, const char * a5, float a6, float a7, ImVec2 a8) { ImGui::PlotLines(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotHistogram_0(const char * a0, const float * a1, int a2, int a3, const char * a4, float a5, float a6, ImVec2 a7, int a8) { ImGui::PlotHistogram(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void PlotHistogram_1(const char * a0, float (*a1)(void *, int), void * a2, int a3, int a4, const char * a5, float a6, float a7, ImVec2 a8) { ImGui::PlotHistogram(a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT void Value_0(const char * a0, bool a1) { ImGui::Value(a0, a1); }
EXPORT void Value_1(const char * a0, int a1) { ImGui::Value(a0, a1); }
EXPORT void Value_2(const char * a0, unsigned int a1) { ImGui::Value(a0, a1); }
EXPORT void Value_3(const char * a0, float a1, const char * a2) { ImGui::Value(a0, a1, a2); }
EXPORT bool BeginMenuBar(void) { return ImGui::BeginMenuBar(); }
EXPORT void EndMenuBar(void) { ImGui::EndMenuBar(); }
EXPORT bool BeginMainMenuBar(void) { return ImGui::BeginMainMenuBar(); }
EXPORT void EndMainMenuBar(void) { ImGui::EndMainMenuBar(); }
EXPORT bool BeginMenu(const char * a0, bool a1) { return ImGui::BeginMenu(a0, a1); }
EXPORT void EndMenu(void) { ImGui::EndMenu(); }
EXPORT bool MenuItem_0(const char * a0, const char * a1, bool a2, bool a3) { return ImGui::MenuItem(a0, a1, a2, a3); }
EXPORT bool MenuItem_1(const char * a0, const char * a1, bool * a2, bool a3) { return ImGui::MenuItem(a0, a1, a2, a3); }
EXPORT bool BeginTooltip(void) { return ImGui::BeginTooltip(); }
EXPORT void EndTooltip(void) { ImGui::EndTooltip(); }
EXPORT void SetTooltip(const char * a0) { ImGui::SetTooltip("%s", a0); }
EXPORT bool BeginItemTooltip(void) { return ImGui::BeginItemTooltip(); }
EXPORT void SetItemTooltip(const char * a0) { ImGui::SetItemTooltip("%s", a0); }
EXPORT bool BeginPopup(const char * a0, ImGuiWindowFlags a1) { return ImGui::BeginPopup(a0, a1); }
EXPORT bool BeginPopupModal(const char * a0, bool * a1, ImGuiWindowFlags a2) { return ImGui::BeginPopupModal(a0, a1, a2); }
EXPORT void EndPopup(void) { ImGui::EndPopup(); }
EXPORT void OpenPopup_0(const char * a0, ImGuiPopupFlags a1) { ImGui::OpenPopup(a0, a1); }
EXPORT void OpenPopup_1(ImGuiID a0, ImGuiPopupFlags a1) { ImGui::OpenPopup(a0, a1); }
EXPORT void OpenPopupOnItemClick(const char * a0, ImGuiPopupFlags a1) { ImGui::OpenPopupOnItemClick(a0, a1); }
EXPORT void CloseCurrentPopup(void) { ImGui::CloseCurrentPopup(); }
EXPORT bool BeginPopupContextItem(const char * a0, ImGuiPopupFlags a1) { return ImGui::BeginPopupContextItem(a0, a1); }
EXPORT bool BeginPopupContextWindow(const char * a0, ImGuiPopupFlags a1) { return ImGui::BeginPopupContextWindow(a0, a1); }
EXPORT bool BeginPopupContextVoid(const char * a0, ImGuiPopupFlags a1) { return ImGui::BeginPopupContextVoid(a0, a1); }
EXPORT bool IsPopupOpen(const char * a0, ImGuiPopupFlags a1) { return ImGui::IsPopupOpen(a0, a1); }
EXPORT bool BeginTable(const char * a0, int a1, ImGuiTableFlags a2, const ImVec2 *a3, float a4) { return ImGui::BeginTable(a0, a1, a2, *a3, a4); }
EXPORT void EndTable(void) { ImGui::EndTable(); }
EXPORT void TableNextRow(ImGuiTableRowFlags a0, float a1) { ImGui::TableNextRow(a0, a1); }
EXPORT bool TableNextColumn(void) { return ImGui::TableNextColumn(); }
EXPORT bool TableSetColumnIndex(int a0) { return ImGui::TableSetColumnIndex(a0); }
EXPORT void TableSetupColumn(const char * a0, ImGuiTableColumnFlags a1, float a2, ImGuiID a3) { ImGui::TableSetupColumn(a0, a1, a2, a3); }
EXPORT void TableSetupScrollFreeze(int a0, int a1) { ImGui::TableSetupScrollFreeze(a0, a1); }
EXPORT void TableHeader(const char * a0) { ImGui::TableHeader(a0); }
EXPORT void TableHeadersRow(void) { ImGui::TableHeadersRow(); }
EXPORT void TableAngledHeadersRow(void) { ImGui::TableAngledHeadersRow(); }
EXPORT ImGuiTableSortSpecs * TableGetSortSpecs(void) { return ImGui::TableGetSortSpecs(); }
EXPORT int TableGetColumnCount(void) { return ImGui::TableGetColumnCount(); }
EXPORT int TableGetColumnIndex(void) { return ImGui::TableGetColumnIndex(); }
EXPORT int TableGetRowIndex(void) { return ImGui::TableGetRowIndex(); }
EXPORT const char * TableGetColumnName(int a0) { return ImGui::TableGetColumnName(a0); }
EXPORT ImGuiTableColumnFlags TableGetColumnFlags(int a0) { return ImGui::TableGetColumnFlags(a0); }
EXPORT void TableSetColumnEnabled(int a0, bool a1) { ImGui::TableSetColumnEnabled(a0, a1); }
EXPORT int TableGetHoveredColumn(void) { return ImGui::TableGetHoveredColumn(); }
EXPORT void TableSetBgColor(ImGuiTableBgTarget a0, ImU32 a1, int a2) { ImGui::TableSetBgColor(a0, a1, a2); }
EXPORT void Columns(int a0, const char * a1, bool a2) { ImGui::Columns(a0, a1, a2); }
EXPORT void NextColumn(void) { ImGui::NextColumn(); }
EXPORT int GetColumnIndex(void) { return ImGui::GetColumnIndex(); }
EXPORT float GetColumnWidth(int a0) { return ImGui::GetColumnWidth(a0); }
EXPORT void SetColumnWidth(int a0, float a1) { ImGui::SetColumnWidth(a0, a1); }
EXPORT float GetColumnOffset(int a0) { return ImGui::GetColumnOffset(a0); }
EXPORT void SetColumnOffset(int a0, float a1) { ImGui::SetColumnOffset(a0, a1); }
EXPORT int GetColumnsCount(void) { return ImGui::GetColumnsCount(); }
EXPORT bool BeginTabBar(const char * a0, ImGuiTabBarFlags a1) { return ImGui::BeginTabBar(a0, a1); }
EXPORT void EndTabBar(void) { ImGui::EndTabBar(); }
EXPORT bool BeginTabItem(const char * a0, bool * a1, ImGuiTabItemFlags a2) { return ImGui::BeginTabItem(a0, a1, a2); }
EXPORT void EndTabItem(void) { ImGui::EndTabItem(); }
EXPORT bool TabItemButton(const char * a0, ImGuiTabItemFlags a1) { return ImGui::TabItemButton(a0, a1); }
EXPORT void SetTabItemClosed(const char * a0) { ImGui::SetTabItemClosed(a0); }
EXPORT ImGuiID DockSpace(ImGuiID a0, const ImVec2 *a1, ImGuiDockNodeFlags a2, const ImGuiWindowClass * a3) { return ImGui::DockSpace(a0, *a1, a2, a3); }
EXPORT ImGuiID DockSpaceOverViewport(ImGuiID a0, const ImGuiViewport * a1, ImGuiDockNodeFlags a2, const ImGuiWindowClass * a3) { return ImGui::DockSpaceOverViewport(a0, a1, a2, a3); }
EXPORT void SetNextWindowDockID(ImGuiID a0, ImGuiCond a1) { ImGui::SetNextWindowDockID(a0, a1); }
EXPORT void SetNextWindowClass(const ImGuiWindowClass * a0) { ImGui::SetNextWindowClass(a0); }
EXPORT ImGuiID GetWindowDockID(void) { return ImGui::GetWindowDockID(); }
EXPORT bool IsWindowDocked(void) { return ImGui::IsWindowDocked(); }
EXPORT void LogToTTY(int a0) { ImGui::LogToTTY(a0); }
EXPORT void LogToFile(int a0, const char * a1) { ImGui::LogToFile(a0, a1); }
EXPORT void LogToClipboard(int a0) { ImGui::LogToClipboard(a0); }
EXPORT void LogFinish(void) { ImGui::LogFinish(); }
EXPORT void LogButtons(void) { ImGui::LogButtons(); }
EXPORT void LogText(const char * a0) { ImGui::LogText("%s", a0); }
EXPORT bool BeginDragDropSource(ImGuiDragDropFlags a0) { return ImGui::BeginDragDropSource(a0); }
EXPORT bool SetDragDropPayload(const char * a0, const void * a1, size_t a2, ImGuiCond a3) { return ImGui::SetDragDropPayload(a0, a1, a2, a3); }
EXPORT void EndDragDropSource(void) { ImGui::EndDragDropSource(); }
EXPORT bool BeginDragDropTarget(void) { return ImGui::BeginDragDropTarget(); }
EXPORT const ImGuiPayload * AcceptDragDropPayload(const char * a0, ImGuiDragDropFlags a1) { return ImGui::AcceptDragDropPayload(a0, a1); }
EXPORT void EndDragDropTarget(void) { ImGui::EndDragDropTarget(); }
EXPORT const ImGuiPayload * GetDragDropPayload(void) { return ImGui::GetDragDropPayload(); }
EXPORT void BeginDisabled(bool a0) { ImGui::BeginDisabled(a0); }
EXPORT void EndDisabled(void) { ImGui::EndDisabled(); }
EXPORT void PushClipRect(const ImVec2 *a0, const ImVec2 *a1, bool a2) { ImGui::PushClipRect(*a0, *a1, a2); }
EXPORT void PopClipRect(void) { ImGui::PopClipRect(); }
EXPORT void SetItemDefaultFocus(void) { ImGui::SetItemDefaultFocus(); }
EXPORT void SetKeyboardFocusHere(int a0) { ImGui::SetKeyboardFocusHere(a0); }
EXPORT void SetNavCursorVisible(bool a0) { ImGui::SetNavCursorVisible(a0); }
EXPORT void SetNextItemAllowOverlap(void) { ImGui::SetNextItemAllowOverlap(); }
EXPORT bool IsItemHovered(ImGuiHoveredFlags a0) { return ImGui::IsItemHovered(a0); }
EXPORT bool IsItemActive(void) { return ImGui::IsItemActive(); }
EXPORT bool IsItemFocused(void) { return ImGui::IsItemFocused(); }
EXPORT bool IsItemClicked(ImGuiMouseButton a0) { return ImGui::IsItemClicked(a0); }
EXPORT bool IsItemVisible(void) { return ImGui::IsItemVisible(); }
EXPORT bool IsItemEdited(void) { return ImGui::IsItemEdited(); }
EXPORT bool IsItemActivated(void) { return ImGui::IsItemActivated(); }
EXPORT bool IsItemDeactivated(void) { return ImGui::IsItemDeactivated(); }
EXPORT bool IsItemDeactivatedAfterEdit(void) { return ImGui::IsItemDeactivatedAfterEdit(); }
EXPORT bool IsItemToggledOpen(void) { return ImGui::IsItemToggledOpen(); }
EXPORT bool IsAnyItemHovered(void) { return ImGui::IsAnyItemHovered(); }
EXPORT bool IsAnyItemActive(void) { return ImGui::IsAnyItemActive(); }
EXPORT bool IsAnyItemFocused(void) { return ImGui::IsAnyItemFocused(); }
EXPORT ImGuiID GetItemID(void) { return ImGui::GetItemID(); }
EXPORT ImVec2 GetItemRectMin(void) { return ImGui::GetItemRectMin(); }
EXPORT ImVec2 GetItemRectMax(void) { return ImGui::GetItemRectMax(); }
EXPORT ImVec2 GetItemRectSize(void) { return ImGui::GetItemRectSize(); }
EXPORT ImGuiViewport * GetMainViewport(void) { return ImGui::GetMainViewport(); }
EXPORT ImDrawList * GetBackgroundDrawList(ImGuiViewport * a0) { return ImGui::GetBackgroundDrawList(a0); }
EXPORT ImDrawList * GetForegroundDrawList(ImGuiViewport * a0) { return ImGui::GetForegroundDrawList(a0); }
EXPORT bool IsRectVisible_0(const ImVec2 *a0) { return ImGui::IsRectVisible(*a0); }
EXPORT bool IsRectVisible_1(const ImVec2 *a0, const ImVec2 *a1) { return ImGui::IsRectVisible(*a0, *a1); }
EXPORT double GetTime(void) { return ImGui::GetTime(); }
EXPORT int GetFrameCount(void) { return ImGui::GetFrameCount(); }
EXPORT ImDrawListSharedData * GetDrawListSharedData(void) { return ImGui::GetDrawListSharedData(); }
EXPORT const char * GetStyleColorName(ImGuiCol a0) { return ImGui::GetStyleColorName(a0); }
EXPORT void SetStateStorage(ImGuiStorage * a0) { ImGui::SetStateStorage(a0); }
EXPORT ImGuiStorage * GetStateStorage(void) { return ImGui::GetStateStorage(); }
EXPORT ImVec2 CalcTextSize(const char * a0, const char * a1, bool a2, float a3) { return ImGui::CalcTextSize(a0, a1, a2, a3); }
EXPORT ImVec4 ColorConvertU32ToFloat4(ImU32 a0) { return ImGui::ColorConvertU32ToFloat4(a0); }
EXPORT ImU32 ColorConvertFloat4ToU32(const ImVec4 *a0) { return ImGui::ColorConvertFloat4ToU32(*a0); }
EXPORT void ColorConvertRGBtoHSV(float a0, float a1, float a2, float *a3, float *a4, float *a5) { ImGui::ColorConvertRGBtoHSV(a0, a1, a2, *a3, *a4, *a5); }
EXPORT void ColorConvertHSVtoRGB(float a0, float a1, float a2, float *a3, float *a4, float *a5) { ImGui::ColorConvertHSVtoRGB(a0, a1, a2, *a3, *a4, *a5); }
EXPORT bool IsKeyDown(ImGuiKey a0) { return ImGui::IsKeyDown(a0); }
EXPORT bool IsKeyPressed(ImGuiKey a0, bool a1) { return ImGui::IsKeyPressed(a0, a1); }
EXPORT bool IsKeyReleased(ImGuiKey a0) { return ImGui::IsKeyReleased(a0); }
EXPORT bool IsKeyChordPressed(ImGuiKeyChord a0) { return ImGui::IsKeyChordPressed(a0); }
EXPORT int GetKeyPressedAmount(ImGuiKey a0, float a1, float a2) { return ImGui::GetKeyPressedAmount(a0, a1, a2); }
EXPORT const char * GetKeyName(ImGuiKey a0) { return ImGui::GetKeyName(a0); }
EXPORT void SetNextFrameWantCaptureKeyboard(bool a0) { ImGui::SetNextFrameWantCaptureKeyboard(a0); }
EXPORT bool Shortcut(ImGuiKeyChord a0, ImGuiInputFlags a1) { return ImGui::Shortcut(a0, a1); }
EXPORT void SetNextItemShortcut(ImGuiKeyChord a0, ImGuiInputFlags a1) { ImGui::SetNextItemShortcut(a0, a1); }
EXPORT void SetItemKeyOwner(ImGuiKey a0) { ImGui::SetItemKeyOwner(a0); }
EXPORT bool IsMouseDown(ImGuiMouseButton a0) { return ImGui::IsMouseDown(a0); }
EXPORT bool IsMouseClicked(ImGuiMouseButton a0, bool a1) { return ImGui::IsMouseClicked(a0, a1); }
EXPORT bool IsMouseReleased(ImGuiMouseButton a0) { return ImGui::IsMouseReleased(a0); }
EXPORT bool IsMouseDoubleClicked(ImGuiMouseButton a0) { return ImGui::IsMouseDoubleClicked(a0); }
EXPORT bool IsMouseReleasedWithDelay(ImGuiMouseButton a0, float a1) { return ImGui::IsMouseReleasedWithDelay(a0, a1); }
EXPORT int GetMouseClickedCount(ImGuiMouseButton a0) { return ImGui::GetMouseClickedCount(a0); }
EXPORT bool IsMouseHoveringRect(const ImVec2 *a0, const ImVec2 *a1, bool a2) { return ImGui::IsMouseHoveringRect(*a0, *a1, a2); }
EXPORT bool IsMousePosValid(const ImVec2 * a0) { return ImGui::IsMousePosValid(a0); }
EXPORT bool IsAnyMouseDown(void) { return ImGui::IsAnyMouseDown(); }
EXPORT ImVec2 GetMousePos(void) { return ImGui::GetMousePos(); }
EXPORT ImVec2 GetMousePosOnOpeningCurrentPopup(void) { return ImGui::GetMousePosOnOpeningCurrentPopup(); }
EXPORT bool IsMouseDragging(ImGuiMouseButton a0, float a1) { return ImGui::IsMouseDragging(a0, a1); }
EXPORT ImVec2 GetMouseDragDelta(ImGuiMouseButton a0, float a1) { return ImGui::GetMouseDragDelta(a0, a1); }
EXPORT void ResetMouseDragDelta(ImGuiMouseButton a0) { ImGui::ResetMouseDragDelta(a0); }
EXPORT ImGuiMouseCursor GetMouseCursor(void) { return ImGui::GetMouseCursor(); }
EXPORT void SetMouseCursor(ImGuiMouseCursor a0) { ImGui::SetMouseCursor(a0); }
EXPORT void SetNextFrameWantCaptureMouse(bool a0) { ImGui::SetNextFrameWantCaptureMouse(a0); }
EXPORT const char * GetClipboardText(void) { return ImGui::GetClipboardText(); }
EXPORT void SetClipboardText(const char * a0) { ImGui::SetClipboardText(a0); }
EXPORT void LoadIniSettingsFromDisk(const char * a0) { ImGui::LoadIniSettingsFromDisk(a0); }
EXPORT void LoadIniSettingsFromMemory(const char * a0, size_t a1) { ImGui::LoadIniSettingsFromMemory(a0, a1); }
EXPORT void SaveIniSettingsToDisk(const char * a0) { ImGui::SaveIniSettingsToDisk(a0); }
EXPORT const char * SaveIniSettingsToMemory(size_t * a0) { return ImGui::SaveIniSettingsToMemory(a0); }
EXPORT void DebugTextEncoding(const char * a0) { ImGui::DebugTextEncoding(a0); }
EXPORT void DebugFlashStyleColor(ImGuiCol a0) { ImGui::DebugFlashStyleColor(a0); }
EXPORT void DebugStartItemPicker(void) { ImGui::DebugStartItemPicker(); }
EXPORT bool DebugCheckVersionAndDataLayout(const char * a0, size_t a1, size_t a2, size_t a3, size_t a4, size_t a5, size_t a6) { return ImGui::DebugCheckVersionAndDataLayout(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void DebugLog(const char * a0) { ImGui::DebugLog("%s", a0); }
EXPORT void SetAllocatorFunctions(ImGuiMemAllocFunc a0, ImGuiMemFreeFunc a1, void * a2) { ImGui::SetAllocatorFunctions(a0, a1, a2); }
EXPORT void GetAllocatorFunctions(ImGuiMemAllocFunc * a0, ImGuiMemFreeFunc * a1, void ** a2) { ImGui::GetAllocatorFunctions(a0, a1, a2); }
EXPORT void * MemAlloc(size_t a0) { return ImGui::MemAlloc(a0); }
EXPORT void MemFree(void * a0) { ImGui::MemFree(a0); }
EXPORT void UpdatePlatformWindows(void) { ImGui::UpdatePlatformWindows(); }
EXPORT void RenderPlatformWindowsDefault(void * a0, void * a1) { ImGui::RenderPlatformWindowsDefault(a0, a1); }
EXPORT void DestroyPlatformWindows(void) { ImGui::DestroyPlatformWindows(); }
EXPORT ImGuiViewport * FindViewportByID(ImGuiID a0) { return ImGui::FindViewportByID(a0); }
EXPORT ImGuiViewport * FindViewportByPlatformHandle(void * a0) { return ImGui::FindViewportByPlatformHandle(a0); }
EXPORT void ImGuiStyle_ScaleAllSizes(ImGuiStyle *target, float a0) { target->ScaleAllSizes(a0); }
EXPORT void ImGuiIO_AddKeyEvent(ImGuiIO *target, ImGuiKey a0, bool a1) { target->AddKeyEvent(a0, a1); }
EXPORT void ImGuiIO_AddKeyAnalogEvent(ImGuiIO *target, ImGuiKey a0, bool a1, float a2) { target->AddKeyAnalogEvent(a0, a1, a2); }
EXPORT void ImGuiIO_AddMousePosEvent(ImGuiIO *target, float a0, float a1) { target->AddMousePosEvent(a0, a1); }
EXPORT void ImGuiIO_AddMouseButtonEvent(ImGuiIO *target, int a0, bool a1) { target->AddMouseButtonEvent(a0, a1); }
EXPORT void ImGuiIO_AddMouseWheelEvent(ImGuiIO *target, float a0, float a1) { target->AddMouseWheelEvent(a0, a1); }
EXPORT void ImGuiIO_AddMouseSourceEvent(ImGuiIO *target, ImGuiMouseSource a0) { target->AddMouseSourceEvent(a0); }
EXPORT void ImGuiIO_AddMouseViewportEvent(ImGuiIO *target, ImGuiID a0) { target->AddMouseViewportEvent(a0); }
EXPORT void ImGuiIO_AddFocusEvent(ImGuiIO *target, bool a0) { target->AddFocusEvent(a0); }
EXPORT void ImGuiIO_AddInputCharacter(ImGuiIO *target, unsigned int a0) { target->AddInputCharacter(a0); }
EXPORT void ImGuiIO_AddInputCharacterUTF16(ImGuiIO *target, ImWchar16 a0) { target->AddInputCharacterUTF16(a0); }
EXPORT void ImGuiIO_AddInputCharactersUTF8(ImGuiIO *target, const char * a0) { target->AddInputCharactersUTF8(a0); }
EXPORT void ImGuiIO_SetKeyEventNativeData(ImGuiIO *target, ImGuiKey a0, int a1, int a2, int a3) { target->SetKeyEventNativeData(a0, a1, a2, a3); }
EXPORT void ImGuiIO_SetAppAcceptingEvents(ImGuiIO *target, bool a0) { target->SetAppAcceptingEvents(a0); }
EXPORT void ImGuiIO_ClearEventsQueue(ImGuiIO *target) { target->ClearEventsQueue(); }
EXPORT void ImGuiIO_ClearInputKeys(ImGuiIO *target) { target->ClearInputKeys(); }
EXPORT void ImGuiIO_ClearInputMouse(ImGuiIO *target) { target->ClearInputMouse(); }
EXPORT void ImGuiInputTextCallbackData_DeleteChars(ImGuiInputTextCallbackData *target, int a0, int a1) { target->DeleteChars(a0, a1); }
EXPORT void ImGuiInputTextCallbackData_InsertChars(ImGuiInputTextCallbackData *target, int a0, const char * a1, const char * a2) { target->InsertChars(a0, a1, a2); }
EXPORT void ImGuiInputTextCallbackData_SelectAll(ImGuiInputTextCallbackData *target) { target->SelectAll(); }
EXPORT void ImGuiInputTextCallbackData_ClearSelection(ImGuiInputTextCallbackData *target) { target->ClearSelection(); }
EXPORT bool ImGuiInputTextCallbackData_HasSelection(ImGuiInputTextCallbackData *target) { return target->HasSelection(); }
EXPORT void ImGuiPayload_Clear(ImGuiPayload *target) { target->Clear(); }
EXPORT bool ImGuiPayload_IsDataType(ImGuiPayload *target, const char * a0) { return target->IsDataType(a0); }
EXPORT bool ImGuiPayload_IsPreview(ImGuiPayload *target) { return target->IsPreview(); }
EXPORT bool ImGuiPayload_IsDelivery(ImGuiPayload *target) { return target->IsDelivery(); }
EXPORT bool ImGuiTextFilter_Draw(ImGuiTextFilter *target, const char * a0, float a1) { return target->Draw(a0, a1); }
EXPORT bool ImGuiTextFilter_PassFilter(ImGuiTextFilter *target, const char * a0, const char * a1) { return target->PassFilter(a0, a1); }
EXPORT void ImGuiTextFilter_Build(ImGuiTextFilter *target) { target->Build(); }
EXPORT void ImGuiTextFilter_Clear(ImGuiTextFilter *target) { target->Clear(); }
EXPORT bool ImGuiTextFilter_IsActive(ImGuiTextFilter *target) { return target->IsActive(); }
EXPORT void ImGuiStorage_Clear(ImGuiStorage *target) { target->Clear(); }
EXPORT int ImGuiStorage_GetInt(ImGuiStorage *target, ImGuiID a0, int a1) { return target->GetInt(a0, a1); }
EXPORT void ImGuiStorage_SetInt(ImGuiStorage *target, ImGuiID a0, int a1) { target->SetInt(a0, a1); }
EXPORT bool ImGuiStorage_GetBool(ImGuiStorage *target, ImGuiID a0, bool a1) { return target->GetBool(a0, a1); }
EXPORT void ImGuiStorage_SetBool(ImGuiStorage *target, ImGuiID a0, bool a1) { target->SetBool(a0, a1); }
EXPORT float ImGuiStorage_GetFloat(ImGuiStorage *target, ImGuiID a0, float a1) { return target->GetFloat(a0, a1); }
EXPORT void ImGuiStorage_SetFloat(ImGuiStorage *target, ImGuiID a0, float a1) { target->SetFloat(a0, a1); }
EXPORT void * ImGuiStorage_GetVoidPtr(ImGuiStorage *target, ImGuiID a0) { return target->GetVoidPtr(a0); }
EXPORT void ImGuiStorage_SetVoidPtr(ImGuiStorage *target, ImGuiID a0, void * a1) { target->SetVoidPtr(a0, a1); }
EXPORT int * ImGuiStorage_GetIntRef(ImGuiStorage *target, ImGuiID a0, int a1) { return target->GetIntRef(a0, a1); }
EXPORT bool * ImGuiStorage_GetBoolRef(ImGuiStorage *target, ImGuiID a0, bool a1) { return target->GetBoolRef(a0, a1); }
EXPORT float * ImGuiStorage_GetFloatRef(ImGuiStorage *target, ImGuiID a0, float a1) { return target->GetFloatRef(a0, a1); }
EXPORT void ** ImGuiStorage_GetVoidPtrRef(ImGuiStorage *target, ImGuiID a0, void * a1) { return target->GetVoidPtrRef(a0, a1); }
EXPORT void ImGuiStorage_BuildSortByKey(ImGuiStorage *target) { target->BuildSortByKey(); }
EXPORT void ImGuiStorage_SetAllInt(ImGuiStorage *target, int a0) { target->SetAllInt(a0); }
EXPORT void ImGuiListClipper_Begin(ImGuiListClipper *target, int a0, float a1) { target->Begin(a0, a1); }
EXPORT void ImGuiListClipper_End(ImGuiListClipper *target) { target->End(); }
EXPORT bool ImGuiListClipper_Step(ImGuiListClipper *target) { return target->Step(); }
EXPORT void ImGuiListClipper_IncludeItemByIndex(ImGuiListClipper *target, int a0) { target->IncludeItemByIndex(a0); }
EXPORT void ImGuiListClipper_IncludeItemsByIndex(ImGuiListClipper *target, int a0, int a1) { target->IncludeItemsByIndex(a0, a1); }
EXPORT void ImGuiListClipper_SeekCursorForItem(ImGuiListClipper *target, int a0) { target->SeekCursorForItem(a0); }
EXPORT void ImGuiSelectionBasicStorage_ApplyRequests(ImGuiSelectionBasicStorage *target, ImGuiMultiSelectIO * a0) { target->ApplyRequests(a0); }
EXPORT bool ImGuiSelectionBasicStorage_Contains(ImGuiSelectionBasicStorage *target, ImGuiID a0) { return target->Contains(a0); }
EXPORT void ImGuiSelectionBasicStorage_Clear(ImGuiSelectionBasicStorage *target) { target->Clear(); }
EXPORT void ImGuiSelectionBasicStorage_Swap(ImGuiSelectionBasicStorage *target, ImGuiSelectionBasicStorage *a0) { target->Swap(*a0); }
EXPORT void ImGuiSelectionBasicStorage_SetItemSelected(ImGuiSelectionBasicStorage *target, ImGuiID a0, bool a1) { target->SetItemSelected(a0, a1); }
EXPORT bool ImGuiSelectionBasicStorage_GetNextSelectedItem(ImGuiSelectionBasicStorage *target, void ** a0, ImGuiID * a1) { return target->GetNextSelectedItem(a0, a1); }
EXPORT ImGuiID ImGuiSelectionBasicStorage_GetStorageIdFromIndex(ImGuiSelectionBasicStorage *target, int a0) { return target->GetStorageIdFromIndex(a0); }
EXPORT void ImGuiSelectionExternalStorage_ApplyRequests(ImGuiSelectionExternalStorage *target, ImGuiMultiSelectIO * a0) { target->ApplyRequests(a0); }
EXPORT ImTextureID ImDrawCmd_GetTexID(ImDrawCmd *target) { return target->GetTexID(); }
EXPORT void ImDrawListSplitter_Clear(ImDrawListSplitter *target) { target->Clear(); }
EXPORT void ImDrawListSplitter_ClearFreeMemory(ImDrawListSplitter *target) { target->ClearFreeMemory(); }
EXPORT void ImDrawListSplitter_Split(ImDrawListSplitter *target, ImDrawList * a0, int a1) { target->Split(a0, a1); }
EXPORT void ImDrawListSplitter_Merge(ImDrawListSplitter *target, ImDrawList * a0) { target->Merge(a0); }
EXPORT void ImDrawListSplitter_SetCurrentChannel(ImDrawListSplitter *target, ImDrawList * a0, int a1) { target->SetCurrentChannel(a0, a1); }
EXPORT void ImDrawList_PushClipRect(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, bool a2) { target->PushClipRect(*a0, *a1, a2); }
EXPORT void ImDrawList_PushClipRectFullScreen(ImDrawList *target) { target->PushClipRectFullScreen(); }
EXPORT void ImDrawList_PopClipRect(ImDrawList *target) { target->PopClipRect(); }
EXPORT void ImDrawList_PushTexture(ImDrawList *target, ImTextureRef a0) { target->PushTexture(a0); }
EXPORT void ImDrawList_PopTexture(ImDrawList *target) { target->PopTexture(); }
EXPORT ImVec2 ImDrawList_GetClipRectMin(ImDrawList *target) { return target->GetClipRectMin(); }
EXPORT ImVec2 ImDrawList_GetClipRectMax(ImDrawList *target) { return target->GetClipRectMax(); }
EXPORT void ImDrawList_AddLine(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2, float a3) { target->AddLine(*a0, *a1, a2, a3); }
EXPORT void ImDrawList_AddRect(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2, float a3, ImDrawFlags a4, float a5) { target->AddRect(*a0, *a1, a2, a3, a4, a5); }
EXPORT void ImDrawList_AddRectFilled(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2, float a3, ImDrawFlags a4) { target->AddRectFilled(*a0, *a1, a2, a3, a4); }
EXPORT void ImDrawList_AddRectFilledMultiColor(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2, ImU32 a3, ImU32 a4, ImU32 a5) { target->AddRectFilledMultiColor(*a0, *a1, a2, a3, a4, a5); }
EXPORT void ImDrawList_AddQuad(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3, ImU32 a4, float a5) { target->AddQuad(*a0, *a1, *a2, *a3, a4, a5); }
EXPORT void ImDrawList_AddQuadFilled(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3, ImU32 a4) { target->AddQuadFilled(*a0, *a1, *a2, *a3, a4); }
EXPORT void ImDrawList_AddTriangle(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, const ImVec2 *a2, ImU32 a3, float a4) { target->AddTriangle(*a0, *a1, *a2, a3, a4); }
EXPORT void ImDrawList_AddTriangleFilled(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, const ImVec2 *a2, ImU32 a3) { target->AddTriangleFilled(*a0, *a1, *a2, a3); }
EXPORT void ImDrawList_AddCircle(ImDrawList *target, const ImVec2 *a0, float a1, ImU32 a2, int a3, float a4) { target->AddCircle(*a0, a1, a2, a3, a4); }
EXPORT void ImDrawList_AddCircleFilled(ImDrawList *target, const ImVec2 *a0, float a1, ImU32 a2, int a3) { target->AddCircleFilled(*a0, a1, a2, a3); }
EXPORT void ImDrawList_AddNgon(ImDrawList *target, const ImVec2 *a0, float a1, ImU32 a2, int a3, float a4) { target->AddNgon(*a0, a1, a2, a3, a4); }
EXPORT void ImDrawList_AddNgonFilled(ImDrawList *target, const ImVec2 *a0, float a1, ImU32 a2, int a3) { target->AddNgonFilled(*a0, a1, a2, a3); }
EXPORT void ImDrawList_AddEllipse(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2, float a3, int a4, float a5) { target->AddEllipse(*a0, *a1, a2, a3, a4, a5); }
EXPORT void ImDrawList_AddEllipseFilled(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2, float a3, int a4) { target->AddEllipseFilled(*a0, *a1, a2, a3, a4); }
EXPORT void ImDrawList_AddText_0(ImDrawList *target, const ImVec2 *a0, ImU32 a1, const char * a2, const char * a3) { target->AddText(*a0, a1, a2, a3); }
EXPORT void ImDrawList_AddText_1(ImDrawList *target, ImFont * a0, float a1, const ImVec2 *a2, ImU32 a3, const char * a4, const char * a5, float a6, const ImVec4 * a7) { target->AddText(a0, a1, *a2, a3, a4, a5, a6, a7); }
EXPORT void ImDrawList_AddBezierCubic(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3, ImU32 a4, float a5, int a6) { target->AddBezierCubic(*a0, *a1, *a2, *a3, a4, a5, a6); }
EXPORT void ImDrawList_AddBezierQuadratic(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, const ImVec2 *a2, ImU32 a3, float a4, int a5) { target->AddBezierQuadratic(*a0, *a1, *a2, a3, a4, a5); }
EXPORT void ImDrawList_AddPolyline(ImDrawList *target, const ImVec2 * a0, int a1, ImU32 a2, ImDrawFlags a3, float a4) { target->AddPolyline(a0, a1, a2, a3, a4); }
EXPORT void ImDrawList_AddConvexPolyFilled(ImDrawList *target, const ImVec2 * a0, int a1, ImU32 a2) { target->AddConvexPolyFilled(a0, a1, a2); }
EXPORT void ImDrawList_AddConcavePolyFilled(ImDrawList *target, const ImVec2 * a0, int a1, ImU32 a2) { target->AddConcavePolyFilled(a0, a1, a2); }
EXPORT void ImDrawList_AddImage(ImDrawList *target, ImTextureRef a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3, const ImVec2 *a4, ImU32 a5) { target->AddImage(a0, *a1, *a2, *a3, *a4, a5); }
EXPORT void ImDrawList_AddImageQuad(ImDrawList *target, ImTextureRef a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3, const ImVec2 *a4, const ImVec2 *a5, const ImVec2 *a6, const ImVec2 *a7, const ImVec2 *a8, ImU32 a9) { target->AddImageQuad(a0, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, a9); }
EXPORT void ImDrawList_AddImageRounded(ImDrawList *target, ImTextureRef a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3, const ImVec2 *a4, ImU32 a5, float a6, ImDrawFlags a7) { target->AddImageRounded(a0, *a1, *a2, *a3, *a4, a5, a6, a7); }
EXPORT void ImDrawList_PathClear(ImDrawList *target) { target->PathClear(); }
EXPORT void ImDrawList_PathLineTo(ImDrawList *target, const ImVec2 *a0) { target->PathLineTo(*a0); }
EXPORT void ImDrawList_PathLineToMergeDuplicate(ImDrawList *target, const ImVec2 *a0) { target->PathLineToMergeDuplicate(*a0); }
EXPORT void ImDrawList_PathFillConvex(ImDrawList *target, ImU32 a0) { target->PathFillConvex(a0); }
EXPORT void ImDrawList_PathFillConcave(ImDrawList *target, ImU32 a0) { target->PathFillConcave(a0); }
EXPORT void ImDrawList_PathStroke(ImDrawList *target, ImU32 a0, ImDrawFlags a1, float a2) { target->PathStroke(a0, a1, a2); }
EXPORT void ImDrawList_PathArcTo(ImDrawList *target, const ImVec2 *a0, float a1, float a2, float a3, int a4) { target->PathArcTo(*a0, a1, a2, a3, a4); }
EXPORT void ImDrawList_PathArcToFast(ImDrawList *target, const ImVec2 *a0, float a1, int a2, int a3) { target->PathArcToFast(*a0, a1, a2, a3); }
EXPORT void ImDrawList_PathEllipticalArcTo(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, float a2, float a3, float a4, int a5) { target->PathEllipticalArcTo(*a0, *a1, a2, a3, a4, a5); }
EXPORT void ImDrawList_PathBezierCubicCurveTo(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, const ImVec2 *a2, int a3) { target->PathBezierCubicCurveTo(*a0, *a1, *a2, a3); }
EXPORT void ImDrawList_PathBezierQuadraticCurveTo(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, int a2) { target->PathBezierQuadraticCurveTo(*a0, *a1, a2); }
EXPORT void ImDrawList_PathRect(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, float a2, ImDrawFlags a3) { target->PathRect(*a0, *a1, a2, a3); }
EXPORT void ImDrawList_AddCallback(ImDrawList *target, ImDrawCallback a0, void * a1, size_t a2) { target->AddCallback(a0, a1, a2); }
EXPORT void ImDrawList_AddDrawCmd(ImDrawList *target) { target->AddDrawCmd(); }
EXPORT ImDrawList * ImDrawList_CloneOutput(ImDrawList *target) { return target->CloneOutput(); }
EXPORT void ImDrawList_ChannelsSplit(ImDrawList *target, int a0) { target->ChannelsSplit(a0); }
EXPORT void ImDrawList_ChannelsMerge(ImDrawList *target) { target->ChannelsMerge(); }
EXPORT void ImDrawList_ChannelsSetCurrent(ImDrawList *target, int a0) { target->ChannelsSetCurrent(a0); }
EXPORT void ImDrawList_PrimReserve(ImDrawList *target, int a0, int a1) { target->PrimReserve(a0, a1); }
EXPORT void ImDrawList_PrimUnreserve(ImDrawList *target, int a0, int a1) { target->PrimUnreserve(a0, a1); }
EXPORT void ImDrawList_PrimRect(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2) { target->PrimRect(*a0, *a1, a2); }
EXPORT void ImDrawList_PrimRectUV(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3, ImU32 a4) { target->PrimRectUV(*a0, *a1, *a2, *a3, a4); }
EXPORT void ImDrawList_PrimQuadUV(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3, const ImVec2 *a4, const ImVec2 *a5, const ImVec2 *a6, const ImVec2 *a7, ImU32 a8) { target->PrimQuadUV(*a0, *a1, *a2, *a3, *a4, *a5, *a6, *a7, a8); }
EXPORT void ImDrawList_PrimWriteVtx(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2) { target->PrimWriteVtx(*a0, *a1, a2); }
EXPORT void ImDrawList_PrimWriteIdx(ImDrawList *target, ImDrawIdx a0) { target->PrimWriteIdx(a0); }
EXPORT void ImDrawList_PrimVtx(ImDrawList *target, const ImVec2 *a0, const ImVec2 *a1, ImU32 a2) { target->PrimVtx(*a0, *a1, a2); }
EXPORT void ImDrawList_SetDrawListSharedData(ImDrawList *target, ImDrawListSharedData * a0) { target->_SetDrawListSharedData(a0); }
EXPORT void ImDrawList_ResetForNewFrame(ImDrawList *target) { target->_ResetForNewFrame(); }
EXPORT void ImDrawList_ClearFreeMemory(ImDrawList *target) { target->_ClearFreeMemory(); }
EXPORT void ImDrawList_PopUnusedDrawCmd(ImDrawList *target) { target->_PopUnusedDrawCmd(); }
EXPORT void ImDrawList_TryMergeDrawCmds(ImDrawList *target) { target->_TryMergeDrawCmds(); }
EXPORT void ImDrawList_OnChangedClipRect(ImDrawList *target) { target->_OnChangedClipRect(); }
EXPORT void ImDrawList_OnChangedTexture(ImDrawList *target) { target->_OnChangedTexture(); }
EXPORT void ImDrawList_OnChangedVtxOffset(ImDrawList *target) { target->_OnChangedVtxOffset(); }
EXPORT void ImDrawList_SetTexture(ImDrawList *target, ImTextureRef a0) { target->_SetTexture(a0); }
EXPORT int ImDrawList_CalcCircleAutoSegmentCount(ImDrawList *target, float a0) { return target->_CalcCircleAutoSegmentCount(a0); }
EXPORT void ImDrawList_PathArcToFastEx(ImDrawList *target, const ImVec2 *a0, float a1, int a2, int a3, int a4) { target->_PathArcToFastEx(*a0, a1, a2, a3, a4); }
EXPORT void ImDrawList_PathArcToN(ImDrawList *target, const ImVec2 *a0, float a1, float a2, float a3, int a4) { target->_PathArcToN(*a0, a1, a2, a3, a4); }
EXPORT void ImDrawData_Clear(ImDrawData *target) { target->Clear(); }
EXPORT void ImDrawData_AddDrawList(ImDrawData *target, ImDrawList * a0) { target->AddDrawList(a0); }
EXPORT void ImDrawData_DeIndexAllBuffers(ImDrawData *target) { target->DeIndexAllBuffers(); }
EXPORT void ImDrawData_ScaleClipRects(ImDrawData *target, const ImVec2 *a0) { target->ScaleClipRects(*a0); }
EXPORT void ImTextureData_Create(ImTextureData *target, ImTextureFormat a0, int a1, int a2) { target->Create(a0, a1, a2); }
EXPORT void ImTextureData_DestroyPixels(ImTextureData *target) { target->DestroyPixels(); }
EXPORT void * ImTextureData_GetPixels(ImTextureData *target) { return target->GetPixels(); }
EXPORT void * ImTextureData_GetPixelsAt(ImTextureData *target, int a0, int a1) { return target->GetPixelsAt(a0, a1); }
EXPORT int ImTextureData_GetSizeInBytes(ImTextureData *target) { return target->GetSizeInBytes(); }
EXPORT int ImTextureData_GetPitch(ImTextureData *target) { return target->GetPitch(); }
EXPORT ImTextureRef ImTextureData_GetTexRef(ImTextureData *target) { return target->GetTexRef(); }
EXPORT ImTextureID ImTextureData_GetTexID(ImTextureData *target) { return target->GetTexID(); }
EXPORT void ImTextureData_SetTexID(ImTextureData *target, ImTextureID a0) { target->SetTexID(a0); }
EXPORT void ImTextureData_SetStatus(ImTextureData *target, ImTextureStatus a0) { target->SetStatus(a0); }
EXPORT void ImFontGlyphRangesBuilder_Clear(ImFontGlyphRangesBuilder *target) { target->Clear(); }
EXPORT bool ImFontGlyphRangesBuilder_GetBit(ImFontGlyphRangesBuilder *target, size_t a0) { return target->GetBit(a0); }
EXPORT void ImFontGlyphRangesBuilder_SetBit(ImFontGlyphRangesBuilder *target, size_t a0) { target->SetBit(a0); }
EXPORT void ImFontGlyphRangesBuilder_AddChar(ImFontGlyphRangesBuilder *target, ImWchar a0) { target->AddChar(a0); }
EXPORT void ImFontGlyphRangesBuilder_AddText(ImFontGlyphRangesBuilder *target, const char * a0, const char * a1) { target->AddText(a0, a1); }
EXPORT void ImFontGlyphRangesBuilder_AddRanges(ImFontGlyphRangesBuilder *target, const ImWchar * a0) { target->AddRanges(a0); }
EXPORT void ImFontGlyphRangesBuilder_BuildRanges(ImFontGlyphRangesBuilder *target, ImVector<ImWchar> * a0) { target->BuildRanges(a0); }
EXPORT ImFont * ImFontAtlas_AddFont(ImFontAtlas *target, const ImFontConfig * a0) { return target->AddFont(a0); }
EXPORT ImFont * ImFontAtlas_AddFontDefault(ImFontAtlas *target, const ImFontConfig * a0) { return target->AddFontDefault(a0); }
EXPORT ImFont * ImFontAtlas_AddFontFromFileTTF(ImFontAtlas *target, const char * a0, float a1, const ImFontConfig * a2, const ImWchar * a3) { return target->AddFontFromFileTTF(a0, a1, a2, a3); }
EXPORT ImFont * ImFontAtlas_AddFontFromMemoryTTF(ImFontAtlas *target, void * a0, int a1, float a2, const ImFontConfig * a3, const ImWchar * a4) { return target->AddFontFromMemoryTTF(a0, a1, a2, a3, a4); }
EXPORT ImFont * ImFontAtlas_AddFontFromMemoryCompressedTTF(ImFontAtlas *target, const void * a0, int a1, float a2, const ImFontConfig * a3, const ImWchar * a4) { return target->AddFontFromMemoryCompressedTTF(a0, a1, a2, a3, a4); }
EXPORT ImFont * ImFontAtlas_AddFontFromMemoryCompressedBase85TTF(ImFontAtlas *target, const char * a0, float a1, const ImFontConfig * a2, const ImWchar * a3) { return target->AddFontFromMemoryCompressedBase85TTF(a0, a1, a2, a3); }
EXPORT void ImFontAtlas_RemoveFont(ImFontAtlas *target, ImFont * a0) { target->RemoveFont(a0); }
EXPORT void ImFontAtlas_Clear(ImFontAtlas *target) { target->Clear(); }
EXPORT void ImFontAtlas_CompactCache(ImFontAtlas *target) { target->CompactCache(); }
EXPORT void ImFontAtlas_SetFontLoader(ImFontAtlas *target, const ImFontLoader * a0) { target->SetFontLoader(a0); }
EXPORT void ImFontAtlas_ClearInputData(ImFontAtlas *target) { target->ClearInputData(); }
EXPORT void ImFontAtlas_ClearFonts(ImFontAtlas *target) { target->ClearFonts(); }
EXPORT void ImFontAtlas_ClearTexData(ImFontAtlas *target) { target->ClearTexData(); }
EXPORT const ImWchar * ImFontAtlas_GetGlyphRangesDefault(ImFontAtlas *target) { return target->GetGlyphRangesDefault(); }
EXPORT ImFontAtlasRectId ImFontAtlas_AddCustomRect(ImFontAtlas *target, int a0, int a1, ImFontAtlasRect * a2) { return target->AddCustomRect(a0, a1, a2); }
EXPORT void ImFontAtlas_RemoveCustomRect(ImFontAtlas *target, ImFontAtlasRectId a0) { target->RemoveCustomRect(a0); }
EXPORT bool ImFontAtlas_GetCustomRect(ImFontAtlas *target, ImFontAtlasRectId a0, ImFontAtlasRect * a1) { return target->GetCustomRect(a0, a1); }
EXPORT void ImFontBaked_ClearOutputData(ImFontBaked *target) { target->ClearOutputData(); }
EXPORT ImFontGlyph * ImFontBaked_FindGlyph(ImFontBaked *target, ImWchar a0) { return target->FindGlyph(a0); }
EXPORT ImFontGlyph * ImFontBaked_FindGlyphNoFallback(ImFontBaked *target, ImWchar a0) { return target->FindGlyphNoFallback(a0); }
EXPORT float ImFontBaked_GetCharAdvance(ImFontBaked *target, ImWchar a0) { return target->GetCharAdvance(a0); }
EXPORT bool ImFontBaked_IsGlyphLoaded(ImFontBaked *target, ImWchar a0) { return target->IsGlyphLoaded(a0); }
EXPORT bool ImFont_IsGlyphInFont(ImFont *target, ImWchar a0) { return target->IsGlyphInFont(a0); }
EXPORT bool ImFont_IsLoaded(ImFont *target) { return target->IsLoaded(); }
EXPORT const char * ImFont_GetDebugName(ImFont *target) { return target->GetDebugName(); }
EXPORT ImFontBaked * ImFont_GetFontBaked(ImFont *target, float a0, float a1) { return target->GetFontBaked(a0, a1); }
EXPORT ImVec2 ImFont_CalcTextSizeA(ImFont *target, float a0, float a1, float a2, const char * a3, const char * a4, const char ** a5) { return target->CalcTextSizeA(a0, a1, a2, a3, a4, a5); }
EXPORT const char * ImFont_CalcWordWrapPosition(ImFont *target, float a0, const char * a1, const char * a2, float a3) { return target->CalcWordWrapPosition(a0, a1, a2, a3); }
EXPORT void ImFont_RenderChar(ImFont *target, ImDrawList * a0, float a1, const ImVec2 *a2, ImU32 a3, ImWchar a4, const ImVec4 * a5) { target->RenderChar(a0, a1, *a2, a3, a4, a5); }
EXPORT void ImFont_RenderText(ImFont *target, ImDrawList * a0, float a1, const ImVec2 *a2, ImU32 a3, const ImVec4 *a4, const char * a5, const char * a6, float a7, bool a8) { target->RenderText(a0, a1, *a2, a3, *a4, a5, a6, a7, a8); }
EXPORT void ImFont_ClearOutputData(ImFont *target) { target->ClearOutputData(); }
EXPORT void ImFont_AddRemapChar(ImFont *target, ImWchar a0, ImWchar a1) { target->AddRemapChar(a0, a1); }
EXPORT bool ImFont_IsGlyphRangeUnused(ImFont *target, unsigned int a0, unsigned int a1) { return target->IsGlyphRangeUnused(a0, a1); }
EXPORT ImVec2 ImGuiViewport_GetCenter(ImGuiViewport *target) { return target->GetCenter(); }
EXPORT ImVec2 ImGuiViewport_GetWorkCenter(ImGuiViewport *target) { return target->GetWorkCenter(); }
EXPORT ImVec2 ImRect_GetCenter_internal(ImRect *target) { return target->GetCenter(); }
EXPORT ImVec2 ImRect_GetSize_internal(ImRect *target) { return target->GetSize(); }
EXPORT float ImRect_GetWidth_internal(ImRect *target) { return target->GetWidth(); }
EXPORT float ImRect_GetHeight_internal(ImRect *target) { return target->GetHeight(); }
EXPORT float ImRect_GetArea_internal(ImRect *target) { return target->GetArea(); }
EXPORT ImVec2 ImRect_GetTL_internal(ImRect *target) { return target->GetTL(); }
EXPORT ImVec2 ImRect_GetTR_internal(ImRect *target) { return target->GetTR(); }
EXPORT ImVec2 ImRect_GetBL_internal(ImRect *target) { return target->GetBL(); }
EXPORT ImVec2 ImRect_GetBR_internal(ImRect *target) { return target->GetBR(); }
EXPORT bool ImRect_Contains_internal_0(ImRect *target, const ImVec2 *a0) { return target->Contains(*a0); }
EXPORT bool ImRect_Contains_internal_1(ImRect *target, const ImRect *a0) { return target->Contains(*a0); }
EXPORT bool ImRect_ContainsWithPad_internal(ImRect *target, const ImVec2 *a0, const ImVec2 *a1) { return target->ContainsWithPad(*a0, *a1); }
EXPORT bool ImRect_Overlaps_internal(ImRect *target, const ImRect *a0) { return target->Overlaps(*a0); }
EXPORT void ImRect_Add_internal_0(ImRect *target, const ImVec2 *a0) { target->Add(*a0); }
EXPORT void ImRect_Add_internal_1(ImRect *target, const ImRect *a0) { target->Add(*a0); }
EXPORT void ImRect_Expand_internal_0(ImRect *target, const float a0) { target->Expand(a0); }
EXPORT void ImRect_Expand_internal_1(ImRect *target, const ImVec2 *a0) { target->Expand(*a0); }
EXPORT void ImRect_Translate_internal(ImRect *target, const ImVec2 *a0) { target->Translate(*a0); }
EXPORT void ImRect_TranslateX_internal(ImRect *target, float a0) { target->TranslateX(a0); }
EXPORT void ImRect_TranslateY_internal(ImRect *target, float a0) { target->TranslateY(a0); }
EXPORT void ImRect_ClipWith_internal(ImRect *target, const ImRect *a0) { target->ClipWith(*a0); }
EXPORT void ImRect_ClipWithFull_internal(ImRect *target, const ImRect *a0) { target->ClipWithFull(*a0); }
EXPORT void ImRect_Floor_internal(ImRect *target) { target->Floor(); }
EXPORT bool ImRect_IsInverted_internal(ImRect *target) { return target->IsInverted(); }
EXPORT ImVec4 ImRect_ToVec4_internal(ImRect *target) { return target->ToVec4(); }
EXPORT void ImBitVector_Create_internal(ImBitVector *target, int a0) { target->Create(a0); }
EXPORT void ImBitVector_Clear_internal(ImBitVector *target) { target->Clear(); }
EXPORT bool ImBitVector_TestBit_internal(ImBitVector *target, int a0) { return target->TestBit(a0); }
EXPORT void ImBitVector_SetBit_internal(ImBitVector *target, int a0) { target->SetBit(a0); }
EXPORT void ImBitVector_ClearBit_internal(ImBitVector *target, int a0) { target->ClearBit(a0); }
EXPORT void ImGuiTextIndex_clear_internal(ImGuiTextIndex *target) { target->clear(); }
EXPORT int ImGuiTextIndex_size_internal(ImGuiTextIndex *target) { return target->size(); }
EXPORT const char * ImGuiTextIndex_get_line_begin_internal(ImGuiTextIndex *target, const char * a0, int a1) { return target->get_line_begin(a0, a1); }
EXPORT const char * ImGuiTextIndex_get_line_end_internal(ImGuiTextIndex *target, const char * a0, int a1) { return target->get_line_end(a0, a1); }
EXPORT void ImGuiTextIndex_append_internal(ImGuiTextIndex *target, const char * a0, int a1, int a2) { target->append(a0, a1, a2); }
EXPORT void ImDrawListSharedData_SetCircleTessellationMaxError_internal(ImDrawListSharedData *target, float a0) { target->SetCircleTessellationMaxError(a0); }
EXPORT void * ImGuiStyleVarInfo_GetVarPtr_internal(ImGuiStyleVarInfo *target, void * a0) { return target->GetVarPtr(a0); }
EXPORT void ImGuiMenuColumns_Update_internal(ImGuiMenuColumns *target, float a0, bool a1) { target->Update(a0, a1); }
EXPORT float ImGuiMenuColumns_DeclColumns_internal(ImGuiMenuColumns *target, float a0, float a1, float a2, float a3) { return target->DeclColumns(a0, a1, a2, a3); }
EXPORT void ImGuiMenuColumns_CalcNextTotalWidth_internal(ImGuiMenuColumns *target, bool a0) { target->CalcNextTotalWidth(a0); }
EXPORT void ImGuiInputTextDeactivatedState_ClearFreeMemory_internal(ImGuiInputTextDeactivatedState *target) { target->ClearFreeMemory(); }
EXPORT void ImGuiInputTextState_ClearText_internal(ImGuiInputTextState *target) { target->ClearText(); }
EXPORT void ImGuiInputTextState_ClearFreeMemory_internal(ImGuiInputTextState *target) { target->ClearFreeMemory(); }
EXPORT void ImGuiInputTextState_OnKeyPressed_internal(ImGuiInputTextState *target, int a0) { target->OnKeyPressed(a0); }
EXPORT void ImGuiInputTextState_OnCharPressed_internal(ImGuiInputTextState *target, unsigned int a0) { target->OnCharPressed(a0); }
EXPORT void ImGuiInputTextState_CursorAnimReset_internal(ImGuiInputTextState *target) { target->CursorAnimReset(); }
EXPORT void ImGuiInputTextState_CursorClamp_internal(ImGuiInputTextState *target) { target->CursorClamp(); }
EXPORT bool ImGuiInputTextState_HasSelection_internal(ImGuiInputTextState *target) { return target->HasSelection(); }
EXPORT void ImGuiInputTextState_ClearSelection_internal(ImGuiInputTextState *target) { target->ClearSelection(); }
EXPORT int ImGuiInputTextState_GetCursorPos_internal(ImGuiInputTextState *target) { return target->GetCursorPos(); }
EXPORT int ImGuiInputTextState_GetSelectionStart_internal(ImGuiInputTextState *target) { return target->GetSelectionStart(); }
EXPORT int ImGuiInputTextState_GetSelectionEnd_internal(ImGuiInputTextState *target) { return target->GetSelectionEnd(); }
EXPORT void ImGuiInputTextState_SelectAll_internal(ImGuiInputTextState *target) { target->SelectAll(); }
EXPORT void ImGuiInputTextState_ReloadUserBufAndSelectAll_internal(ImGuiInputTextState *target) { target->ReloadUserBufAndSelectAll(); }
EXPORT void ImGuiInputTextState_ReloadUserBufAndKeepSelection_internal(ImGuiInputTextState *target) { target->ReloadUserBufAndKeepSelection(); }
EXPORT void ImGuiInputTextState_ReloadUserBufAndMoveToEnd_internal(ImGuiInputTextState *target) { target->ReloadUserBufAndMoveToEnd(); }
EXPORT void ImGuiNextWindowData_ClearFlags_internal(ImGuiNextWindowData *target) { target->ClearFlags(); }
EXPORT void ImGuiNextItemData_ClearFlags_internal(ImGuiNextItemData *target) { target->ClearFlags(); }
EXPORT void ImGuiKeyRoutingTable_Clear_internal(ImGuiKeyRoutingTable *target) { target->Clear(); }
EXPORT ImGuiListClipperRange ImGuiListClipperRange_FromIndices_internal(int a0, int a1) { return ImGuiListClipperRange::FromIndices(a0, a1); }
EXPORT ImGuiListClipperRange ImGuiListClipperRange_FromPositions_internal(float a0, float a1, int a2, int a3) { return ImGuiListClipperRange::FromPositions(a0, a1, a2, a3); }
EXPORT void ImGuiListClipperData_Reset_internal(ImGuiListClipperData *target, ImGuiListClipper * a0) { target->Reset(a0); }
EXPORT void ImGuiNavItemData_Clear_internal(ImGuiNavItemData *target) { target->Clear(); }
EXPORT void ImGuiTypingSelectState_Clear_internal(ImGuiTypingSelectState *target) { target->Clear(); }
EXPORT void ImGuiMultiSelectTempData_Clear_internal(ImGuiMultiSelectTempData *target) { target->Clear(); }
EXPORT void ImGuiMultiSelectTempData_ClearIO_internal(ImGuiMultiSelectTempData *target) { target->ClearIO(); }
EXPORT bool ImGuiDockNode_IsRootNode_internal(ImGuiDockNode *target) { return target->IsRootNode(); }
EXPORT bool ImGuiDockNode_IsDockSpace_internal(ImGuiDockNode *target) { return target->IsDockSpace(); }
EXPORT bool ImGuiDockNode_IsFloatingNode_internal(ImGuiDockNode *target) { return target->IsFloatingNode(); }
EXPORT bool ImGuiDockNode_IsCentralNode_internal(ImGuiDockNode *target) { return target->IsCentralNode(); }
EXPORT bool ImGuiDockNode_IsHiddenTabBar_internal(ImGuiDockNode *target) { return target->IsHiddenTabBar(); }
EXPORT bool ImGuiDockNode_IsNoTabBar_internal(ImGuiDockNode *target) { return target->IsNoTabBar(); }
EXPORT bool ImGuiDockNode_IsSplitNode_internal(ImGuiDockNode *target) { return target->IsSplitNode(); }
EXPORT bool ImGuiDockNode_IsLeafNode_internal(ImGuiDockNode *target) { return target->IsLeafNode(); }
EXPORT bool ImGuiDockNode_IsEmpty_internal(ImGuiDockNode *target) { return target->IsEmpty(); }
EXPORT ImRect ImGuiDockNode_Rect_internal(ImGuiDockNode *target) { return target->Rect(); }
EXPORT void ImGuiDockNode_SetLocalFlags_internal(ImGuiDockNode *target, ImGuiDockNodeFlags a0) { target->SetLocalFlags(a0); }
EXPORT void ImGuiDockNode_UpdateMergedFlags_internal(ImGuiDockNode *target) { target->UpdateMergedFlags(); }
EXPORT void ImGuiViewportP_ClearRequestFlags_internal(ImGuiViewportP *target) { target->ClearRequestFlags(); }
EXPORT ImVec2 ImGuiViewportP_CalcWorkRectPos_internal(ImGuiViewportP *target, const ImVec2 *a0) { return target->CalcWorkRectPos(*a0); }
EXPORT ImVec2 ImGuiViewportP_CalcWorkRectSize_internal(ImGuiViewportP *target, const ImVec2 *a0, const ImVec2 *a1) { return target->CalcWorkRectSize(*a0, *a1); }
EXPORT void ImGuiViewportP_UpdateWorkRect_internal(ImGuiViewportP *target) { target->UpdateWorkRect(); }
EXPORT ImRect ImGuiViewportP_GetMainRect_internal(ImGuiViewportP *target) { return target->GetMainRect(); }
EXPORT ImRect ImGuiViewportP_GetWorkRect_internal(ImGuiViewportP *target) { return target->GetWorkRect(); }
EXPORT ImRect ImGuiViewportP_GetBuildWorkRect_internal(ImGuiViewportP *target) { return target->GetBuildWorkRect(); }
EXPORT char * ImGuiWindowSettings_GetName_internal(ImGuiWindowSettings *target) { return target->GetName(); }
EXPORT ImGuiID ImGuiWindow_GetID_internal_0(ImGuiWindow *target, const char * a0, const char * a1) { return target->GetID(a0, a1); }
EXPORT ImGuiID ImGuiWindow_GetID_internal_1(ImGuiWindow *target, const void * a0) { return target->GetID(a0); }
EXPORT ImGuiID ImGuiWindow_GetID_internal_2(ImGuiWindow *target, int a0) { return target->GetID(a0); }
EXPORT ImGuiID ImGuiWindow_GetIDFromPos_internal(ImGuiWindow *target, const ImVec2 *a0) { return target->GetIDFromPos(*a0); }
EXPORT ImGuiID ImGuiWindow_GetIDFromRectangle_internal(ImGuiWindow *target, const ImRect *a0) { return target->GetIDFromRectangle(*a0); }
EXPORT ImRect ImGuiWindow_Rect_internal(ImGuiWindow *target) { return target->Rect(); }
EXPORT ImRect ImGuiWindow_TitleBarRect_internal(ImGuiWindow *target) { return target->TitleBarRect(); }
EXPORT ImRect ImGuiWindow_MenuBarRect_internal(ImGuiWindow *target) { return target->MenuBarRect(); }
EXPORT ImGuiTableColumnSettings * ImGuiTableSettings_GetColumnSettings_internal(ImGuiTableSettings *target) { return target->GetColumnSettings(); }
EXPORT ImGuiIO * GetIO_internal(ImGuiContext * a0) { return &ImGui::GetIO(a0); }
EXPORT ImGuiPlatformIO * GetPlatformIO_internal(ImGuiContext * a0) { return &ImGui::GetPlatformIO(a0); }
EXPORT ImGuiWindow * GetCurrentWindowRead_internal(void) { return ImGui::GetCurrentWindowRead(); }
EXPORT ImGuiWindow * GetCurrentWindow_internal(void) { return ImGui::GetCurrentWindow(); }
EXPORT ImGuiWindow * FindWindowByID_internal(ImGuiID a0) { return ImGui::FindWindowByID(a0); }
EXPORT ImGuiWindow * FindWindowByName_internal(const char * a0) { return ImGui::FindWindowByName(a0); }
EXPORT void UpdateWindowParentAndRootLinks_internal(ImGuiWindow * a0, ImGuiWindowFlags a1, ImGuiWindow * a2) { ImGui::UpdateWindowParentAndRootLinks(a0, a1, a2); }
EXPORT void UpdateWindowSkipRefresh_internal(ImGuiWindow * a0) { ImGui::UpdateWindowSkipRefresh(a0); }
EXPORT ImVec2 CalcWindowNextAutoFitSize_internal(ImGuiWindow * a0) { return ImGui::CalcWindowNextAutoFitSize(a0); }
EXPORT bool IsWindowChildOf_internal(ImGuiWindow * a0, ImGuiWindow * a1, bool a2, bool a3) { return ImGui::IsWindowChildOf(a0, a1, a2, a3); }
EXPORT bool IsWindowWithinBeginStackOf_internal(ImGuiWindow * a0, ImGuiWindow * a1) { return ImGui::IsWindowWithinBeginStackOf(a0, a1); }
EXPORT bool IsWindowAbove_internal(ImGuiWindow * a0, ImGuiWindow * a1) { return ImGui::IsWindowAbove(a0, a1); }
EXPORT bool IsWindowNavFocusable_internal(ImGuiWindow * a0) { return ImGui::IsWindowNavFocusable(a0); }
EXPORT void SetWindowPos_internal(ImGuiWindow * a0, const ImVec2 *a1, ImGuiCond a2) { ImGui::SetWindowPos(a0, *a1, a2); }
EXPORT void SetWindowSize_internal(ImGuiWindow * a0, const ImVec2 *a1, ImGuiCond a2) { ImGui::SetWindowSize(a0, *a1, a2); }
EXPORT void SetWindowCollapsed_internal(ImGuiWindow * a0, bool a1, ImGuiCond a2) { ImGui::SetWindowCollapsed(a0, a1, a2); }
EXPORT void SetWindowHitTestHole_internal(ImGuiWindow * a0, const ImVec2 *a1, const ImVec2 *a2) { ImGui::SetWindowHitTestHole(a0, *a1, *a2); }
EXPORT void SetWindowHiddenAndSkipItemsForCurrentFrame_internal(ImGuiWindow * a0) { ImGui::SetWindowHiddenAndSkipItemsForCurrentFrame(a0); }
EXPORT void SetWindowParentWindowForFocusRoute_internal(ImGuiWindow * a0, ImGuiWindow * a1) { ImGui::SetWindowParentWindowForFocusRoute(a0, a1); }
EXPORT ImRect WindowRectAbsToRel_internal(ImGuiWindow * a0, const ImRect *a1) { return ImGui::WindowRectAbsToRel(a0, *a1); }
EXPORT ImRect WindowRectRelToAbs_internal(ImGuiWindow * a0, const ImRect *a1) { return ImGui::WindowRectRelToAbs(a0, *a1); }
EXPORT ImVec2 WindowPosAbsToRel_internal(ImGuiWindow * a0, const ImVec2 *a1) { return ImGui::WindowPosAbsToRel(a0, *a1); }
EXPORT ImVec2 WindowPosRelToAbs_internal(ImGuiWindow * a0, const ImVec2 *a1) { return ImGui::WindowPosRelToAbs(a0, *a1); }
EXPORT void FocusWindow_internal(ImGuiWindow * a0, ImGuiFocusRequestFlags a1) { ImGui::FocusWindow(a0, a1); }
EXPORT void FocusTopMostWindowUnderOne_internal(ImGuiWindow * a0, ImGuiWindow * a1, ImGuiViewport * a2, ImGuiFocusRequestFlags a3) { ImGui::FocusTopMostWindowUnderOne(a0, a1, a2, a3); }
EXPORT void BringWindowToFocusFront_internal(ImGuiWindow * a0) { ImGui::BringWindowToFocusFront(a0); }
EXPORT void BringWindowToDisplayFront_internal(ImGuiWindow * a0) { ImGui::BringWindowToDisplayFront(a0); }
EXPORT void BringWindowToDisplayBack_internal(ImGuiWindow * a0) { ImGui::BringWindowToDisplayBack(a0); }
EXPORT void BringWindowToDisplayBehind_internal(ImGuiWindow * a0, ImGuiWindow * a1) { ImGui::BringWindowToDisplayBehind(a0, a1); }
EXPORT int FindWindowDisplayIndex_internal(ImGuiWindow * a0) { return ImGui::FindWindowDisplayIndex(a0); }
EXPORT ImGuiWindow * FindBottomMostVisibleWindowWithinBeginStack_internal(ImGuiWindow * a0) { return ImGui::FindBottomMostVisibleWindowWithinBeginStack(a0); }
EXPORT void SetNextWindowRefreshPolicy_internal(ImGuiWindowRefreshFlags a0) { ImGui::SetNextWindowRefreshPolicy(a0); }
EXPORT void RegisterUserTexture_internal(ImTextureData * a0) { ImGui::RegisterUserTexture(a0); }
EXPORT void UnregisterUserTexture_internal(ImTextureData * a0) { ImGui::UnregisterUserTexture(a0); }
EXPORT void RegisterFontAtlas_internal(ImFontAtlas * a0) { ImGui::RegisterFontAtlas(a0); }
EXPORT void UnregisterFontAtlas_internal(ImFontAtlas * a0) { ImGui::UnregisterFontAtlas(a0); }
EXPORT void SetCurrentFont_internal(ImFont * a0, float a1, float a2) { ImGui::SetCurrentFont(a0, a1, a2); }
EXPORT void UpdateCurrentFontSize_internal(float a0) { ImGui::UpdateCurrentFontSize(a0); }
EXPORT void SetFontRasterizerDensity_internal(float a0) { ImGui::SetFontRasterizerDensity(a0); }
EXPORT float GetFontRasterizerDensity_internal(void) { return ImGui::GetFontRasterizerDensity(); }
EXPORT float GetRoundedFontSize_internal(float a0) { return ImGui::GetRoundedFontSize(a0); }
EXPORT ImFont * GetDefaultFont_internal(void) { return ImGui::GetDefaultFont(); }
EXPORT void PushPasswordFont_internal(void) { ImGui::PushPasswordFont(); }
EXPORT void PopPasswordFont_internal(void) { ImGui::PopPasswordFont(); }
EXPORT ImDrawList * GetForegroundDrawList_internal(ImGuiWindow * a0) { return ImGui::GetForegroundDrawList(a0); }
EXPORT void AddDrawListToDrawDataEx_internal(ImDrawData * a0, ImVector<ImDrawList *> * a1, ImDrawList * a2) { ImGui::AddDrawListToDrawDataEx(a0, a1, a2); }
EXPORT void Initialize_internal(void) { ImGui::Initialize(); }
EXPORT void Shutdown_internal(void) { ImGui::Shutdown(); }
EXPORT void UpdateInputEvents_internal(bool a0) { ImGui::UpdateInputEvents(a0); }
EXPORT void UpdateHoveredWindowAndCaptureFlags_internal(const ImVec2 *a0) { ImGui::UpdateHoveredWindowAndCaptureFlags(*a0); }
EXPORT void FindHoveredWindowEx_internal(const ImVec2 *a0, bool a1, ImGuiWindow ** a2, ImGuiWindow ** a3) { ImGui::FindHoveredWindowEx(*a0, a1, a2, a3); }
EXPORT void StartMouseMovingWindow_internal(ImGuiWindow * a0) { ImGui::StartMouseMovingWindow(a0); }
EXPORT void StartMouseMovingWindowOrNode_internal(ImGuiWindow * a0, ImGuiDockNode * a1, bool a2) { ImGui::StartMouseMovingWindowOrNode(a0, a1, a2); }
EXPORT void StopMouseMovingWindow_internal(void) { ImGui::StopMouseMovingWindow(); }
EXPORT void UpdateMouseMovingWindowNewFrame_internal(void) { ImGui::UpdateMouseMovingWindowNewFrame(); }
EXPORT void UpdateMouseMovingWindowEndFrame_internal(void) { ImGui::UpdateMouseMovingWindowEndFrame(); }
EXPORT ImGuiID AddContextHook_internal(ImGuiContext * a0, const ImGuiContextHook * a1) { return ImGui::AddContextHook(a0, a1); }
EXPORT void RemoveContextHook_internal(ImGuiContext * a0, ImGuiID a1) { ImGui::RemoveContextHook(a0, a1); }
EXPORT void CallContextHooks_internal(ImGuiContext * a0, ImGuiContextHookType a1) { ImGui::CallContextHooks(a0, a1); }
EXPORT void TranslateWindowsInViewport_internal(ImGuiViewportP * a0, const ImVec2 *a1, const ImVec2 *a2, const ImVec2 *a3, const ImVec2 *a4) { ImGui::TranslateWindowsInViewport(a0, *a1, *a2, *a3, *a4); }
EXPORT void ScaleWindowsInViewport_internal(ImGuiViewportP * a0, float a1) { ImGui::ScaleWindowsInViewport(a0, a1); }
EXPORT void DestroyPlatformWindow_internal(ImGuiViewportP * a0) { ImGui::DestroyPlatformWindow(a0); }
EXPORT void SetWindowViewport_internal(ImGuiWindow * a0, ImGuiViewportP * a1) { ImGui::SetWindowViewport(a0, a1); }
EXPORT void SetCurrentViewport_internal(ImGuiWindow * a0, ImGuiViewportP * a1) { ImGui::SetCurrentViewport(a0, a1); }
EXPORT const ImGuiPlatformMonitor * GetViewportPlatformMonitor_internal(ImGuiViewport * a0) { return ImGui::GetViewportPlatformMonitor(a0); }
EXPORT ImGuiViewportP * FindHoveredViewportFromPlatformWindowStack_internal(const ImVec2 *a0) { return ImGui::FindHoveredViewportFromPlatformWindowStack(*a0); }
EXPORT void MarkIniSettingsDirty_internal_0(void) { ImGui::MarkIniSettingsDirty(); }
EXPORT void MarkIniSettingsDirty_internal_1(ImGuiWindow * a0) { ImGui::MarkIniSettingsDirty(a0); }
EXPORT void ClearIniSettings_internal(void) { ImGui::ClearIniSettings(); }
EXPORT void AddSettingsHandler_internal(const ImGuiSettingsHandler * a0) { ImGui::AddSettingsHandler(a0); }
EXPORT void RemoveSettingsHandler_internal(const char * a0) { ImGui::RemoveSettingsHandler(a0); }
EXPORT ImGuiSettingsHandler * FindSettingsHandler_internal(const char * a0) { return ImGui::FindSettingsHandler(a0); }
EXPORT ImGuiWindowSettings * CreateNewWindowSettings_internal(const char * a0) { return ImGui::CreateNewWindowSettings(a0); }
EXPORT ImGuiWindowSettings * FindWindowSettingsByID_internal(ImGuiID a0) { return ImGui::FindWindowSettingsByID(a0); }
EXPORT ImGuiWindowSettings * FindWindowSettingsByWindow_internal(ImGuiWindow * a0) { return ImGui::FindWindowSettingsByWindow(a0); }
EXPORT void ClearWindowSettings_internal(const char * a0) { ImGui::ClearWindowSettings(a0); }
EXPORT void LocalizeRegisterEntries_internal(const ImGuiLocEntry * a0, int a1) { ImGui::LocalizeRegisterEntries(a0, a1); }
EXPORT const char * LocalizeGetMsg_internal(ImGuiLocKey a0) { return ImGui::LocalizeGetMsg(a0); }
EXPORT void SetScrollX_internal(ImGuiWindow * a0, float a1) { ImGui::SetScrollX(a0, a1); }
EXPORT void SetScrollY_internal(ImGuiWindow * a0, float a1) { ImGui::SetScrollY(a0, a1); }
EXPORT void SetScrollFromPosX_internal(ImGuiWindow * a0, float a1, float a2) { ImGui::SetScrollFromPosX(a0, a1, a2); }
EXPORT void SetScrollFromPosY_internal(ImGuiWindow * a0, float a1, float a2) { ImGui::SetScrollFromPosY(a0, a1, a2); }
EXPORT void ScrollToItem_internal(ImGuiScrollFlags a0) { ImGui::ScrollToItem(a0); }
EXPORT void ScrollToRect_internal(ImGuiWindow * a0, const ImRect *a1, ImGuiScrollFlags a2) { ImGui::ScrollToRect(a0, *a1, a2); }
EXPORT ImVec2 ScrollToRectEx_internal(ImGuiWindow * a0, const ImRect *a1, ImGuiScrollFlags a2) { return ImGui::ScrollToRectEx(a0, *a1, a2); }
EXPORT void ScrollToBringRectIntoView_internal(ImGuiWindow * a0, const ImRect *a1) { ImGui::ScrollToBringRectIntoView(a0, *a1); }
EXPORT ImGuiItemStatusFlags GetItemStatusFlags_internal(void) { return ImGui::GetItemStatusFlags(); }
EXPORT ImGuiItemFlags GetItemFlags_internal(void) { return ImGui::GetItemFlags(); }
EXPORT ImGuiID GetActiveID_internal(void) { return ImGui::GetActiveID(); }
EXPORT ImGuiID GetFocusID_internal(void) { return ImGui::GetFocusID(); }
EXPORT void SetActiveID_internal(ImGuiID a0, ImGuiWindow * a1) { ImGui::SetActiveID(a0, a1); }
EXPORT void SetFocusID_internal(ImGuiID a0, ImGuiWindow * a1) { ImGui::SetFocusID(a0, a1); }
EXPORT void ClearActiveID_internal(void) { ImGui::ClearActiveID(); }
EXPORT ImGuiID GetHoveredID_internal(void) { return ImGui::GetHoveredID(); }
EXPORT void SetHoveredID_internal(ImGuiID a0) { ImGui::SetHoveredID(a0); }
EXPORT void KeepAliveID_internal(ImGuiID a0) { ImGui::KeepAliveID(a0); }
EXPORT void MarkItemEdited_internal(ImGuiID a0) { ImGui::MarkItemEdited(a0); }
EXPORT void PushOverrideID_internal(ImGuiID a0) { ImGui::PushOverrideID(a0); }
EXPORT ImGuiID GetIDWithSeed_internal_0(const char * a0, const char * a1, ImGuiID a2) { return ImGui::GetIDWithSeed(a0, a1, a2); }
EXPORT ImGuiID GetIDWithSeed_internal_1(int a0, ImGuiID a1) { return ImGui::GetIDWithSeed(a0, a1); }
EXPORT void ItemSize_internal_0(const ImVec2 *a0, float a1) { ImGui::ItemSize(*a0, a1); }
EXPORT void ItemSize_internal_1(const ImRect *a0, float a1) { ImGui::ItemSize(*a0, a1); }
EXPORT bool ItemAdd_internal(const ImRect *a0, ImGuiID a1, const ImRect * a2, ImGuiItemFlags a3) { return ImGui::ItemAdd(*a0, a1, a2, a3); }
EXPORT bool ItemHoverable_internal(const ImRect *a0, ImGuiID a1, ImGuiItemFlags a2) { return ImGui::ItemHoverable(*a0, a1, a2); }
EXPORT bool IsWindowContentHoverable_internal(ImGuiWindow * a0, ImGuiHoveredFlags a1) { return ImGui::IsWindowContentHoverable(a0, a1); }
EXPORT bool IsClippedEx_internal(const ImRect *a0, ImGuiID a1) { return ImGui::IsClippedEx(*a0, a1); }
EXPORT void SetLastItemData_internal(ImGuiID a0, ImGuiItemFlags a1, ImGuiItemStatusFlags a2, const ImRect *a3) { ImGui::SetLastItemData(a0, a1, a2, *a3); }
EXPORT ImVec2 CalcItemSize_internal(ImVec2 a0, float a1, float a2) { return ImGui::CalcItemSize(a0, a1, a2); }
EXPORT float CalcWrapWidthForPos_internal(const ImVec2 *a0, float a1) { return ImGui::CalcWrapWidthForPos(*a0, a1); }
EXPORT void PushMultiItemsWidths_internal(int a0, float a1) { ImGui::PushMultiItemsWidths(a0, a1); }
EXPORT void ShrinkWidths_internal(ImGuiShrinkWidthItem * a0, int a1, float a2, float a3) { ImGui::ShrinkWidths(a0, a1, a2, a3); }
EXPORT const ImGuiStyleVarInfo * GetStyleVarInfo_internal(ImGuiStyleVar a0) { return ImGui::GetStyleVarInfo(a0); }
EXPORT void BeginDisabledOverrideReenable_internal(void) { ImGui::BeginDisabledOverrideReenable(); }
EXPORT void EndDisabledOverrideReenable_internal(void) { ImGui::EndDisabledOverrideReenable(); }
EXPORT void LogBegin_internal(ImGuiLogFlags a0, int a1) { ImGui::LogBegin(a0, a1); }
EXPORT void LogToBuffer_internal(int a0) { ImGui::LogToBuffer(a0); }
EXPORT void LogRenderedText_internal(const ImVec2 * a0, const char * a1, const char * a2) { ImGui::LogRenderedText(a0, a1, a2); }
EXPORT void LogSetNextTextDecoration_internal(const char * a0, const char * a1) { ImGui::LogSetNextTextDecoration(a0, a1); }
EXPORT bool BeginChildEx_internal(const char * a0, ImGuiID a1, const ImVec2 *a2, ImGuiChildFlags a3, ImGuiWindowFlags a4) { return ImGui::BeginChildEx(a0, a1, *a2, a3, a4); }
EXPORT bool BeginPopupEx_internal(ImGuiID a0, ImGuiWindowFlags a1) { return ImGui::BeginPopupEx(a0, a1); }
EXPORT bool BeginPopupMenuEx_internal(ImGuiID a0, const char * a1, ImGuiWindowFlags a2) { return ImGui::BeginPopupMenuEx(a0, a1, a2); }
EXPORT void OpenPopupEx_internal(ImGuiID a0, ImGuiPopupFlags a1) { ImGui::OpenPopupEx(a0, a1); }
EXPORT void ClosePopupToLevel_internal(int a0, bool a1) { ImGui::ClosePopupToLevel(a0, a1); }
EXPORT void ClosePopupsOverWindow_internal(ImGuiWindow * a0, bool a1) { ImGui::ClosePopupsOverWindow(a0, a1); }
EXPORT void ClosePopupsExceptModals_internal(void) { ImGui::ClosePopupsExceptModals(); }
EXPORT bool IsPopupOpen_internal(ImGuiID a0, ImGuiPopupFlags a1) { return ImGui::IsPopupOpen(a0, a1); }
EXPORT ImRect GetPopupAllowedExtentRect_internal(ImGuiWindow * a0) { return ImGui::GetPopupAllowedExtentRect(a0); }
EXPORT ImGuiWindow * GetTopMostPopupModal_internal(void) { return ImGui::GetTopMostPopupModal(); }
EXPORT ImGuiWindow * GetTopMostAndVisiblePopupModal_internal(void) { return ImGui::GetTopMostAndVisiblePopupModal(); }
EXPORT ImGuiWindow * FindBlockingModal_internal(ImGuiWindow * a0) { return ImGui::FindBlockingModal(a0); }
EXPORT ImVec2 FindBestWindowPosForPopup_internal(ImGuiWindow * a0) { return ImGui::FindBestWindowPosForPopup(a0); }
EXPORT ImVec2 FindBestWindowPosForPopupEx_internal(const ImVec2 *a0, const ImVec2 *a1, ImGuiDir * a2, const ImRect *a3, const ImRect *a4, ImGuiPopupPositionPolicy a5) { return ImGui::FindBestWindowPosForPopupEx(*a0, *a1, a2, *a3, *a4, a5); }
EXPORT bool BeginTooltipEx_internal(ImGuiTooltipFlags a0, ImGuiWindowFlags a1) { return ImGui::BeginTooltipEx(a0, a1); }
EXPORT bool BeginTooltipHidden_internal(void) { return ImGui::BeginTooltipHidden(); }
EXPORT bool BeginViewportSideBar_internal(const char * a0, ImGuiViewport * a1, ImGuiDir a2, float a3, ImGuiWindowFlags a4) { return ImGui::BeginViewportSideBar(a0, a1, a2, a3, a4); }
EXPORT bool BeginMenuEx_internal(const char * a0, const char * a1, bool a2) { return ImGui::BeginMenuEx(a0, a1, a2); }
EXPORT bool MenuItemEx_internal(const char * a0, const char * a1, const char * a2, bool a3, bool a4) { return ImGui::MenuItemEx(a0, a1, a2, a3, a4); }
EXPORT bool BeginComboPopup_internal(ImGuiID a0, const ImRect *a1, ImGuiComboFlags a2) { return ImGui::BeginComboPopup(a0, *a1, a2); }
EXPORT bool BeginComboPreview_internal(void) { return ImGui::BeginComboPreview(); }
EXPORT void EndComboPreview_internal(void) { ImGui::EndComboPreview(); }
EXPORT void NavInitWindow_internal(ImGuiWindow * a0, bool a1) { ImGui::NavInitWindow(a0, a1); }
EXPORT void NavInitRequestApplyResult_internal(void) { ImGui::NavInitRequestApplyResult(); }
EXPORT bool NavMoveRequestButNoResultYet_internal(void) { return ImGui::NavMoveRequestButNoResultYet(); }
EXPORT void NavMoveRequestSubmit_internal(ImGuiDir a0, ImGuiDir a1, ImGuiNavMoveFlags a2, ImGuiScrollFlags a3) { ImGui::NavMoveRequestSubmit(a0, a1, a2, a3); }
EXPORT void NavMoveRequestForward_internal(ImGuiDir a0, ImGuiDir a1, ImGuiNavMoveFlags a2, ImGuiScrollFlags a3) { ImGui::NavMoveRequestForward(a0, a1, a2, a3); }
EXPORT void NavMoveRequestResolveWithLastItem_internal(ImGuiNavItemData * a0) { ImGui::NavMoveRequestResolveWithLastItem(a0); }
EXPORT void NavMoveRequestResolveWithPastTreeNode_internal(ImGuiNavItemData * a0, const ImGuiTreeNodeStackData * a1) { ImGui::NavMoveRequestResolveWithPastTreeNode(a0, a1); }
EXPORT void NavMoveRequestCancel_internal(void) { ImGui::NavMoveRequestCancel(); }
EXPORT void NavMoveRequestApplyResult_internal(void) { ImGui::NavMoveRequestApplyResult(); }
EXPORT void NavMoveRequestTryWrapping_internal(ImGuiWindow * a0, ImGuiNavMoveFlags a1) { ImGui::NavMoveRequestTryWrapping(a0, a1); }
EXPORT void NavHighlightActivated_internal(ImGuiID a0) { ImGui::NavHighlightActivated(a0); }
EXPORT void NavClearPreferredPosForAxis_internal(ImGuiAxis a0) { ImGui::NavClearPreferredPosForAxis(a0); }
EXPORT void SetNavCursorVisibleAfterMove_internal(void) { ImGui::SetNavCursorVisibleAfterMove(); }
EXPORT void NavUpdateCurrentWindowIsScrollPushableX_internal(void) { ImGui::NavUpdateCurrentWindowIsScrollPushableX(); }
EXPORT void SetNavWindow_internal(ImGuiWindow * a0) { ImGui::SetNavWindow(a0); }
EXPORT void SetNavID_internal(ImGuiID a0, ImGuiNavLayer a1, ImGuiID a2, const ImRect *a3) { ImGui::SetNavID(a0, a1, a2, *a3); }
EXPORT void SetNavFocusScope_internal(ImGuiID a0) { ImGui::SetNavFocusScope(a0); }
EXPORT void FocusItem_internal(void) { ImGui::FocusItem(); }
EXPORT void ActivateItemByID_internal(ImGuiID a0) { ImGui::ActivateItemByID(a0); }
EXPORT bool IsNamedKey_internal(ImGuiKey a0) { return ImGui::IsNamedKey(a0); }
EXPORT bool IsNamedKeyOrMod_internal(ImGuiKey a0) { return ImGui::IsNamedKeyOrMod(a0); }
EXPORT bool IsLegacyKey_internal(ImGuiKey a0) { return ImGui::IsLegacyKey(a0); }
EXPORT bool IsKeyboardKey_internal(ImGuiKey a0) { return ImGui::IsKeyboardKey(a0); }
EXPORT bool IsGamepadKey_internal(ImGuiKey a0) { return ImGui::IsGamepadKey(a0); }
EXPORT bool IsMouseKey_internal(ImGuiKey a0) { return ImGui::IsMouseKey(a0); }
EXPORT bool IsAliasKey_internal(ImGuiKey a0) { return ImGui::IsAliasKey(a0); }
EXPORT bool IsLRModKey_internal(ImGuiKey a0) { return ImGui::IsLRModKey(a0); }
EXPORT ImGuiKeyChord FixupKeyChord_internal(ImGuiKeyChord a0) { return ImGui::FixupKeyChord(a0); }
EXPORT ImGuiKey ConvertSingleModFlagToKey_internal(ImGuiKey a0) { return ImGui::ConvertSingleModFlagToKey(a0); }
EXPORT ImGuiKeyData * GetKeyData_internal_0(ImGuiContext * a0, ImGuiKey a1) { return ImGui::GetKeyData(a0, a1); }
EXPORT ImGuiKeyData * GetKeyData_internal_1(ImGuiKey a0) { return ImGui::GetKeyData(a0); }
EXPORT const char * GetKeyChordName_internal(ImGuiKeyChord a0) { return ImGui::GetKeyChordName(a0); }
EXPORT ImGuiKey MouseButtonToKey_internal(ImGuiMouseButton a0) { return ImGui::MouseButtonToKey(a0); }
EXPORT bool IsMouseDragPastThreshold_internal(ImGuiMouseButton a0, float a1) { return ImGui::IsMouseDragPastThreshold(a0, a1); }
EXPORT ImVec2 GetKeyMagnitude2d_internal(ImGuiKey a0, ImGuiKey a1, ImGuiKey a2, ImGuiKey a3) { return ImGui::GetKeyMagnitude2d(a0, a1, a2, a3); }
EXPORT float GetNavTweakPressedAmount_internal(ImGuiAxis a0) { return ImGui::GetNavTweakPressedAmount(a0); }
EXPORT int CalcTypematicRepeatAmount_internal(float a0, float a1, float a2, float a3) { return ImGui::CalcTypematicRepeatAmount(a0, a1, a2, a3); }
EXPORT void GetTypematicRepeatRate_internal(ImGuiInputFlags a0, float * a1, float * a2) { ImGui::GetTypematicRepeatRate(a0, a1, a2); }
EXPORT void TeleportMousePos_internal(const ImVec2 *a0) { ImGui::TeleportMousePos(*a0); }
EXPORT void SetActiveIdUsingAllKeyboardKeys_internal(void) { ImGui::SetActiveIdUsingAllKeyboardKeys(); }
EXPORT bool IsActiveIdUsingNavDir_internal(ImGuiDir a0) { return ImGui::IsActiveIdUsingNavDir(a0); }
EXPORT ImGuiID GetKeyOwner_internal(ImGuiKey a0) { return ImGui::GetKeyOwner(a0); }
EXPORT void SetKeyOwner_internal(ImGuiKey a0, ImGuiID a1, ImGuiInputFlags a2) { ImGui::SetKeyOwner(a0, a1, a2); }
EXPORT void SetKeyOwnersForKeyChord_internal(ImGuiKeyChord a0, ImGuiID a1, ImGuiInputFlags a2) { ImGui::SetKeyOwnersForKeyChord(a0, a1, a2); }
EXPORT void SetItemKeyOwner_internal(ImGuiKey a0, ImGuiInputFlags a1) { ImGui::SetItemKeyOwner(a0, a1); }
EXPORT bool TestKeyOwner_internal(ImGuiKey a0, ImGuiID a1) { return ImGui::TestKeyOwner(a0, a1); }
EXPORT ImGuiKeyOwnerData * GetKeyOwnerData_internal(ImGuiContext * a0, ImGuiKey a1) { return ImGui::GetKeyOwnerData(a0, a1); }
EXPORT bool IsKeyDown_internal(ImGuiKey a0, ImGuiID a1) { return ImGui::IsKeyDown(a0, a1); }
EXPORT bool IsKeyPressed_internal(ImGuiKey a0, ImGuiInputFlags a1, ImGuiID a2) { return ImGui::IsKeyPressed(a0, a1, a2); }
EXPORT bool IsKeyReleased_internal(ImGuiKey a0, ImGuiID a1) { return ImGui::IsKeyReleased(a0, a1); }
EXPORT bool IsKeyChordPressed_internal(ImGuiKeyChord a0, ImGuiInputFlags a1, ImGuiID a2) { return ImGui::IsKeyChordPressed(a0, a1, a2); }
EXPORT bool IsMouseDown_internal(ImGuiMouseButton a0, ImGuiID a1) { return ImGui::IsMouseDown(a0, a1); }
EXPORT bool IsMouseClicked_internal(ImGuiMouseButton a0, ImGuiInputFlags a1, ImGuiID a2) { return ImGui::IsMouseClicked(a0, a1, a2); }
EXPORT bool IsMouseReleased_internal(ImGuiMouseButton a0, ImGuiID a1) { return ImGui::IsMouseReleased(a0, a1); }
EXPORT bool IsMouseDoubleClicked_internal(ImGuiMouseButton a0, ImGuiID a1) { return ImGui::IsMouseDoubleClicked(a0, a1); }
EXPORT bool Shortcut_internal(ImGuiKeyChord a0, ImGuiInputFlags a1, ImGuiID a2) { return ImGui::Shortcut(a0, a1, a2); }
EXPORT bool SetShortcutRouting_internal(ImGuiKeyChord a0, ImGuiInputFlags a1, ImGuiID a2) { return ImGui::SetShortcutRouting(a0, a1, a2); }
EXPORT bool TestShortcutRouting_internal(ImGuiKeyChord a0, ImGuiID a1) { return ImGui::TestShortcutRouting(a0, a1); }
EXPORT ImGuiKeyRoutingData * GetShortcutRoutingData_internal(ImGuiKeyChord a0) { return ImGui::GetShortcutRoutingData(a0); }
EXPORT void DockContextInitialize_internal(ImGuiContext * a0) { ImGui::DockContextInitialize(a0); }
EXPORT void DockContextShutdown_internal(ImGuiContext * a0) { ImGui::DockContextShutdown(a0); }
EXPORT void DockContextClearNodes_internal(ImGuiContext * a0, ImGuiID a1, bool a2) { ImGui::DockContextClearNodes(a0, a1, a2); }
EXPORT void DockContextRebuildNodes_internal(ImGuiContext * a0) { ImGui::DockContextRebuildNodes(a0); }
EXPORT void DockContextNewFrameUpdateUndocking_internal(ImGuiContext * a0) { ImGui::DockContextNewFrameUpdateUndocking(a0); }
EXPORT void DockContextNewFrameUpdateDocking_internal(ImGuiContext * a0) { ImGui::DockContextNewFrameUpdateDocking(a0); }
EXPORT void DockContextEndFrame_internal(ImGuiContext * a0) { ImGui::DockContextEndFrame(a0); }
EXPORT ImGuiID DockContextGenNodeID_internal(ImGuiContext * a0) { return ImGui::DockContextGenNodeID(a0); }
EXPORT void DockContextQueueDock_internal(ImGuiContext * a0, ImGuiWindow * a1, ImGuiDockNode * a2, ImGuiWindow * a3, ImGuiDir a4, float a5, bool a6) { ImGui::DockContextQueueDock(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void DockContextQueueUndockWindow_internal(ImGuiContext * a0, ImGuiWindow * a1) { ImGui::DockContextQueueUndockWindow(a0, a1); }
EXPORT void DockContextQueueUndockNode_internal(ImGuiContext * a0, ImGuiDockNode * a1) { ImGui::DockContextQueueUndockNode(a0, a1); }
EXPORT void DockContextProcessUndockWindow_internal(ImGuiContext * a0, ImGuiWindow * a1, bool a2) { ImGui::DockContextProcessUndockWindow(a0, a1, a2); }
EXPORT void DockContextProcessUndockNode_internal(ImGuiContext * a0, ImGuiDockNode * a1) { ImGui::DockContextProcessUndockNode(a0, a1); }
EXPORT bool DockContextCalcDropPosForDocking_internal(ImGuiWindow * a0, ImGuiDockNode * a1, ImGuiWindow * a2, ImGuiDockNode * a3, ImGuiDir a4, bool a5, ImVec2 * a6) { return ImGui::DockContextCalcDropPosForDocking(a0, a1, a2, a3, a4, a5, a6); }
EXPORT ImGuiDockNode * DockContextFindNodeByID_internal(ImGuiContext * a0, ImGuiID a1) { return ImGui::DockContextFindNodeByID(a0, a1); }
EXPORT void DockNodeWindowMenuHandler_Default_internal(ImGuiContext * a0, ImGuiDockNode * a1, ImGuiTabBar * a2) { ImGui::DockNodeWindowMenuHandler_Default(a0, a1, a2); }
EXPORT bool DockNodeBeginAmendTabBar_internal(ImGuiDockNode * a0) { return ImGui::DockNodeBeginAmendTabBar(a0); }
EXPORT void DockNodeEndAmendTabBar_internal(void) { ImGui::DockNodeEndAmendTabBar(); }
EXPORT ImGuiDockNode * DockNodeGetRootNode_internal(ImGuiDockNode * a0) { return ImGui::DockNodeGetRootNode(a0); }
EXPORT bool DockNodeIsInHierarchyOf_internal(ImGuiDockNode * a0, ImGuiDockNode * a1) { return ImGui::DockNodeIsInHierarchyOf(a0, a1); }
EXPORT int DockNodeGetDepth_internal(const ImGuiDockNode * a0) { return ImGui::DockNodeGetDepth(a0); }
EXPORT ImGuiID DockNodeGetWindowMenuButtonId_internal(const ImGuiDockNode * a0) { return ImGui::DockNodeGetWindowMenuButtonId(a0); }
EXPORT ImGuiDockNode * GetWindowDockNode_internal(void) { return ImGui::GetWindowDockNode(); }
EXPORT bool GetWindowAlwaysWantOwnTabBar_internal(ImGuiWindow * a0) { return ImGui::GetWindowAlwaysWantOwnTabBar(a0); }
EXPORT void BeginDocked_internal(ImGuiWindow * a0, bool * a1) { ImGui::BeginDocked(a0, a1); }
EXPORT void BeginDockableDragDropSource_internal(ImGuiWindow * a0) { ImGui::BeginDockableDragDropSource(a0); }
EXPORT void BeginDockableDragDropTarget_internal(ImGuiWindow * a0) { ImGui::BeginDockableDragDropTarget(a0); }
EXPORT void SetWindowDock_internal(ImGuiWindow * a0, ImGuiID a1, ImGuiCond a2) { ImGui::SetWindowDock(a0, a1, a2); }
EXPORT void DockBuilderDockWindow_internal(const char * a0, ImGuiID a1) { ImGui::DockBuilderDockWindow(a0, a1); }
EXPORT ImGuiDockNode * DockBuilderGetNode_internal(ImGuiID a0) { return ImGui::DockBuilderGetNode(a0); }
EXPORT ImGuiDockNode * DockBuilderGetCentralNode_internal(ImGuiID a0) { return ImGui::DockBuilderGetCentralNode(a0); }
EXPORT ImGuiID DockBuilderAddNode_internal(ImGuiID a0, ImGuiDockNodeFlags a1) { return ImGui::DockBuilderAddNode(a0, a1); }
EXPORT void DockBuilderRemoveNode_internal(ImGuiID a0) { ImGui::DockBuilderRemoveNode(a0); }
EXPORT void DockBuilderRemoveNodeDockedWindows_internal(ImGuiID a0, bool a1) { ImGui::DockBuilderRemoveNodeDockedWindows(a0, a1); }
EXPORT void DockBuilderRemoveNodeChildNodes_internal(ImGuiID a0) { ImGui::DockBuilderRemoveNodeChildNodes(a0); }
EXPORT void DockBuilderSetNodePos_internal(ImGuiID a0, ImVec2 a1) { ImGui::DockBuilderSetNodePos(a0, a1); }
EXPORT void DockBuilderSetNodeSize_internal(ImGuiID a0, ImVec2 a1) { ImGui::DockBuilderSetNodeSize(a0, a1); }
EXPORT ImGuiID DockBuilderSplitNode_internal(ImGuiID a0, ImGuiDir a1, float a2, ImGuiID * a3, ImGuiID * a4) { return ImGui::DockBuilderSplitNode(a0, a1, a2, a3, a4); }
EXPORT void DockBuilderCopyDockSpace_internal(ImGuiID a0, ImGuiID a1, ImVector<const char *> * a2) { ImGui::DockBuilderCopyDockSpace(a0, a1, a2); }
EXPORT void DockBuilderCopyNode_internal(ImGuiID a0, ImGuiID a1, ImVector<ImGuiID> * a2) { ImGui::DockBuilderCopyNode(a0, a1, a2); }
EXPORT void DockBuilderCopyWindowSettings_internal(const char * a0, const char * a1) { ImGui::DockBuilderCopyWindowSettings(a0, a1); }
EXPORT void DockBuilderFinish_internal(ImGuiID a0) { ImGui::DockBuilderFinish(a0); }
EXPORT void PushFocusScope_internal(ImGuiID a0) { ImGui::PushFocusScope(a0); }
EXPORT void PopFocusScope_internal(void) { ImGui::PopFocusScope(); }
EXPORT ImGuiID GetCurrentFocusScope_internal(void) { return ImGui::GetCurrentFocusScope(); }
EXPORT bool IsDragDropActive_internal(void) { return ImGui::IsDragDropActive(); }
EXPORT bool BeginDragDropTargetCustom_internal(const ImRect *a0, ImGuiID a1) { return ImGui::BeginDragDropTargetCustom(*a0, a1); }
EXPORT void ClearDragDrop_internal(void) { ImGui::ClearDragDrop(); }
EXPORT bool IsDragDropPayloadBeingAccepted_internal(void) { return ImGui::IsDragDropPayloadBeingAccepted(); }
EXPORT void RenderDragDropTargetRect_internal(const ImRect *a0, const ImRect *a1) { ImGui::RenderDragDropTargetRect(*a0, *a1); }
EXPORT ImGuiTypingSelectRequest * GetTypingSelectRequest_internal(ImGuiTypingSelectFlags a0) { return ImGui::GetTypingSelectRequest(a0); }
EXPORT int TypingSelectFindMatch_internal(ImGuiTypingSelectRequest * a0, int a1, const char *(*a2)(void *, int), void * a3, int a4) { return ImGui::TypingSelectFindMatch(a0, a1, a2, a3, a4); }
EXPORT int TypingSelectFindNextSingleCharMatch_internal(ImGuiTypingSelectRequest * a0, int a1, const char *(*a2)(void *, int), void * a3, int a4) { return ImGui::TypingSelectFindNextSingleCharMatch(a0, a1, a2, a3, a4); }
EXPORT int TypingSelectFindBestLeadingMatch_internal(ImGuiTypingSelectRequest * a0, int a1, const char *(*a2)(void *, int), void * a3) { return ImGui::TypingSelectFindBestLeadingMatch(a0, a1, a2, a3); }
EXPORT bool BeginBoxSelect_internal(const ImRect *a0, ImGuiWindow * a1, ImGuiID a2, ImGuiMultiSelectFlags a3) { return ImGui::BeginBoxSelect(*a0, a1, a2, a3); }
EXPORT void EndBoxSelect_internal(const ImRect *a0, ImGuiMultiSelectFlags a1) { ImGui::EndBoxSelect(*a0, a1); }
EXPORT void MultiSelectItemHeader_internal(ImGuiID a0, bool * a1, ImGuiButtonFlags * a2) { ImGui::MultiSelectItemHeader(a0, a1, a2); }
EXPORT void MultiSelectItemFooter_internal(ImGuiID a0, bool * a1, bool * a2) { ImGui::MultiSelectItemFooter(a0, a1, a2); }
EXPORT void MultiSelectAddSetAll_internal(ImGuiMultiSelectTempData * a0, bool a1) { ImGui::MultiSelectAddSetAll(a0, a1); }
EXPORT void MultiSelectAddSetRange_internal(ImGuiMultiSelectTempData * a0, bool a1, int a2, ImGuiSelectionUserData a3, ImGuiSelectionUserData a4) { ImGui::MultiSelectAddSetRange(a0, a1, a2, a3, a4); }
EXPORT ImGuiBoxSelectState * GetBoxSelectState_internal(ImGuiID a0) { return ImGui::GetBoxSelectState(a0); }
EXPORT ImGuiMultiSelectState * GetMultiSelectState_internal(ImGuiID a0) { return ImGui::GetMultiSelectState(a0); }
EXPORT void SetWindowClipRectBeforeSetChannel_internal(ImGuiWindow * a0, const ImRect *a1) { ImGui::SetWindowClipRectBeforeSetChannel(a0, *a1); }
EXPORT void BeginColumns_internal(const char * a0, int a1, ImGuiOldColumnFlags a2) { ImGui::BeginColumns(a0, a1, a2); }
EXPORT void EndColumns_internal(void) { ImGui::EndColumns(); }
EXPORT void PushColumnClipRect_internal(int a0) { ImGui::PushColumnClipRect(a0); }
EXPORT void PushColumnsBackground_internal(void) { ImGui::PushColumnsBackground(); }
EXPORT void PopColumnsBackground_internal(void) { ImGui::PopColumnsBackground(); }
EXPORT ImGuiID GetColumnsID_internal(const char * a0, int a1) { return ImGui::GetColumnsID(a0, a1); }
EXPORT ImGuiOldColumns * FindOrCreateColumns_internal(ImGuiWindow * a0, ImGuiID a1) { return ImGui::FindOrCreateColumns(a0, a1); }
EXPORT float GetColumnOffsetFromNorm_internal(const ImGuiOldColumns * a0, float a1) { return ImGui::GetColumnOffsetFromNorm(a0, a1); }
EXPORT float GetColumnNormFromOffset_internal(const ImGuiOldColumns * a0, float a1) { return ImGui::GetColumnNormFromOffset(a0, a1); }
EXPORT void TableOpenContextMenu_internal(int a0) { ImGui::TableOpenContextMenu(a0); }
EXPORT void TableSetColumnWidth_internal(int a0, float a1) { ImGui::TableSetColumnWidth(a0, a1); }
EXPORT void TableSetColumnSortDirection_internal(int a0, ImGuiSortDirection a1, bool a2) { ImGui::TableSetColumnSortDirection(a0, a1, a2); }
EXPORT int TableGetHoveredRow_internal(void) { return ImGui::TableGetHoveredRow(); }
EXPORT float TableGetHeaderRowHeight_internal(void) { return ImGui::TableGetHeaderRowHeight(); }
EXPORT float TableGetHeaderAngledMaxLabelWidth_internal(void) { return ImGui::TableGetHeaderAngledMaxLabelWidth(); }
EXPORT void TablePushBackgroundChannel_internal(void) { ImGui::TablePushBackgroundChannel(); }
EXPORT void TablePopBackgroundChannel_internal(void) { ImGui::TablePopBackgroundChannel(); }
EXPORT void TablePushColumnChannel_internal(int a0) { ImGui::TablePushColumnChannel(a0); }
EXPORT void TablePopColumnChannel_internal(void) { ImGui::TablePopColumnChannel(); }
EXPORT void TableAngledHeadersRowEx_internal(ImGuiID a0, float a1, float a2, const ImGuiTableHeaderData * a3, int a4) { ImGui::TableAngledHeadersRowEx(a0, a1, a2, a3, a4); }
EXPORT ImGuiTable * GetCurrentTable_internal(void) { return ImGui::GetCurrentTable(); }
EXPORT ImGuiTable * TableFindByID_internal(ImGuiID a0) { return ImGui::TableFindByID(a0); }
EXPORT bool BeginTableEx_internal(const char * a0, ImGuiID a1, int a2, ImGuiTableFlags a3, const ImVec2 *a4, float a5) { return ImGui::BeginTableEx(a0, a1, a2, a3, *a4, a5); }
EXPORT void TableBeginInitMemory_internal(ImGuiTable * a0, int a1) { ImGui::TableBeginInitMemory(a0, a1); }
EXPORT void TableBeginApplyRequests_internal(ImGuiTable * a0) { ImGui::TableBeginApplyRequests(a0); }
EXPORT void TableSetupDrawChannels_internal(ImGuiTable * a0) { ImGui::TableSetupDrawChannels(a0); }
EXPORT void TableUpdateLayout_internal(ImGuiTable * a0) { ImGui::TableUpdateLayout(a0); }
EXPORT void TableUpdateBorders_internal(ImGuiTable * a0) { ImGui::TableUpdateBorders(a0); }
EXPORT void TableUpdateColumnsWeightFromWidth_internal(ImGuiTable * a0) { ImGui::TableUpdateColumnsWeightFromWidth(a0); }
EXPORT void TableDrawBorders_internal(ImGuiTable * a0) { ImGui::TableDrawBorders(a0); }
EXPORT void TableDrawDefaultContextMenu_internal(ImGuiTable * a0, ImGuiTableFlags a1) { ImGui::TableDrawDefaultContextMenu(a0, a1); }
EXPORT bool TableBeginContextMenuPopup_internal(ImGuiTable * a0) { return ImGui::TableBeginContextMenuPopup(a0); }
EXPORT void TableMergeDrawChannels_internal(ImGuiTable * a0) { ImGui::TableMergeDrawChannels(a0); }
EXPORT ImGuiTableInstanceData * TableGetInstanceData_internal(ImGuiTable * a0, int a1) { return ImGui::TableGetInstanceData(a0, a1); }
EXPORT ImGuiID TableGetInstanceID_internal(ImGuiTable * a0, int a1) { return ImGui::TableGetInstanceID(a0, a1); }
EXPORT void TableSortSpecsSanitize_internal(ImGuiTable * a0) { ImGui::TableSortSpecsSanitize(a0); }
EXPORT void TableSortSpecsBuild_internal(ImGuiTable * a0) { ImGui::TableSortSpecsBuild(a0); }
EXPORT ImGuiSortDirection TableGetColumnNextSortDirection_internal(ImGuiTableColumn * a0) { return ImGui::TableGetColumnNextSortDirection(a0); }
EXPORT void TableFixColumnSortDirection_internal(ImGuiTable * a0, ImGuiTableColumn * a1) { ImGui::TableFixColumnSortDirection(a0, a1); }
EXPORT float TableGetColumnWidthAuto_internal(ImGuiTable * a0, ImGuiTableColumn * a1) { return ImGui::TableGetColumnWidthAuto(a0, a1); }
EXPORT void TableBeginRow_internal(ImGuiTable * a0) { ImGui::TableBeginRow(a0); }
EXPORT void TableEndRow_internal(ImGuiTable * a0) { ImGui::TableEndRow(a0); }
EXPORT void TableBeginCell_internal(ImGuiTable * a0, int a1) { ImGui::TableBeginCell(a0, a1); }
EXPORT void TableEndCell_internal(ImGuiTable * a0) { ImGui::TableEndCell(a0); }
EXPORT ImRect TableGetCellBgRect_internal(const ImGuiTable * a0, int a1) { return ImGui::TableGetCellBgRect(a0, a1); }
EXPORT const char * TableGetColumnName_internal(const ImGuiTable * a0, int a1) { return ImGui::TableGetColumnName(a0, a1); }
EXPORT ImGuiID TableGetColumnResizeID_internal(ImGuiTable * a0, int a1, int a2) { return ImGui::TableGetColumnResizeID(a0, a1, a2); }
EXPORT float TableCalcMaxColumnWidth_internal(const ImGuiTable * a0, int a1) { return ImGui::TableCalcMaxColumnWidth(a0, a1); }
EXPORT void TableSetColumnWidthAutoSingle_internal(ImGuiTable * a0, int a1) { ImGui::TableSetColumnWidthAutoSingle(a0, a1); }
EXPORT void TableSetColumnWidthAutoAll_internal(ImGuiTable * a0) { ImGui::TableSetColumnWidthAutoAll(a0); }
EXPORT void TableRemove_internal(ImGuiTable * a0) { ImGui::TableRemove(a0); }
EXPORT void TableGcCompactTransientBuffers_internal_0(ImGuiTable * a0) { ImGui::TableGcCompactTransientBuffers(a0); }
EXPORT void TableGcCompactTransientBuffers_internal_1(ImGuiTableTempData * a0) { ImGui::TableGcCompactTransientBuffers(a0); }
EXPORT void TableGcCompactSettings_internal(void) { ImGui::TableGcCompactSettings(); }
EXPORT void TableLoadSettings_internal(ImGuiTable * a0) { ImGui::TableLoadSettings(a0); }
EXPORT void TableSaveSettings_internal(ImGuiTable * a0) { ImGui::TableSaveSettings(a0); }
EXPORT void TableResetSettings_internal(ImGuiTable * a0) { ImGui::TableResetSettings(a0); }
EXPORT ImGuiTableSettings * TableGetBoundSettings_internal(ImGuiTable * a0) { return ImGui::TableGetBoundSettings(a0); }
EXPORT void TableSettingsAddSettingsHandler_internal(void) { ImGui::TableSettingsAddSettingsHandler(); }
EXPORT ImGuiTableSettings * TableSettingsCreate_internal(ImGuiID a0, int a1) { return ImGui::TableSettingsCreate(a0, a1); }
EXPORT ImGuiTableSettings * TableSettingsFindByID_internal(ImGuiID a0) { return ImGui::TableSettingsFindByID(a0); }
EXPORT ImGuiTabBar * GetCurrentTabBar_internal(void) { return ImGui::GetCurrentTabBar(); }
EXPORT bool BeginTabBarEx_internal(ImGuiTabBar * a0, const ImRect *a1, ImGuiTabBarFlags a2) { return ImGui::BeginTabBarEx(a0, *a1, a2); }
EXPORT ImGuiTabItem * TabBarFindTabByID_internal(ImGuiTabBar * a0, ImGuiID a1) { return ImGui::TabBarFindTabByID(a0, a1); }
EXPORT ImGuiTabItem * TabBarFindTabByOrder_internal(ImGuiTabBar * a0, int a1) { return ImGui::TabBarFindTabByOrder(a0, a1); }
EXPORT ImGuiTabItem * TabBarFindMostRecentlySelectedTabForActiveWindow_internal(ImGuiTabBar * a0) { return ImGui::TabBarFindMostRecentlySelectedTabForActiveWindow(a0); }
EXPORT ImGuiTabItem * TabBarGetCurrentTab_internal(ImGuiTabBar * a0) { return ImGui::TabBarGetCurrentTab(a0); }
EXPORT int TabBarGetTabOrder_internal(ImGuiTabBar * a0, ImGuiTabItem * a1) { return ImGui::TabBarGetTabOrder(a0, a1); }
EXPORT const char * TabBarGetTabName_internal(ImGuiTabBar * a0, ImGuiTabItem * a1) { return ImGui::TabBarGetTabName(a0, a1); }
EXPORT void TabBarAddTab_internal(ImGuiTabBar * a0, ImGuiTabItemFlags a1, ImGuiWindow * a2) { ImGui::TabBarAddTab(a0, a1, a2); }
EXPORT void TabBarRemoveTab_internal(ImGuiTabBar * a0, ImGuiID a1) { ImGui::TabBarRemoveTab(a0, a1); }
EXPORT void TabBarCloseTab_internal(ImGuiTabBar * a0, ImGuiTabItem * a1) { ImGui::TabBarCloseTab(a0, a1); }
EXPORT void TabBarQueueFocus_internal_0(ImGuiTabBar * a0, ImGuiTabItem * a1) { ImGui::TabBarQueueFocus(a0, a1); }
EXPORT void TabBarQueueFocus_internal_1(ImGuiTabBar * a0, const char * a1) { ImGui::TabBarQueueFocus(a0, a1); }
EXPORT void TabBarQueueReorder_internal(ImGuiTabBar * a0, ImGuiTabItem * a1, int a2) { ImGui::TabBarQueueReorder(a0, a1, a2); }
EXPORT void TabBarQueueReorderFromMousePos_internal(ImGuiTabBar * a0, ImGuiTabItem * a1, ImVec2 a2) { ImGui::TabBarQueueReorderFromMousePos(a0, a1, a2); }
EXPORT bool TabBarProcessReorder_internal(ImGuiTabBar * a0) { return ImGui::TabBarProcessReorder(a0); }
EXPORT bool TabItemEx_internal(ImGuiTabBar * a0, const char * a1, bool * a2, ImGuiTabItemFlags a3, ImGuiWindow * a4) { return ImGui::TabItemEx(a0, a1, a2, a3, a4); }
EXPORT void TabItemSpacing_internal(const char * a0, ImGuiTabItemFlags a1, float a2) { ImGui::TabItemSpacing(a0, a1, a2); }
EXPORT ImVec2 TabItemCalcSize_internal_0(const char * a0, bool a1) { return ImGui::TabItemCalcSize(a0, a1); }
EXPORT ImVec2 TabItemCalcSize_internal_1(ImGuiWindow * a0) { return ImGui::TabItemCalcSize(a0); }
EXPORT void TabItemBackground_internal(ImDrawList * a0, const ImRect *a1, ImGuiTabItemFlags a2, ImU32 a3) { ImGui::TabItemBackground(a0, *a1, a2, a3); }
EXPORT void TabItemLabelAndCloseButton_internal(ImDrawList * a0, const ImRect *a1, ImGuiTabItemFlags a2, ImVec2 a3, const char * a4, ImGuiID a5, ImGuiID a6, bool a7, bool * a8, bool * a9) { ImGui::TabItemLabelAndCloseButton(a0, *a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT void RenderText_internal(ImVec2 a0, const char * a1, const char * a2, bool a3) { ImGui::RenderText(a0, a1, a2, a3); }
EXPORT void RenderTextWrapped_internal(ImVec2 a0, const char * a1, const char * a2, float a3) { ImGui::RenderTextWrapped(a0, a1, a2, a3); }
EXPORT void RenderTextClipped_internal(const ImVec2 *a0, const ImVec2 *a1, const char * a2, const char * a3, const ImVec2 * a4, const ImVec2 *a5, const ImRect * a6) { ImGui::RenderTextClipped(*a0, *a1, a2, a3, a4, *a5, a6); }
EXPORT void RenderTextClippedEx_internal(ImDrawList * a0, const ImVec2 *a1, const ImVec2 *a2, const char * a3, const char * a4, const ImVec2 * a5, const ImVec2 *a6, const ImRect * a7) { ImGui::RenderTextClippedEx(a0, *a1, *a2, a3, a4, a5, *a6, a7); }
EXPORT void RenderTextEllipsis_internal(ImDrawList * a0, const ImVec2 *a1, const ImVec2 *a2, float a3, const char * a4, const char * a5, const ImVec2 * a6) { ImGui::RenderTextEllipsis(a0, *a1, *a2, a3, a4, a5, a6); }
EXPORT void RenderFrame_internal(ImVec2 a0, ImVec2 a1, ImU32 a2, bool a3, float a4) { ImGui::RenderFrame(a0, a1, a2, a3, a4); }
EXPORT void RenderFrameBorder_internal(ImVec2 a0, ImVec2 a1, float a2) { ImGui::RenderFrameBorder(a0, a1, a2); }
EXPORT void RenderColorRectWithAlphaCheckerboard_internal(ImDrawList * a0, ImVec2 a1, ImVec2 a2, ImU32 a3, float a4, ImVec2 a5, float a6, ImDrawFlags a7) { ImGui::RenderColorRectWithAlphaCheckerboard(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT void RenderNavCursor_internal(const ImRect *a0, ImGuiID a1, ImGuiNavRenderCursorFlags a2) { ImGui::RenderNavCursor(*a0, a1, a2); }
EXPORT const char * FindRenderedTextEnd_internal(const char * a0, const char * a1) { return ImGui::FindRenderedTextEnd(a0, a1); }
EXPORT void RenderMouseCursor_internal(ImVec2 a0, float a1, ImGuiMouseCursor a2, ImU32 a3, ImU32 a4, ImU32 a5) { ImGui::RenderMouseCursor(a0, a1, a2, a3, a4, a5); }
EXPORT void RenderArrow_internal(ImDrawList * a0, ImVec2 a1, ImU32 a2, ImGuiDir a3, float a4) { ImGui::RenderArrow(a0, a1, a2, a3, a4); }
EXPORT void RenderBullet_internal(ImDrawList * a0, ImVec2 a1, ImU32 a2) { ImGui::RenderBullet(a0, a1, a2); }
EXPORT void RenderCheckMark_internal(ImDrawList * a0, ImVec2 a1, ImU32 a2, float a3) { ImGui::RenderCheckMark(a0, a1, a2, a3); }
EXPORT void RenderArrowPointingAt_internal(ImDrawList * a0, ImVec2 a1, ImVec2 a2, ImGuiDir a3, ImU32 a4) { ImGui::RenderArrowPointingAt(a0, a1, a2, a3, a4); }
EXPORT void RenderArrowDockMenu_internal(ImDrawList * a0, ImVec2 a1, float a2, ImU32 a3) { ImGui::RenderArrowDockMenu(a0, a1, a2, a3); }
EXPORT void RenderRectFilledRangeH_internal(ImDrawList * a0, const ImRect *a1, ImU32 a2, float a3, float a4, float a5) { ImGui::RenderRectFilledRangeH(a0, *a1, a2, a3, a4, a5); }
EXPORT void RenderRectFilledWithHole_internal(ImDrawList * a0, const ImRect *a1, const ImRect *a2, ImU32 a3, float a4) { ImGui::RenderRectFilledWithHole(a0, *a1, *a2, a3, a4); }
EXPORT ImDrawFlags CalcRoundingFlagsForRectInRect_internal(const ImRect *a0, const ImRect *a1, float a2) { return ImGui::CalcRoundingFlagsForRectInRect(*a0, *a1, a2); }
EXPORT void TextEx_internal(const char * a0, const char * a1, ImGuiTextFlags a2) { ImGui::TextEx(a0, a1, a2); }
EXPORT void TextAligned_internal(float a0, float a1, const char * a2) { ImGui::TextAligned(a0, a1, "%s", a2); }
EXPORT bool ButtonEx_internal(const char * a0, const ImVec2 *a1, ImGuiButtonFlags a2) { return ImGui::ButtonEx(a0, *a1, a2); }
EXPORT bool ArrowButtonEx_internal(const char * a0, ImGuiDir a1, ImVec2 a2, ImGuiButtonFlags a3) { return ImGui::ArrowButtonEx(a0, a1, a2, a3); }
EXPORT bool ImageButtonEx_internal(ImGuiID a0, ImTextureRef a1, const ImVec2 *a2, const ImVec2 *a3, const ImVec2 *a4, const ImVec4 *a5, const ImVec4 *a6, ImGuiButtonFlags a7) { return ImGui::ImageButtonEx(a0, a1, *a2, *a3, *a4, *a5, *a6, a7); }
EXPORT void SeparatorEx_internal(ImGuiSeparatorFlags a0, float a1) { ImGui::SeparatorEx(a0, a1); }
EXPORT void SeparatorTextEx_internal(ImGuiID a0, const char * a1, const char * a2, float a3) { ImGui::SeparatorTextEx(a0, a1, a2, a3); }
EXPORT bool CheckboxFlags_internal_0(const char * a0, ImS64 * a1, ImS64 a2) { return ImGui::CheckboxFlags(a0, a1, a2); }
EXPORT bool CheckboxFlags_internal_1(const char * a0, ImU64 * a1, ImU64 a2) { return ImGui::CheckboxFlags(a0, a1, a2); }
EXPORT bool CloseButton_internal(ImGuiID a0, const ImVec2 *a1) { return ImGui::CloseButton(a0, *a1); }
EXPORT bool CollapseButton_internal(ImGuiID a0, const ImVec2 *a1, ImGuiDockNode * a2) { return ImGui::CollapseButton(a0, *a1, a2); }
EXPORT void Scrollbar_internal(ImGuiAxis a0) { ImGui::Scrollbar(a0); }
EXPORT bool ScrollbarEx_internal(const ImRect *a0, ImGuiID a1, ImGuiAxis a2, ImS64 * a3, ImS64 a4, ImS64 a5, ImDrawFlags a6) { return ImGui::ScrollbarEx(*a0, a1, a2, a3, a4, a5, a6); }
EXPORT ImRect GetWindowScrollbarRect_internal(ImGuiWindow * a0, ImGuiAxis a1) { return ImGui::GetWindowScrollbarRect(a0, a1); }
EXPORT ImGuiID GetWindowScrollbarID_internal(ImGuiWindow * a0, ImGuiAxis a1) { return ImGui::GetWindowScrollbarID(a0, a1); }
EXPORT ImGuiID GetWindowResizeCornerID_internal(ImGuiWindow * a0, int a1) { return ImGui::GetWindowResizeCornerID(a0, a1); }
EXPORT ImGuiID GetWindowResizeBorderID_internal(ImGuiWindow * a0, ImGuiDir a1) { return ImGui::GetWindowResizeBorderID(a0, a1); }
EXPORT bool ButtonBehavior_internal(const ImRect *a0, ImGuiID a1, bool * a2, bool * a3, ImGuiButtonFlags a4) { return ImGui::ButtonBehavior(*a0, a1, a2, a3, a4); }
EXPORT bool DragBehavior_internal(ImGuiID a0, ImGuiDataType a1, void * a2, float a3, const void * a4, const void * a5, const char * a6, ImGuiSliderFlags a7) { return ImGui::DragBehavior(a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT bool SliderBehavior_internal(const ImRect *a0, ImGuiID a1, ImGuiDataType a2, void * a3, const void * a4, const void * a5, const char * a6, ImGuiSliderFlags a7, ImRect * a8) { return ImGui::SliderBehavior(*a0, a1, a2, a3, a4, a5, a6, a7, a8); }
EXPORT bool SplitterBehavior_internal(const ImRect *a0, ImGuiID a1, ImGuiAxis a2, float * a3, float * a4, float a5, float a6, float a7, float a8, ImU32 a9) { return ImGui::SplitterBehavior(*a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
EXPORT bool TreeNodeBehavior_internal(ImGuiID a0, ImGuiTreeNodeFlags a1, const char * a2, const char * a3) { return ImGui::TreeNodeBehavior(a0, a1, a2, a3); }
EXPORT void TreeNodeDrawLineToChildNode_internal(const ImVec2 *a0) { ImGui::TreeNodeDrawLineToChildNode(*a0); }
EXPORT void TreeNodeDrawLineToTreePop_internal(const ImGuiTreeNodeStackData * a0) { ImGui::TreeNodeDrawLineToTreePop(a0); }
EXPORT void TreePushOverrideID_internal(ImGuiID a0) { ImGui::TreePushOverrideID(a0); }
EXPORT bool TreeNodeGetOpen_internal(ImGuiID a0) { return ImGui::TreeNodeGetOpen(a0); }
EXPORT void TreeNodeSetOpen_internal(ImGuiID a0, bool a1) { ImGui::TreeNodeSetOpen(a0, a1); }
EXPORT bool TreeNodeUpdateNextOpen_internal(ImGuiID a0, ImGuiTreeNodeFlags a1) { return ImGui::TreeNodeUpdateNextOpen(a0, a1); }
EXPORT const ImGuiDataTypeInfo * DataTypeGetInfo_internal(ImGuiDataType a0) { return ImGui::DataTypeGetInfo(a0); }
EXPORT int DataTypeFormatString_internal(char * a0, int a1, ImGuiDataType a2, const void * a3, const char * a4) { return ImGui::DataTypeFormatString(a0, a1, a2, a3, a4); }
EXPORT void DataTypeApplyOp_internal(ImGuiDataType a0, int a1, void * a2, const void * a3, const void * a4) { ImGui::DataTypeApplyOp(a0, a1, a2, a3, a4); }
EXPORT bool DataTypeApplyFromText_internal(const char * a0, ImGuiDataType a1, void * a2, const char * a3, void * a4) { return ImGui::DataTypeApplyFromText(a0, a1, a2, a3, a4); }
EXPORT int DataTypeCompare_internal(ImGuiDataType a0, const void * a1, const void * a2) { return ImGui::DataTypeCompare(a0, a1, a2); }
EXPORT bool DataTypeClamp_internal(ImGuiDataType a0, void * a1, const void * a2, const void * a3) { return ImGui::DataTypeClamp(a0, a1, a2, a3); }
EXPORT bool DataTypeIsZero_internal(ImGuiDataType a0, const void * a1) { return ImGui::DataTypeIsZero(a0, a1); }
EXPORT bool InputTextEx_internal(const char * a0, const char * a1, char * a2, int a3, const ImVec2 *a4, ImGuiInputTextFlags a5, ImGuiInputTextCallback a6, void * a7) { return ImGui::InputTextEx(a0, a1, a2, a3, *a4, a5, a6, a7); }
EXPORT void InputTextDeactivateHook_internal(ImGuiID a0) { ImGui::InputTextDeactivateHook(a0); }
EXPORT bool TempInputText_internal(const ImRect *a0, ImGuiID a1, const char * a2, char * a3, int a4, ImGuiInputTextFlags a5) { return ImGui::TempInputText(*a0, a1, a2, a3, a4, a5); }
EXPORT bool TempInputScalar_internal(const ImRect *a0, ImGuiID a1, const char * a2, ImGuiDataType a3, void * a4, const char * a5, const void * a6, const void * a7) { return ImGui::TempInputScalar(*a0, a1, a2, a3, a4, a5, a6, a7); }
EXPORT bool TempInputIsActive_internal(ImGuiID a0) { return ImGui::TempInputIsActive(a0); }
EXPORT ImGuiInputTextState * GetInputTextState_internal(ImGuiID a0) { return ImGui::GetInputTextState(a0); }
EXPORT void SetNextItemRefVal_internal(ImGuiDataType a0, void * a1) { ImGui::SetNextItemRefVal(a0, a1); }
EXPORT bool IsItemActiveAsInputText_internal(void) { return ImGui::IsItemActiveAsInputText(); }
EXPORT void ColorTooltip_internal(const char * a0, const float * a1, ImGuiColorEditFlags a2) { ImGui::ColorTooltip(a0, a1, a2); }
EXPORT void ColorEditOptionsPopup_internal(const float * a0, ImGuiColorEditFlags a1) { ImGui::ColorEditOptionsPopup(a0, a1); }
EXPORT void ColorPickerOptionsPopup_internal(const float * a0, ImGuiColorEditFlags a1) { ImGui::ColorPickerOptionsPopup(a0, a1); }
EXPORT int PlotEx_internal(ImGuiPlotType a0, const char * a1, float (*a2)(void *, int), void * a3, int a4, int a5, const char * a6, float a7, float a8, const ImVec2 *a9) { return ImGui::PlotEx(a0, a1, a2, a3, a4, a5, a6, a7, a8, *a9); }
EXPORT void ShadeVertsLinearColorGradientKeepAlpha_internal(ImDrawList * a0, int a1, int a2, ImVec2 a3, ImVec2 a4, ImU32 a5, ImU32 a6) { ImGui::ShadeVertsLinearColorGradientKeepAlpha(a0, a1, a2, a3, a4, a5, a6); }
EXPORT void ShadeVertsLinearUV_internal(ImDrawList * a0, int a1, int a2, const ImVec2 *a3, const ImVec2 *a4, const ImVec2 *a5, const ImVec2 *a6, bool a7) { ImGui::ShadeVertsLinearUV(a0, a1, a2, *a3, *a4, *a5, *a6, a7); }
EXPORT void ShadeVertsTransformPos_internal(ImDrawList * a0, int a1, int a2, const ImVec2 *a3, float a4, float a5, const ImVec2 *a6) { ImGui::ShadeVertsTransformPos(a0, a1, a2, *a3, a4, a5, *a6); }
EXPORT void GcCompactTransientMiscBuffers_internal(void) { ImGui::GcCompactTransientMiscBuffers(); }
EXPORT void GcCompactTransientWindowBuffers_internal(ImGuiWindow * a0) { ImGui::GcCompactTransientWindowBuffers(a0); }
EXPORT void GcAwakeTransientWindowBuffers_internal(ImGuiWindow * a0) { ImGui::GcAwakeTransientWindowBuffers(a0); }
EXPORT bool ErrorLog_internal(const char * a0) { return ImGui::ErrorLog(a0); }
EXPORT void ErrorRecoveryStoreState_internal(ImGuiErrorRecoveryState * a0) { ImGui::ErrorRecoveryStoreState(a0); }
EXPORT void ErrorRecoveryTryToRecoverState_internal(const ImGuiErrorRecoveryState * a0) { ImGui::ErrorRecoveryTryToRecoverState(a0); }
EXPORT void ErrorRecoveryTryToRecoverWindowState_internal(const ImGuiErrorRecoveryState * a0) { ImGui::ErrorRecoveryTryToRecoverWindowState(a0); }
EXPORT void ErrorCheckUsingSetCursorPosToExtendParentBoundaries_internal(void) { ImGui::ErrorCheckUsingSetCursorPosToExtendParentBoundaries(); }
EXPORT void ErrorCheckEndFrameFinalizeErrorTooltip_internal(void) { ImGui::ErrorCheckEndFrameFinalizeErrorTooltip(); }
EXPORT bool BeginErrorTooltip_internal(void) { return ImGui::BeginErrorTooltip(); }
EXPORT void EndErrorTooltip_internal(void) { ImGui::EndErrorTooltip(); }
EXPORT void DebugAllocHook_internal(ImGuiDebugAllocInfo * a0, int a1, void * a2, size_t a3) { ImGui::DebugAllocHook(a0, a1, a2, a3); }
EXPORT void DebugDrawCursorPos_internal(ImU32 a0) { ImGui::DebugDrawCursorPos(a0); }
EXPORT void DebugDrawLineExtents_internal(ImU32 a0) { ImGui::DebugDrawLineExtents(a0); }
EXPORT void DebugDrawItemRect_internal(ImU32 a0) { ImGui::DebugDrawItemRect(a0); }
EXPORT void DebugTextUnformattedWithLocateItem_internal(const char * a0, const char * a1) { ImGui::DebugTextUnformattedWithLocateItem(a0, a1); }
EXPORT void DebugLocateItem_internal(ImGuiID a0) { ImGui::DebugLocateItem(a0); }
EXPORT void DebugLocateItemOnHover_internal(ImGuiID a0) { ImGui::DebugLocateItemOnHover(a0); }
EXPORT void DebugLocateItemResolveWithLastItem_internal(void) { ImGui::DebugLocateItemResolveWithLastItem(); }
EXPORT void DebugBreakClearData_internal(void) { ImGui::DebugBreakClearData(); }
EXPORT bool DebugBreakButton_internal(const char * a0, const char * a1) { return ImGui::DebugBreakButton(a0, a1); }
EXPORT void DebugBreakButtonTooltip_internal(bool a0, const char * a1) { ImGui::DebugBreakButtonTooltip(a0, a1); }
EXPORT void ShowFontAtlas_internal(ImFontAtlas * a0) { ImGui::ShowFontAtlas(a0); }
EXPORT void DebugHookIdInfo_internal(ImGuiID a0, ImGuiDataType a1, const void * a2, const void * a3) { ImGui::DebugHookIdInfo(a0, a1, a2, a3); }
EXPORT void DebugNodeColumns_internal(ImGuiOldColumns * a0) { ImGui::DebugNodeColumns(a0); }
EXPORT void DebugNodeDockNode_internal(ImGuiDockNode * a0, const char * a1) { ImGui::DebugNodeDockNode(a0, a1); }
EXPORT void DebugNodeDrawList_internal(ImGuiWindow * a0, ImGuiViewportP * a1, const ImDrawList * a2, const char * a3) { ImGui::DebugNodeDrawList(a0, a1, a2, a3); }
EXPORT void DebugNodeDrawCmdShowMeshAndBoundingBox_internal(ImDrawList * a0, const ImDrawList * a1, const ImDrawCmd * a2, bool a3, bool a4) { ImGui::DebugNodeDrawCmdShowMeshAndBoundingBox(a0, a1, a2, a3, a4); }
EXPORT void DebugNodeFont_internal(ImFont * a0) { ImGui::DebugNodeFont(a0); }
EXPORT void DebugNodeFontGlyphesForSrcMask_internal(ImFont * a0, ImFontBaked * a1, int a2) { ImGui::DebugNodeFontGlyphesForSrcMask(a0, a1, a2); }
EXPORT void DebugNodeFontGlyph_internal(ImFont * a0, const ImFontGlyph * a1) { ImGui::DebugNodeFontGlyph(a0, a1); }
EXPORT void DebugNodeTexture_internal(ImTextureData * a0, int a1, const ImFontAtlasRect * a2) { ImGui::DebugNodeTexture(a0, a1, a2); }
EXPORT void DebugNodeStorage_internal(ImGuiStorage * a0, const char * a1) { ImGui::DebugNodeStorage(a0, a1); }
EXPORT void DebugNodeTabBar_internal(ImGuiTabBar * a0, const char * a1) { ImGui::DebugNodeTabBar(a0, a1); }
EXPORT void DebugNodeTable_internal(ImGuiTable * a0) { ImGui::DebugNodeTable(a0); }
EXPORT void DebugNodeTableSettings_internal(ImGuiTableSettings * a0) { ImGui::DebugNodeTableSettings(a0); }
EXPORT void DebugNodeInputTextState_internal(ImGuiInputTextState * a0) { ImGui::DebugNodeInputTextState(a0); }
EXPORT void DebugNodeTypingSelectState_internal(ImGuiTypingSelectState * a0) { ImGui::DebugNodeTypingSelectState(a0); }
EXPORT void DebugNodeMultiSelectState_internal(ImGuiMultiSelectState * a0) { ImGui::DebugNodeMultiSelectState(a0); }
EXPORT void DebugNodeWindow_internal(ImGuiWindow * a0, const char * a1) { ImGui::DebugNodeWindow(a0, a1); }
EXPORT void DebugNodeWindowSettings_internal(ImGuiWindowSettings * a0) { ImGui::DebugNodeWindowSettings(a0); }
EXPORT void DebugNodeWindowsList_internal(ImVector<ImGuiWindow *> * a0, const char * a1) { ImGui::DebugNodeWindowsList(a0, a1); }
EXPORT void DebugNodeWindowsListByBeginStackParent_internal(ImGuiWindow ** a0, int a1, ImGuiWindow * a2) { ImGui::DebugNodeWindowsListByBeginStackParent(a0, a1, a2); }
EXPORT void DebugNodeViewport_internal(ImGuiViewportP * a0) { ImGui::DebugNodeViewport(a0); }
EXPORT void DebugNodePlatformMonitor_internal(ImGuiPlatformMonitor * a0, const char * a1, int a2) { ImGui::DebugNodePlatformMonitor(a0, a1, a2); }
EXPORT void DebugRenderKeyboardPreview_internal(ImDrawList * a0) { ImGui::DebugRenderKeyboardPreview(a0); }
EXPORT void DebugRenderViewportThumbnail_internal(ImDrawList * a0, ImGuiViewportP * a1, const ImRect *a2) { ImGui::DebugRenderViewportThumbnail(a0, a1, *a2); }
