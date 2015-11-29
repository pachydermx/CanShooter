#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextAsset
struct TextAsset_t5_69;
// System.Action
struct Action_t4_11;
// UnityEngine.GUIStyle
struct GUIStyle_t5_138;
// System.String
struct String_t;
// UnityEngine.GUISkin
struct GUISkin_t5_131;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t1_1016;
// SampleAppUIBox
struct SampleAppUIBox_t7_6;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// AboutScreenView
struct  AboutScreenView_t7_5  : public Object_t
{
	// UnityEngine.TextAsset AboutScreenView::m_AboutText
	TextAsset_t5_69 * ___m_AboutText_2;
	// System.Action AboutScreenView::OnStartButtonTapped
	Action_t4_11 * ___OnStartButtonTapped_3;
	// UnityEngine.GUIStyle AboutScreenView::mAboutTitleBgStyle
	GUIStyle_t5_138 * ___mAboutTitleBgStyle_4;
	// UnityEngine.GUIStyle AboutScreenView::mOKButtonBgStyle
	GUIStyle_t5_138 * ___mOKButtonBgStyle_5;
	// System.String AboutScreenView::mTitle
	String_t* ___mTitle_6;
	// UnityEngine.GUISkin AboutScreenView::mUISkin
	GUISkin_t5_131 * ___mUISkin_7;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> AboutScreenView::mButtonGUIStyles
	Dictionary_2_t1_1016 * ___mButtonGUIStyles_8;
	// UnityEngine.Vector2 AboutScreenView::mScrollPosition
	Vector2_t5_54  ___mScrollPosition_9;
	// System.Single AboutScreenView::mStartButtonAreaHeight
	float ___mStartButtonAreaHeight_10;
	// System.Single AboutScreenView::mAboutTitleHeight
	float ___mAboutTitleHeight_11;
	// UnityEngine.Vector2 AboutScreenView::mLastTouchPosition
	Vector2_t5_54  ___mLastTouchPosition_12;
	// SampleAppUIBox AboutScreenView::mBox
	SampleAppUIBox_t7_6 * ___mBox_13;
};
