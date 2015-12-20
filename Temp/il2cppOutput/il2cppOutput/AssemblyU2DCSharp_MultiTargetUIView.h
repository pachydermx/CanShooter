#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SampleAppUILabel
struct SampleAppUILabel_t8_19;
// SampleAppUICheckButton
struct SampleAppUICheckButton_t8_16;
// SampleAppUIButton
struct SampleAppUIButton_t8_15;
// SampleAppsUILayout
struct SampleAppsUILayout_t8_20;
// System.Action
struct Action_t4_11;

#include "mscorlib_System_Object.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"

// MultiTargetUIView
struct  MultiTargetUIView_t8_32  : public Object_t
{
	// SampleAppUILabel MultiTargetUIView::mMultiTargetLabel
	SampleAppUILabel_t8_19 * ___mMultiTargetLabel_0;
	// SampleAppUICheckButton MultiTargetUIView::mAboutLabel
	SampleAppUICheckButton_t8_16 * ___mAboutLabel_1;
	// SampleAppUIButton MultiTargetUIView::mCloseButton
	SampleAppUIButton_t8_15 * ___mCloseButton_2;
	// Vuforia.CameraDevice/FocusMode MultiTargetUIView::mFocusMode
	int32_t ___mFocusMode_3;
	// SampleAppsUILayout MultiTargetUIView::mLayout
	SampleAppsUILayout_t8_20 * ___mLayout_4;
	// System.Action MultiTargetUIView::TappedToClose
	Action_t4_11 * ___TappedToClose_5;
};
