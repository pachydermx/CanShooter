#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SampleAppUIRect
struct SampleAppUIRect_t7_16;
// UnityEngine.GUIStyle
struct GUIStyle_t5_138;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_ISampleAppUIElement.h"

// SampleAppUILabel
struct  SampleAppUILabel_t7_18  : public ISampleAppUIElement_t7_12
{
	// SampleAppUIRect SampleAppUILabel::mRect
	SampleAppUIRect_t7_16 * ___mRect_0;
	// UnityEngine.GUIStyle SampleAppUILabel::mStyle
	GUIStyle_t5_138 * ___mStyle_1;
	// System.String SampleAppUILabel::mTitle
	String_t* ___mTitle_2;
	// System.Single SampleAppUILabel::mWidth
	float ___mWidth_3;
	// System.Single SampleAppUILabel::mHeight
	float ___mHeight_4;
};
