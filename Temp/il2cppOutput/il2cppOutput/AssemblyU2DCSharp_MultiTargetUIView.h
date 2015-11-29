#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SampleAppUILabel
struct SampleAppUILabel_t7_18;
// SampleAppUICheckButton
struct SampleAppUICheckButton_t7_15;
// SampleAppUIButton
struct SampleAppUIButton_t7_14;
// SampleAppsUILayout
struct SampleAppsUILayout_t7_19;
// System.Action
struct Action_t4_11;

#include "mscorlib_System_Object.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"

// MultiTargetUIView
struct  MultiTargetUIView_t7_29  : public Object_t
{
	// SampleAppUILabel MultiTargetUIView::mMultiTargetLabel
	SampleAppUILabel_t7_18 * ___mMultiTargetLabel_0;
	// SampleAppUICheckButton MultiTargetUIView::mAboutLabel
	SampleAppUICheckButton_t7_15 * ___mAboutLabel_1;
	// SampleAppUIButton MultiTargetUIView::mCloseButton
	SampleAppUIButton_t7_14 * ___mCloseButton_2;
	// Vuforia.CameraDevice/FocusMode MultiTargetUIView::mFocusMode
	int32_t ___mFocusMode_3;
	// SampleAppsUILayout MultiTargetUIView::mLayout
	SampleAppsUILayout_t7_19 * ___mLayout_4;
	// System.Action MultiTargetUIView::TappedToClose
	Action_t4_11 * ___TappedToClose_5;
};
