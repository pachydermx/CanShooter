﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t5_178;
// UnityEngine.GUIStyle
struct GUIStyle_t5_181;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t5_298;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t5_179;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t5_176;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C" void GUILayoutUtility__cctor_m5_1392 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" LayoutCache_t5_178 * GUILayoutUtility_SelectIDList_m5_1393 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" void GUILayoutUtility_Begin_m5_1394 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutUtility_BeginWindow_m5_1395 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t5_181 * ___style, GUILayoutOptionU5BU5D_t5_298* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
extern "C" void GUILayoutUtility_EndGroup_m5_1396 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" void GUILayoutUtility_Layout_m5_1397 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m5_1398 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutFreeGroup_m5_1399 (Object_t * __this /* static, unused */, GUILayoutGroup_t5_179 * ___toplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutSingleGroup_m5_1400 (Object_t * __this /* static, unused */, GUILayoutGroup_t5_179 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
extern "C" GUILayoutGroup_t5_179 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m5_1401 (Object_t * __this /* static, unused */, Type_t * ___LayoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
extern "C" GUILayoutGroup_t5_179 * GUILayoutUtility_BeginLayoutGroup_m5_1402 (Object_t * __this /* static, unused */, GUIStyle_t5_181 * ___style, GUILayoutOptionU5BU5D_t5_298* ___options, Type_t * ___layoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
extern "C" void GUILayoutUtility_EndLayoutGroup_m5_1403 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutArea(UnityEngine.GUIStyle,System.Type)
extern "C" GUILayoutGroup_t5_179 * GUILayoutUtility_BeginLayoutArea_m5_1404 (Object_t * __this /* static, unused */, GUIStyle_t5_181 * ___style, Type_t * ___layoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t5_30  GUILayoutUtility_GetRect_m5_1405 (Object_t * __this /* static, unused */, GUIContent_t5_176 * ___content, GUIStyle_t5_181 * ___style, GUILayoutOptionU5BU5D_t5_298* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t5_30  GUILayoutUtility_DoGetRect_m5_1406 (Object_t * __this /* static, unused */, GUIContent_t5_176 * ___content, GUIStyle_t5_181 * ___style, GUILayoutOptionU5BU5D_t5_298* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t5_30  GUILayoutUtility_GetRect_m5_1407 (Object_t * __this /* static, unused */, float ___width, float ___height, GUIStyle_t5_181 * ___style, GUILayoutOptionU5BU5D_t5_298* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t5_30  GUILayoutUtility_DoGetRect_m5_1408 (Object_t * __this /* static, unused */, float ___minWidth, float ___maxWidth, float ___minHeight, float ___maxHeight, GUIStyle_t5_181 * ___style, GUILayoutOptionU5BU5D_t5_298* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C" GUIStyle_t5_181 * GUILayoutUtility_get_spaceStyle_m5_1409 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t5_30  GUILayoutUtility_Internal_GetWindowRect_m5_1410 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" void GUILayoutUtility_Internal_MoveWindow_m5_1411 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t5_30  ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m5_1412 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t5_30 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
