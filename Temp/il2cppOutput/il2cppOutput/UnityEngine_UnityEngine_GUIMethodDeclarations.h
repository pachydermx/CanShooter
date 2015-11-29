#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.GUISkin
struct GUISkin_t5_131;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t5_138;
// UnityEngine.GUIContent
struct GUIContent_t5_133;
// UnityEngine.Texture
struct Texture_t5_31;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t5_129;
// UnityEngine.Material
struct Material_t5_33;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ScaleMode.h"
#include "UnityEngine_UnityEngine_FocusType.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m5_978 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C" DateTime_t1_128  GUI_get_nextScrollStepTime_m5_979 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m5_980 (Object_t * __this /* static, unused */, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C" int32_t GUI_get_scrollTroughSide_m5_981 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C" void GUI_set_scrollTroughSide_m5_982 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m5_983 (Object_t * __this /* static, unused */, GUISkin_t5_131 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t5_131 * GUI_get_skin_m5_984 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C" void GUI_DoSetSkin_m5_985 (Object_t * __this /* static, unused */, GUISkin_t5_131 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GUI::get_matrix()
extern "C" Matrix4x4_t5_57  GUI_get_matrix_m5_986 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
extern "C" void GUI_set_matrix_m5_987 (Object_t * __this /* static, unused */, Matrix4x4_t5_57  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m5_988 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m5_989 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, String_t* ___text, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m5_990 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, GUIContent_t5_133 * ___content, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_DrawTexture_m5_991 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, Texture_t5_31 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C" void GUI_DrawTexture_m5_992 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, Texture_t5_31 * ___image, int32_t ___scaleMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
extern "C" void GUI_DrawTexture_m5_993 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, Texture_t5_31 * ___image, int32_t ___scaleMode, bool ___alphaBlend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m5_994 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, Texture_t5_31 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m5_995 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, String_t* ___text, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m5_996 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, GUIContent_t5_133 * ___content, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m5_997 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m5_998 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, String_t* ___text, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m5_999 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, Texture_t5_31 * ___image, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C" bool GUI_DoRepeatButton_m5_1000 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, GUIContent_t5_133 * ___content, GUIStyle_t5_138 * ___style, int32_t ___focusType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,System.String,UnityEngine.GUIStyle)
extern "C" bool GUI_Toggle_m5_1001 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, bool ___value, String_t* ___text, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Toggle_m5_1002 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, bool ___value, GUIContent_t5_133 * ___content, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" float GUI_Slider_m5_1003 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t5_138 * ___slider, GUIStyle_t5_138 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_HorizontalScrollbar_m5_1004 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" bool GUI_ScrollerRepeatButton_m5_1005 (Object_t * __this /* static, unused */, int32_t ___scrollerID, Rect_t5_30  ___rect, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_VerticalScrollbar_m5_1006 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" float GUI_Scroller_m5_1007 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t5_138 * ___slider, GUIStyle_t5_138 * ___thumb, GUIStyle_t5_138 * ___leftButton, GUIStyle_t5_138 * ___rightButton, bool ___horiz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_BeginGroup_m5_1008 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, GUIContent_t5_133 * ___content, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
extern "C" void GUI_EndGroup_m5_1009 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" Vector2_t5_54  GUI_BeginScrollView_m5_1010 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, Vector2_t5_54  ___scrollPosition, Rect_t5_30  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t5_138 * ___horizontalScrollbar, GUIStyle_t5_138 * ___verticalScrollbar, GUIStyle_t5_138 * ___background, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C" void GUI_EndScrollView_m5_1011 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t5_30  GUI_Window_m5_1012 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t5_30  ___clientRect, WindowFunction_t5_129 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m5_1013 (Object_t * __this /* static, unused */, WindowFunction_t5_129 * ___func, int32_t ___id, GUISkin_t5_131 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t5_48  GUI_get_color_m5_1014 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m5_1015 (Object_t * __this /* static, unused */, Color_t5_48 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m5_1016 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m5_1017 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, GUIContent_t5_133 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m5_1018 (Object_t * __this /* static, unused */, Rect_t5_30 * ___position, GUIContent_t5_133 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t5_33 * GUI_get_blendMaterial_m5_1019 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t5_33 * GUI_get_blitMaterial_m5_1020 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m5_1021 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, GUIContent_t5_133 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m5_1022 (Object_t * __this /* static, unused */, Rect_t5_30 * ___position, GUIContent_t5_133 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoToggle_m5_1023 (Object_t * __this /* static, unused */, Rect_t5_30  ___position, int32_t ___id, bool ___value, GUIContent_t5_133 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoToggle_m5_1024 (Object_t * __this /* static, unused */, Rect_t5_30 * ___position, int32_t ___id, bool ___value, GUIContent_t5_133 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C" bool GUI_get_usePageScrollbars_m5_1025 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C" void GUI_InternalRepaintEditorWindow_m5_1026 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t5_30  GUI_DoWindow_m5_1027 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t5_30  ___clientRect, WindowFunction_t5_129 * ___func, GUIContent_t5_133 * ___title, GUIStyle_t5_138 * ___style, GUISkin_t5_131 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t5_30  GUI_INTERNAL_CALL_DoWindow_m5_1028 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t5_30 * ___clientRect, WindowFunction_t5_129 * ___func, GUIContent_t5_133 * ___title, GUIStyle_t5_138 * ___style, GUISkin_t5_131 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
