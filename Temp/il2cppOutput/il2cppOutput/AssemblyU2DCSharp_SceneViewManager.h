#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppManager
struct AppManager_t7_9;
// SampleInitErrorHandler
struct SampleInitErrorHandler_t7_23;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SceneViewManager
struct  SceneViewManager_t7_24  : public MonoBehaviour_t5_84
{
	// AppManager SceneViewManager::mAppManager
	AppManager_t7_9 * ___mAppManager_2;
	// SampleInitErrorHandler SceneViewManager::mPopUpMsg
	SampleInitErrorHandler_t7_23 * ___mPopUpMsg_3;
	// System.Boolean SceneViewManager::mErrorOccurred
	bool ___mErrorOccurred_4;
};
