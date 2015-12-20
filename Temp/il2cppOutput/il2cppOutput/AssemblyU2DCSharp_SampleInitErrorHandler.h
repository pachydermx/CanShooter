#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t5_180;
// AppManager
struct AppManager_t8_10;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_SampleInitErrorHandler_ErrorData.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr.h"

// SampleInitErrorHandler
struct  SampleInitErrorHandler_t8_24  : public MonoBehaviour_t5_94
{
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorTitleMessage
	GUIStyle_t5_180 * ___mErrorTitleMessage_2;
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorBodyMessage
	GUIStyle_t5_180 * ___mErrorBodyMessage_3;
	// UnityEngine.GUIStyle SampleInitErrorHandler::mErrorOkButton
	GUIStyle_t5_180 * ___mErrorOkButton_4;
	// SampleInitErrorHandler/ErrorData SampleInitErrorHandler::mCurrentError
	ErrorData_t8_23  ___mCurrentError_5;
	// AppManager SampleInitErrorHandler::mManager
	AppManager_t8_10 * ___mManager_6;
	// Vuforia.VuforiaUnity/InitError SampleInitErrorHandler::mErrorcode
	int32_t ___mErrorcode_7;
};
