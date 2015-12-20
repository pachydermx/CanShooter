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
struct MultiTargetUIEventHandler_t8_30;
// System.Action
struct Action_t4_11;
// MultiTargetUIView
struct MultiTargetUIView_t8_31;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"

// System.Void MultiTargetUIEventHandler::.ctor()
extern "C" void MultiTargetUIEventHandler__ctor_m8_145 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::add_CloseView(System.Action)
extern "C" void MultiTargetUIEventHandler_add_CloseView_m8_146 (MultiTargetUIEventHandler_t8_30 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::remove_CloseView(System.Action)
extern "C" void MultiTargetUIEventHandler_remove_CloseView_m8_147 (MultiTargetUIEventHandler_t8_30 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::add_GoToAboutPage(System.Action)
extern "C" void MultiTargetUIEventHandler_add_GoToAboutPage_m8_148 (MultiTargetUIEventHandler_t8_30 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::remove_GoToAboutPage(System.Action)
extern "C" void MultiTargetUIEventHandler_remove_GoToAboutPage_m8_149 (MultiTargetUIEventHandler_t8_30 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MultiTargetUIView MultiTargetUIEventHandler::get_View()
extern "C" MultiTargetUIView_t8_31 * MultiTargetUIEventHandler_get_View_m8_150 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MultiTargetUIEventHandler::get_ExtendedTrackingIsEnabled()
extern "C" bool MultiTargetUIEventHandler_get_ExtendedTrackingIsEnabled_m8_151 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::UpdateView(System.Boolean)
extern "C" void MultiTargetUIEventHandler_UpdateView_m8_152 (MultiTargetUIEventHandler_t8_30 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::Bind()
extern "C" void MultiTargetUIEventHandler_Bind_m8_153 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::UnBind()
extern "C" void MultiTargetUIEventHandler_UnBind_m8_154 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::TriggerAutoFocus()
extern "C" void MultiTargetUIEventHandler_TriggerAutoFocus_m8_155 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MultiTargetUIEventHandler::TriggerAutoFocusAndEnableContinuousFocusIfSet()
extern "C" Object_t * MultiTargetUIEventHandler_TriggerAutoFocusAndEnableContinuousFocusIfSet_m8_156 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::OnPause(System.Boolean)
extern "C" void MultiTargetUIEventHandler_OnPause_m8_157 (MultiTargetUIEventHandler_t8_30 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::OnTappedOnAboutButton(System.Boolean)
extern "C" void MultiTargetUIEventHandler_OnTappedOnAboutButton_m8_158 (MultiTargetUIEventHandler_t8_30 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::EnableContinuousAutoFocus()
extern "C" void MultiTargetUIEventHandler_EnableContinuousAutoFocus_m8_159 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MultiTargetUIEventHandler::stopRunningObjectTracker()
extern "C" bool MultiTargetUIEventHandler_stopRunningObjectTracker_m8_160 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MultiTargetUIEventHandler::restartRunningObjectTracker()
extern "C" bool MultiTargetUIEventHandler_restartRunningObjectTracker_m8_161 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::ResetCameraFacingToBack()
extern "C" void MultiTargetUIEventHandler_ResetCameraFacingToBack_m8_162 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MultiTargetUIEventHandler::ChangeCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C" bool MultiTargetUIEventHandler_ChangeCameraDirection_m8_163 (MultiTargetUIEventHandler_t8_30 * __this, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::OnTappedToClose()
extern "C" void MultiTargetUIEventHandler_OnTappedToClose_m8_164 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIEventHandler::OnTappedOnCloseButton()
extern "C" void MultiTargetUIEventHandler_OnTappedOnCloseButton_m8_165 (MultiTargetUIEventHandler_t8_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MultiTargetUIEventHandler::ExtendedTracking(System.Boolean)
extern "C" bool MultiTargetUIEventHandler_ExtendedTracking_m8_166 (MultiTargetUIEventHandler_t8_30 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
