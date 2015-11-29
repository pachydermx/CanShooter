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

// MultiTargetUIEventHandler
struct MultiTargetUIEventHandler_t7_28;
// System.Action
struct Action_t4_11;
// MultiTargetUIView
struct MultiTargetUIView_t7_29;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"

// System.Void MultiTargetUIEventHandler::.ctor()
extern "C" void MultiTargetUIEventHandler__ctor_m7_130 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::add_CloseView(System.Action)
extern "C" void MultiTargetUIEventHandler_add_CloseView_m7_131 (MultiTargetUIEventHandler_t7_28 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::remove_CloseView(System.Action)
extern "C" void MultiTargetUIEventHandler_remove_CloseView_m7_132 (MultiTargetUIEventHandler_t7_28 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::add_GoToAboutPage(System.Action)
extern "C" void MultiTargetUIEventHandler_add_GoToAboutPage_m7_133 (MultiTargetUIEventHandler_t7_28 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::remove_GoToAboutPage(System.Action)
extern "C" void MultiTargetUIEventHandler_remove_GoToAboutPage_m7_134 (MultiTargetUIEventHandler_t7_28 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MultiTargetUIView MultiTargetUIEventHandler::get_View()
extern "C" MultiTargetUIView_t7_29 * MultiTargetUIEventHandler_get_View_m7_135 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MultiTargetUIEventHandler::get_ExtendedTrackingIsEnabled()
extern "C" bool MultiTargetUIEventHandler_get_ExtendedTrackingIsEnabled_m7_136 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::UpdateView(System.Boolean)
extern "C" void MultiTargetUIEventHandler_UpdateView_m7_137 (MultiTargetUIEventHandler_t7_28 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::Bind()
extern "C" void MultiTargetUIEventHandler_Bind_m7_138 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::UnBind()
extern "C" void MultiTargetUIEventHandler_UnBind_m7_139 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::TriggerAutoFocus()
extern "C" void MultiTargetUIEventHandler_TriggerAutoFocus_m7_140 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MultiTargetUIEventHandler::TriggerAutoFocusAndEnableContinuousFocusIfSet()
extern "C" Object_t * MultiTargetUIEventHandler_TriggerAutoFocusAndEnableContinuousFocusIfSet_m7_141 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::OnPause(System.Boolean)
extern "C" void MultiTargetUIEventHandler_OnPause_m7_142 (MultiTargetUIEventHandler_t7_28 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::OnTappedOnAboutButton(System.Boolean)
extern "C" void MultiTargetUIEventHandler_OnTappedOnAboutButton_m7_143 (MultiTargetUIEventHandler_t7_28 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::EnableContinuousAutoFocus()
extern "C" void MultiTargetUIEventHandler_EnableContinuousAutoFocus_m7_144 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MultiTargetUIEventHandler::stopRunningObjectTracker()
extern "C" bool MultiTargetUIEventHandler_stopRunningObjectTracker_m7_145 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MultiTargetUIEventHandler::restartRunningObjectTracker()
extern "C" bool MultiTargetUIEventHandler_restartRunningObjectTracker_m7_146 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::ResetCameraFacingToBack()
extern "C" void MultiTargetUIEventHandler_ResetCameraFacingToBack_m7_147 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MultiTargetUIEventHandler::ChangeCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C" bool MultiTargetUIEventHandler_ChangeCameraDirection_m7_148 (MultiTargetUIEventHandler_t7_28 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::OnTappedToClose()
extern "C" void MultiTargetUIEventHandler_OnTappedToClose_m7_149 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::OnTappedOnCloseButton()
extern "C" void MultiTargetUIEventHandler_OnTappedOnCloseButton_m7_150 (MultiTargetUIEventHandler_t7_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MultiTargetUIEventHandler::ExtendedTracking(System.Boolean)
extern "C" bool MultiTargetUIEventHandler_ExtendedTracking_m7_151 (MultiTargetUIEventHandler_t7_28 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
