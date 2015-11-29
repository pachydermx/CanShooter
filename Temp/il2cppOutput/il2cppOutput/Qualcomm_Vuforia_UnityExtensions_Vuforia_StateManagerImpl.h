#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t1_1058;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1_1059;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t1_1060;
// Vuforia.WordManagerImpl
struct WordManagerImpl_t6_139;
// UnityEngine.GameObject
struct GameObject_t5_87;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_StateManager.h"

// Vuforia.StateManagerImpl
struct  StateManagerImpl_t6_154  : public StateManager_t6_153
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mTrackableBehaviours
	Dictionary_2_t1_1058 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManagerImpl::mAutomaticallyCreatedBehaviours
	List_1_t1_1059 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mBehavioursMarkedForDeletion
	List_1_t1_1060 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mActiveTrackableBehaviours
	List_1_t1_1060 * ___mActiveTrackableBehaviours_3;
	// Vuforia.WordManagerImpl Vuforia.StateManagerImpl::mWordManager
	WordManagerImpl_t6_139 * ___mWordManager_4;
	// UnityEngine.GameObject Vuforia.StateManagerImpl::mCameraPositioningHelper
	GameObject_t5_87 * ___mCameraPositioningHelper_5;
};
