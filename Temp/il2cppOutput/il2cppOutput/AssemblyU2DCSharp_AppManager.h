#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// ISampleAppUIEventHandler
struct ISampleAppUIEventHandler_t7_10;
// SplashScreenView
struct SplashScreenView_t7_11;
// AboutScreenView
struct AboutScreenView_t7_5;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_AppManager_ViewType.h"

// AppManager
struct  AppManager_t7_9  : public MonoBehaviour_t5_84
{
	// System.String AppManager::TitleForAboutPage
	String_t* ___TitleForAboutPage_2;
	// ISampleAppUIEventHandler AppManager::m_UIEventHandler
	ISampleAppUIEventHandler_t7_10 * ___m_UIEventHandler_3;
	// SplashScreenView AppManager::mSplashView
	SplashScreenView_t7_11 * ___mSplashView_5;
	// AboutScreenView AppManager::mAboutView
	AboutScreenView_t7_5 * ___mAboutView_6;
	// System.Single AppManager::mSecondsVisible
	float ___mSecondsVisible_7;
};
struct AppManager_t7_9_StaticFields{
	// AppManager/ViewType AppManager::mActiveViewType
	int32_t ___mActiveViewType_4;
};
