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
// System.Action`1<System.Boolean>
struct Action_1_t1_1004;

#include "AssemblyU2DCSharp_ISampleAppUIElement.h"

// SampleAppUICheckButton
struct  SampleAppUICheckButton_t7_15  : public ISampleAppUIElement_t7_12
{
	// SampleAppUIRect SampleAppUICheckButton::mRect
	SampleAppUIRect_t7_16 * ___mRect_0;
	// System.Boolean SampleAppUICheckButton::mTappedOn
	bool ___mTappedOn_1;
	// System.Boolean SampleAppUICheckButton::mSelected
	bool ___mSelected_2;
	// UnityEngine.GUIStyle SampleAppUICheckButton::mStyle
	GUIStyle_t5_138 * ___mStyle_3;
	// System.Single SampleAppUICheckButton::mHeight
	float ___mHeight_4;
	// System.Single SampleAppUICheckButton::mWidth
	float ___mWidth_5;
	// System.String SampleAppUICheckButton::mTitle
	String_t* ___mTitle_6;
	// System.Action`1<System.Boolean> SampleAppUICheckButton::TappedOn
	Action_1_t1_1004 * ___TappedOn_7;
};
