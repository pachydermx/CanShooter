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

// SampleAppsUILayout
struct SampleAppsUILayout_t7_19;
// UnityEngine.Font
struct Font_t5_117;
// SampleAppUILabel
struct SampleAppUILabel_t7_18;
// System.String
struct String_t;
// SampleAppUICheckButton
struct SampleAppUICheckButton_t7_15;
// SampleAppUIRadioButton
struct SampleAppUIRadioButton_t7_20;
// System.String[]
struct StringU5BU5D_t1_206;
// SampleAppUIButton
struct SampleAppUIButton_t7_14;
// UnityEngine.Texture
struct Texture_t5_31;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void SampleAppsUILayout::.ctor()
extern "C" void SampleAppsUILayout__ctor_m7_76 (SampleAppsUILayout_t7_19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font SampleAppsUILayout::get_StyleFont()
extern "C" Font_t5_117 * SampleAppsUILayout_get_StyleFont_m7_77 (SampleAppsUILayout_t7_19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppsUILayout::Draw()
extern "C" void SampleAppsUILayout_Draw_m7_78 (SampleAppsUILayout_t7_19 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUILabel SampleAppsUILayout::AddLabel(System.String)
extern "C" SampleAppUILabel_t7_18 * SampleAppsUILayout_AddLabel_m7_79 (SampleAppsUILayout_t7_19 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUILabel SampleAppsUILayout::AddGroupLabel(System.String)
extern "C" SampleAppUILabel_t7_18 * SampleAppsUILayout_AddGroupLabel_m7_80 (SampleAppsUILayout_t7_19 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSimpleButton(System.String)
extern "C" SampleAppUICheckButton_t7_15 * SampleAppsUILayout_AddSimpleButton_m7_81 (SampleAppsUILayout_t7_19 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSlider(System.String,System.Boolean)
extern "C" SampleAppUICheckButton_t7_15 * SampleAppsUILayout_AddSlider_m7_82 (SampleAppsUILayout_t7_19 * __this, String_t* ___title, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSlider_Type2(System.String,System.Boolean)
extern "C" SampleAppUICheckButton_t7_15 * SampleAppsUILayout_AddSlider_Type2_m7_83 (SampleAppsUILayout_t7_19 * __this, String_t* ___title, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIRadioButton SampleAppsUILayout::AddToggleOptions(System.String[],System.Int32)
extern "C" SampleAppUIRadioButton_t7_20 * SampleAppsUILayout_AddToggleOptions_m7_84 (SampleAppsUILayout_t7_19 * __this, StringU5BU5D_t1_206* ___titleList, int32_t ___selectedId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIButton SampleAppsUILayout::AddButton(System.String,UnityEngine.Rect)
extern "C" SampleAppUIButton_t7_14 * SampleAppsUILayout_AddButton_m7_85 (SampleAppsUILayout_t7_19 * __this, String_t* ___title, Rect_t5_30  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIButton SampleAppsUILayout::AddButton(UnityEngine.Texture,UnityEngine.Rect)
extern "C" SampleAppUIButton_t7_14 * SampleAppsUILayout_AddButton_m7_86 (SampleAppsUILayout_t7_19 * __this, Texture_t5_31 * ___buttonTexture, Rect_t5_30  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppsUILayout::AddGap(System.Single)
extern "C" void SampleAppsUILayout_AddGap_m7_87 (SampleAppsUILayout_t7_19 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
