#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t5_72;
// UnityEngine.GameObject
struct GameObject_t5_87;
// UnityEngine.Camera
struct Camera_t5_79;
// Vuforia.VuforiaAbstractBehaviour
struct VuforiaAbstractBehaviour_t6_6;
// Vuforia.HideExcessAreaAbstractBehaviour[]
struct HideExcessAreaAbstractBehaviourU5BU5D_t6_30;
// System.Collections.Generic.List`1<Vuforia.HideExcessAreaAbstractBehaviour>
struct List_1_t1_1032;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Rect.h"

// Vuforia.HideExcessAreaAbstractBehaviour
struct  HideExcessAreaAbstractBehaviour_t6_29  : public MonoBehaviour_t5_84
{
	// UnityEngine.Shader Vuforia.HideExcessAreaAbstractBehaviour::matteShader
	Shader_t5_72 * ___matteShader_2;
	// System.Boolean Vuforia.HideExcessAreaAbstractBehaviour::disableMattes
	bool ___disableMattes_3;
	// UnityEngine.GameObject Vuforia.HideExcessAreaAbstractBehaviour::mBgPlane
	GameObject_t5_87 * ___mBgPlane_4;
	// UnityEngine.GameObject Vuforia.HideExcessAreaAbstractBehaviour::mLeftPlane
	GameObject_t5_87 * ___mLeftPlane_5;
	// UnityEngine.GameObject Vuforia.HideExcessAreaAbstractBehaviour::mRightPlane
	GameObject_t5_87 * ___mRightPlane_6;
	// UnityEngine.GameObject Vuforia.HideExcessAreaAbstractBehaviour::mTopPlane
	GameObject_t5_87 * ___mTopPlane_7;
	// UnityEngine.GameObject Vuforia.HideExcessAreaAbstractBehaviour::mBottomPlane
	GameObject_t5_87 * ___mBottomPlane_8;
	// UnityEngine.Camera Vuforia.HideExcessAreaAbstractBehaviour::mCamera
	Camera_t5_79 * ___mCamera_9;
	// System.Boolean Vuforia.HideExcessAreaAbstractBehaviour::mSceneIsScaledDown
	bool ___mSceneIsScaledDown_10;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mBgPlaneLocalPos
	Vector3_t5_55  ___mBgPlaneLocalPos_11;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mBgPlaneLocalScale
	Vector3_t5_55  ___mBgPlaneLocalScale_12;
	// System.Single Vuforia.HideExcessAreaAbstractBehaviour::mCameraNearPlane
	float ___mCameraNearPlane_13;
	// UnityEngine.Rect Vuforia.HideExcessAreaAbstractBehaviour::mCameraPixelRect
	Rect_t5_30  ___mCameraPixelRect_14;
	// System.Single Vuforia.HideExcessAreaAbstractBehaviour::mCameraFieldOFView
	float ___mCameraFieldOFView_15;
	// Vuforia.VuforiaAbstractBehaviour Vuforia.HideExcessAreaAbstractBehaviour::mVuforiaBehaviour
	VuforiaAbstractBehaviour_t6_6 * ___mVuforiaBehaviour_16;
	// Vuforia.HideExcessAreaAbstractBehaviour[] Vuforia.HideExcessAreaAbstractBehaviour::mHideBehaviours
	HideExcessAreaAbstractBehaviourU5BU5D_t6_30* ___mHideBehaviours_17;
	// System.Collections.Generic.List`1<Vuforia.HideExcessAreaAbstractBehaviour> Vuforia.HideExcessAreaAbstractBehaviour::mDeactivatedHideBehaviours
	List_1_t1_1032 * ___mDeactivatedHideBehaviours_18;
	// System.Boolean Vuforia.HideExcessAreaAbstractBehaviour::mPlanesActivated
	bool ___mPlanesActivated_19;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mLeftPlaneCachedScale
	Vector3_t5_55  ___mLeftPlaneCachedScale_20;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mRightPlaneCachedScale
	Vector3_t5_55  ___mRightPlaneCachedScale_21;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mBottomPlaneCachedScale
	Vector3_t5_55  ___mBottomPlaneCachedScale_22;
	// UnityEngine.Vector3 Vuforia.HideExcessAreaAbstractBehaviour::mTopPlaneCachedScale
	Vector3_t5_55  ___mTopPlaneCachedScale_23;
};
