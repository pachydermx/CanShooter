#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Boolean[]
struct BooleanU5BU5D_t1_272;
// SampleAppUIRect[]
struct SampleAppUIRectU5BU5D_t7_21;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t5_147;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Action`1<System.Int32>
struct Action_1_t1_1175;

#include "AssemblyU2DCSharp_ISampleAppUIElement.h"

// SampleAppUIRadioButton
struct  SampleAppUIRadioButton_t7_20  : public ISampleAppUIElement_t7_12
{
	// System.Single SampleAppUIRadioButton::mIndex
	float ___mIndex_0;
	// System.Boolean[] SampleAppUIRadioButton::mOptionsTapped
	BooleanU5BU5D_t1_272* ___mOptionsTapped_1;
	// System.Boolean[] SampleAppUIRadioButton::mOptionsSelected
	BooleanU5BU5D_t1_272* ___mOptionsSelected_2;
	// SampleAppUIRect[] SampleAppUIRadioButton::mRect
	SampleAppUIRectU5BU5D_t7_21* ___mRect_3;
	// System.Boolean SampleAppUIRadioButton::mTappedOn
	bool ___mTappedOn_4;
	// UnityEngine.GUIStyle[] SampleAppUIRadioButton::mStyle
	GUIStyleU5BU5D_t5_147* ___mStyle_5;
	// System.Single SampleAppUIRadioButton::mWidth
	float ___mWidth_6;
	// System.Single SampleAppUIRadioButton::mHeight
	float ___mHeight_7;
	// System.String[] SampleAppUIRadioButton::titleList
	StringU5BU5D_t1_206* ___titleList_8;
	// System.Action`1<System.Int32> SampleAppUIRadioButton::TappedOnOption
	Action_1_t1_1175 * ___TappedOnOption_9;
};
