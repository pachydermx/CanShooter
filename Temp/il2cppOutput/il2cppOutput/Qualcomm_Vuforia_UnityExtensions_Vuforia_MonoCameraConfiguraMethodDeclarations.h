#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.MonoCameraConfiguration
struct MonoCameraConfiguration_t6_10;
// UnityEngine.Camera
struct Camera_t5_89;
// System.Action
struct Action_t4_11;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t6_196;
// UnityEngine.Transform
struct Transform_t5_72;
// UnityEngine.GameObject
struct GameObject_t5_100;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.MonoCameraConfiguration::.ctor(UnityEngine.Camera,Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C" void MonoCameraConfiguration__ctor_m6_39 (MonoCameraConfiguration_t6_10 * __this, Camera_t5_89 * ___leftCamera, int32_t ___cameraDeviceMode, int32_t ___mirrorVideoBackground, Action_t4_11 * ___onVideoBackgroundConfigChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::Init()
extern "C" void MonoCameraConfiguration_Init_m6_40 (MonoCameraConfiguration_t6_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ConfigureVideoBackground()
extern "C" void MonoCameraConfiguration_ConfigureVideoBackground_m6_41 (MonoCameraConfiguration_t6_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C" void MonoCameraConfiguration_UpdatePlayModeParameters_m6_42 (MonoCameraConfiguration_t6_10 * __this, WebCamAbstractBehaviour_t6_196 * ___webCamBehaviour, float ___cameraOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C" void MonoCameraConfiguration_UpdateProjection_m6_43 (MonoCameraConfiguration_t6_10 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.MonoCameraConfiguration::CheckForSurfaceChanges()
extern "C" int32_t MonoCameraConfiguration_CheckForSurfaceChanges_m6_44 (MonoCameraConfiguration_t6_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C" void MonoCameraConfiguration_UpdateStereoDepth_m6_45 (MonoCameraConfiguration_t6_10 * __this, Transform_t5_72 * ___trackingReference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::IsStereo()
extern "C" bool MonoCameraConfiguration_IsStereo_m6_46 (MonoCameraConfiguration_t6_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C" void MonoCameraConfiguration_ResetBackgroundPlane_m6_47 (MonoCameraConfiguration_t6_10 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.MonoCameraConfiguration::get_VideoBackgroundMirrored()
extern "C" int32_t MonoCameraConfiguration_get_VideoBackgroundMirrored_m6_48 (MonoCameraConfiguration_t6_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C" void MonoCameraConfiguration_ApplyCorrectedProjectionMatrix_m6_49 (MonoCameraConfiguration_t6_10 * __this, Matrix4x4_t5_59  ___projectionMatrix, bool ___primaryCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C" void MonoCameraConfiguration_SetSkewFrustum_m6_50 (MonoCameraConfiguration_t6_10 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.MonoCameraConfiguration::get_ViewportRect()
extern "C" Rect_t5_30  MonoCameraConfiguration_get_ViewportRect_m6_51 (MonoCameraConfiguration_t6_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C" void MonoCameraConfiguration_EnableObjectRenderer_m6_52 (MonoCameraConfiguration_t6_10 * __this, GameObject_t5_100 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C" void MonoCameraConfiguration_ApplyMatrix_m6_53 (MonoCameraConfiguration_t6_10 * __this, Camera_t5_89 * ___cam, Matrix4x4_t5_59  ___inputMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C" void MonoCameraConfiguration_ResolveVideoBackgroundBehaviours_m6_54 (MonoCameraConfiguration_t6_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MonoCameraConfiguration::CameraParameterChanged()
extern "C" bool MonoCameraConfiguration_CameraParameterChanged_m6_55 (MonoCameraConfiguration_t6_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MonoCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C" int32_t MonoCameraConfiguration_get_EyewearUserCalibrationProfileId_m6_56 (MonoCameraConfiguration_t6_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MonoCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C" void MonoCameraConfiguration_set_EyewearUserCalibrationProfileId_m6_57 (MonoCameraConfiguration_t6_10 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
