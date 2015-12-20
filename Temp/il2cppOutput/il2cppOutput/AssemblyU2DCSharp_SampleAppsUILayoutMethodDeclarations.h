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
struct SampleAppsUILayout_t8_20;
// UnityEngine.Font
struct Font_t5_153;
// SampleAppUILabel
struct SampleAppUILabel_t8_19;
// System.String
struct String_t;
// SampleAppUICheckButton
struct SampleAppUICheckButton_t8_16;
// SampleAppUIRadioButton
struct SampleAppUIRadioButton_t8_21;
// System.String[]
struct StringU5BU5D_t1_206;
// SampleAppUIButton
struct SampleAppUIButton_t8_15;
// UnityEngine.Texture
struct Texture_t5_31;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void SampleAppsUILayout::.ctor()
extern "C" void SampleAppsUILayout__ctor_m8_88 (SampleAppsUILayout_t8_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font SampleAppsUILayout::get_StyleFont()
extern "C" Font_t5_153 * SampleAppsUILayout_get_StyleFont_m8_89 (SampleAppsUILayout_t8_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppsUILayout::Draw()
extern "C" void SampleAppsUILayout_Draw_m8_90 (SampleAppsUILayout_t8_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUILabel SampleAppsUILayout::AddLabel(System.String)
extern "C" SampleAppUILabel_t8_19 * SampleAppsUILayout_AddLabel_m8_91 (SampleAppsUILayout_t8_20 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUILabel SampleAppsUILayout::AddGroupLabel(System.String)
extern "C" SampleAppUILabel_t8_19 * SampleAppsUILayout_AddGroupLabel_m8_92 (SampleAppsUILayout_t8_20 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSimpleButton(System.String)
extern "C" SampleAppUICheckButton_t8_16 * SampleAppsUILayout_AddSimpleButton_m8_93 (SampleAppsUILayout_t8_20 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSlider(System.String,System.Boolean)
extern "C" SampleAppUICheckButton_t8_16 * SampleAppsUILayout_AddSlider_m8_94 (SampleAppsUILayout_t8_20 * __this, String_t* ___title, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUICheckButton SampleAppsUILayout::AddSlider_Type2(System.String,System.Boolean)
extern "C" SampleAppUICheckButton_t8_16 * SampleAppsUILayout_AddSlider_Type2_m8_95 (SampleAppsUILayout_t8_20 * __this, String_t* ___title, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIRadioButton SampleAppsUILayout::AddToggleOptions(System.String[],System.Int32)
extern "C" SampleAppUIRadioButton_t8_21 * SampleAppsUILayout_AddToggleOptions_m8_96 (SampleAppsUILayout_t8_20 * __this, StringU5BU5D_t1_206* ___titleList, int32_t ___selectedId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIButton SampleAppsUILayout::AddButton(System.String,UnityEngine.Rect)
extern "C" SampleAppUIButton_t8_15 * SampleAppsUILayout_AddButton_m8_97 (SampleAppsUILayout_t8_20 * __this, String_t* ___title, Rect_t5_30  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SampleAppUIButton SampleAppsUILayout::AddButton(UnityEngine.Texture,UnityEngine.Rect)
extern "C" SampleAppUIButton_t8_15 * SampleAppsUILayout_AddButton_m8_98 (SampleAppsUILayout_t8_20 * __this, Texture_t5_31 * ___buttonTexture, Rect_t5_30  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppsUILayout::AddGap(System.Single)
extern "C" void SampleAppsUILayout_AddGap_m8_99 (SampleAppsUILayout_t8_20 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
