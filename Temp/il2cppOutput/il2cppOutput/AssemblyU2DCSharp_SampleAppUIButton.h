#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t5_31;
// UnityEngine.GUIStyle
struct GUIStyle_t5_181;
// System.String
struct String_t;
// System.Action
struct Action_t4_11;

#include "AssemblyU2DCSharp_ISampleAppUIElement.h"
#include "UnityEngine_UnityEngine_Rect.h"

// SampleAppUIButton
struct  SampleAppUIButton_t8_15  : public ISampleAppUIElement_t8_13
{
	// UnityEngine.Texture SampleAppUIButton::mButtonImage
	Texture_t5_31 * ___mButtonImage_0;
	// UnityEngine.Rect SampleAppUIButton::mRect
	Rect_t5_30  ___mRect_1;
	// UnityEngine.GUIStyle SampleAppUIButton::mStyle
	GUIStyle_t5_181 * ___mStyle_2;
	// System.String SampleAppUIButton::mTitle
	String_t* ___mTitle_3;
	// System.Action SampleAppUIButton::TappedOn
	Action_t4_11 * ___TappedOn_4;
};
