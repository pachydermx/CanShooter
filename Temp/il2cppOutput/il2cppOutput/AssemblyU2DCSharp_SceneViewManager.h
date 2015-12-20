#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppManager
struct AppManager_t8_10;
// SampleInitErrorHandler
struct SampleInitErrorHandler_t8_24;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SceneViewManager
struct  SceneViewManager_t8_25  : public MonoBehaviour_t5_94
{
	// AppManager SceneViewManager::mAppManager
	AppManager_t8_10 * ___mAppManager_2;
	// SampleInitErrorHandler SceneViewManager::mPopUpMsg
	SampleInitErrorHandler_t8_24 * ___mPopUpMsg_3;
	// System.Boolean SceneViewManager::mErrorOccurred
	bool ___mErrorOccurred_4;
};
