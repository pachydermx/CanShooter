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

// UnityEngine.GUIStyle
struct GUIStyle_t5_138;
// UnityEngine.GUIStyleState
struct GUIStyleState_t5_148;
// UnityEngine.RectOffset
struct RectOffset_t5_140;
// UnityEngine.Font
struct Font_t5_117;
// UnityEngine.GUIContent
struct GUIContent_t5_133;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_ImagePosition.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_Internal_DrawArguments.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m5_1195 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" void GUIStyle__cctor_m5_1196 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m5_1197 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t5_148 * GUIStyle_get_normal_m5_1198 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
extern "C" GUIStyleState_t5_148 * GUIStyle_get_active_m5_1199 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onNormal()
extern "C" GUIStyleState_t5_148 * GUIStyle_get_onNormal_m5_1200 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t5_140 * GUIStyle_get_margin_m5_1201 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t5_140 * GUIStyle_get_padding_m5_1202 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C" void GUIStyle_set_font_m5_1203 (GUIStyle_t5_138 * __this, Font_t5_117 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Internal_Draw_m5_1204 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_30  ___position, GUIContent_t5_133 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1205 (GUIStyle_t5_138 * __this, Rect_t5_30  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" void GUIStyle_Draw_m5_1206 (GUIStyle_t5_138 * __this, Rect_t5_30  ___position, GUIContent_t5_133 * ___content, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1207 (GUIStyle_t5_138 * __this, Rect_t5_30  ___position, GUIContent_t5_133 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t5_138 * GUIStyle_get_none_m5_1208 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C" Vector2_t5_54  GUIStyle_CalcSize_m5_1209 (GUIStyle_t5_138 * __this, GUIContent_t5_133 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_CalcHeight_m5_1210 (GUIStyle_t5_138 * __this, GUIContent_t5_133 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C" bool GUIStyle_get_isHeightDependantOnWidth_m5_1211 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_CalcMinMaxWidth_m5_1212 (GUIStyle_t5_138 * __this, GUIContent_t5_133 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C" String_t* GUIStyle_ToString_m5_1213 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m5_1214 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m5_1215 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m5_1216 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m5_1217 (GUIStyle_t5_138 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m5_1218 (GUIStyle_t5_138 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m5_1219 (GUIStyle_t5_138 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C" int32_t GUIStyle_get_imagePosition_m5_1220 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" void GUIStyle_set_alignment_m5_1221 (GUIStyle_t5_138 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C" bool GUIStyle_get_wordWrap_m5_1222 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" void GUIStyle_set_wordWrap_m5_1223 (GUIStyle_t5_138 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_contentOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_contentOffset_m5_1224 (GUIStyle_t5_138 * __this, Vector2_t5_54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_contentOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_set_contentOffset_m5_1225 (GUIStyle_t5_138 * __this, Vector2_t5_54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m5_1226 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m5_1227 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m5_1228 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m5_1229 (GUIStyle_t5_138 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m5_1230 (GUIStyle_t5_138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m5_1231 (GUIStyle_t5_138 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetFontInternal(UnityEngine.Font)
extern "C" void GUIStyle_SetFontInternal_m5_1232 (GUIStyle_t5_138 * __this, Font_t5_117 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
extern "C" void GUIStyle_Internal_Draw_m5_1233 (Object_t * __this /* static, unused */, GUIContent_t5_133 * ___content, Internal_DrawArguments_t5_155 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Internal_Draw2_m5_1234 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_30  ___position, GUIContent_t5_133 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_Draw2_m5_1235 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_30 * ___position, GUIContent_t5_133 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m5_1236 (Object_t * __this /* static, unused */, Font_t5_117 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m5_1237 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_133 * ___content, Vector2_t5_54 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m5_1238 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_133 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_Internal_CalcMinMaxWidth_m5_1239 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_133 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
