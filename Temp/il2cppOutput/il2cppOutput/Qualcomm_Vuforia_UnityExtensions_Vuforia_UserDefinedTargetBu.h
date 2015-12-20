﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t6_27;
// System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>
struct List_1_t1_1080;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetBuilder_.h"

// Vuforia.UserDefinedTargetBuildingAbstractBehaviour
struct  UserDefinedTargetBuildingAbstractBehaviour_t6_192  : public MonoBehaviour_t5_95
{
	// Vuforia.ObjectTracker Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mObjectTracker
	ObjectTracker_t6_27 * ___mObjectTracker_2;
	// Vuforia.ImageTargetBuilder/FrameQuality Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mLastFrameQuality
	int32_t ___mLastFrameQuality_3;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mCurrentlyScanning
	bool ___mCurrentlyScanning_4;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mWasScanningBeforeDisable
	bool ___mWasScanningBeforeDisable_5;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mCurrentlyBuilding
	bool ___mCurrentlyBuilding_6;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mWasBuildingBeforeDisable
	bool ___mWasBuildingBeforeDisable_7;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_8;
	// System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler> Vuforia.UserDefinedTargetBuildingAbstractBehaviour::mHandlers
	List_1_t1_1080 * ___mHandlers_9;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StopTrackerWhileScanning
	bool ___StopTrackerWhileScanning_10;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StartScanningAutomatically
	bool ___StartScanningAutomatically_11;
	// System.Boolean Vuforia.UserDefinedTargetBuildingAbstractBehaviour::StopScanningWhenFinshedBuilding
	bool ___StopScanningWhenFinshedBuilding_12;
};
