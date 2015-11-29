#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t5_138;
// AppManager
struct AppManager_t7_9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_SampleInitErrorHandler_ErrorData.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr.h"

// SampleInitErrorHandler
struct  SampleInitErrorHandler_t7_23  : public MonoBehaviour_t5_84
{
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorTitleMessage
	GUIStyle_t5_138 * ___mErrorTitleMessage_2;
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorBodyMessage
	GUIStyle_t5_138 * ___mErrorBodyMessage_3;
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorOkButton
	GUIStyle_t5_138 * ___mErrorOkButton_4;
	// SampleInitErrorHandler/ErrorData SampleInitErrorHandler::mCurrentError
	ErrorData_t7_22  ___mCurrentError_5;
	// AppManager SampleInitErrorHandler::mManager
	AppManager_t7_9 * ___mManager_6;
	// Vuforia.VuforiaUnity/InitError SampleInitErrorHandler::mErrorcode
	int32_t ___mErrorcode_7;
};
