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

// SampleAppUIButton
struct SampleAppUIButton_t7_14;
// UnityEngine.GUIStyle
struct GUIStyle_t5_138;
// UnityEngine.Texture
struct Texture_t5_31;
// System.String
struct String_t;
// System.Action
struct Action_t4_11;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void SampleAppUIButton::.ctor(UnityEngine.Rect,UnityEngine.GUIStyle,UnityEngine.Texture)
extern "C" void SampleAppUIButton__ctor_m7_55 (SampleAppUIButton_t7_14 * __this, Rect_t5_30  ___rect, GUIStyle_t5_138 * ___style, Texture_t5_31 * ___buttonTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::.ctor(UnityEngine.Rect,UnityEngine.GUIStyle,System.String)
extern "C" void SampleAppUIButton__ctor_m7_56 (SampleAppUIButton_t7_14 * __this, Rect_t5_30  ___rect, GUIStyle_t5_138 * ___style, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::add_TappedOn(System.Action)
extern "C" void SampleAppUIButton_add_TappedOn_m7_57 (SampleAppUIButton_t7_14 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::remove_TappedOn(System.Action)
extern "C" void SampleAppUIButton_remove_TappedOn_m7_58 (SampleAppUIButton_t7_14 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SampleAppUIButton::Draw()
extern "C" void SampleAppUIButton_Draw_m7_59 (SampleAppUIButton_t7_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
