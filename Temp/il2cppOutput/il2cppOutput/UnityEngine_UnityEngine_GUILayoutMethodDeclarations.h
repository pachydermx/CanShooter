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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t5_239;
// UnityEngine.GUIContent
struct GUIContent_t5_133;
// UnityEngine.GUIStyle
struct GUIStyle_t5_138;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t5_144;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m5_1036 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t5_239* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m5_1037 (Object_t * __this /* static, unused */, GUIContent_t5_133 * ___content, GUIStyle_t5_138 * ___style, GUILayoutOptionU5BU5D_t5_239* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C" void GUILayout_FlexibleSpace_m5_1038 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m5_1039 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t5_239* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m5_1040 (Object_t * __this /* static, unused */, GUIContent_t5_133 * ___content, GUIStyle_t5_138 * ___style, GUILayoutOptionU5BU5D_t5_239* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m5_1041 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C" void GUILayout_BeginArea_m5_1042 (Object_t * __this /* static, unused */, Rect_t5_30  ___screenRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUILayout_BeginArea_m5_1043 (Object_t * __this /* static, unused */, Rect_t5_30  ___screenRect, GUIContent_t5_133 * ___content, GUIStyle_t5_138 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C" void GUILayout_EndArea_m5_1044 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t5_54  GUILayout_BeginScrollView_m5_1045 (Object_t * __this /* static, unused */, Vector2_t5_54  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUILayoutOptionU5BU5D_t5_239* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t5_54  GUILayout_BeginScrollView_m5_1046 (Object_t * __this /* static, unused */, Vector2_t5_54  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t5_138 * ___horizontalScrollbar, GUIStyle_t5_138 * ___verticalScrollbar, GUIStyle_t5_138 * ___background, GUILayoutOptionU5BU5D_t5_239* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C" void GUILayout_EndScrollView_m5_1047 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C" void GUILayout_EndScrollView_m5_1048 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t5_144 * GUILayout_Width_m5_1049 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t5_144 * GUILayout_Height_m5_1050 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C" GUILayoutOption_t5_144 * GUILayout_ExpandWidth_m5_1051 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C" GUILayoutOption_t5_144 * GUILayout_ExpandHeight_m5_1052 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
