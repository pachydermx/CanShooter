﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t6_195;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t6_167;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t6_214;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t6_173;
// UnityEngine.GameObject
struct GameObject_t5_87;
// UnityEngine.Renderer
struct Renderer_t5_28;
// UnityEngine.Transform
struct Transform_t5_66;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.String Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButtonName()
extern "C" String_t* VirtualButtonAbstractBehaviour_get_VirtualButtonName_m6_1964 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_Pressed()
extern "C" bool VirtualButtonAbstractBehaviour_get_Pressed_m6_1965 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_HasUpdatedPose()
extern "C" bool VirtualButtonAbstractBehaviour_get_HasUpdatedPose_m6_1966 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_UnregisterOnDestroy()
extern "C" bool VirtualButtonAbstractBehaviour_get_UnregisterOnDestroy_m6_1967 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_UnregisterOnDestroy(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_set_UnregisterOnDestroy_m6_1968 (VirtualButtonAbstractBehaviour_t6_195 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButton()
extern "C" VirtualButton_t6_167 * VirtualButtonAbstractBehaviour_get_VirtualButton_m6_1969 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::.ctor()
extern "C" void VirtualButtonAbstractBehaviour__ctor_m6_1970 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" void VirtualButtonAbstractBehaviour_RegisterEventHandler_m6_1971 (VirtualButtonAbstractBehaviour_t6_195 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UnregisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" bool VirtualButtonAbstractBehaviour_UnregisterEventHandler_m6_1972 (VirtualButtonAbstractBehaviour_t6_195 * __this, Object_t * ___eventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::CalculateButtonArea(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" bool VirtualButtonAbstractBehaviour_CalculateButtonArea_m6_1973 (VirtualButtonAbstractBehaviour_t6_195 * __this, Vector2_t5_54 * ___topLeft, Vector2_t5_54 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateAreaRectangle()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateAreaRectangle_m6_1974 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateSensitivity()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateSensitivity_m6_1975 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateEnabled()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateEnabled_m6_1976 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdatePose()
extern "C" bool VirtualButtonAbstractBehaviour_UpdatePose_m6_1977 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnTrackerUpdated(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_OnTrackerUpdated_m6_1978 (VirtualButtonAbstractBehaviour_t6_195 * __this, bool ___pressed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.VirtualButtonAbstractBehaviour::GetImageTargetBehaviour()
extern "C" ImageTargetAbstractBehaviour_t6_173 * VirtualButtonAbstractBehaviour_GetImageTargetBehaviour_m6_1979 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetVirtualButtonName(System.String)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetVirtualButtonName_m6_1980 (VirtualButtonAbstractBehaviour_t6_195 * __this, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_SensitivitySetting()
extern "C" int32_t VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_SensitivitySetting_m6_1981 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetSensitivitySetting(Vuforia.VirtualButton/Sensitivity)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetSensitivitySetting_m6_1982 (VirtualButtonAbstractBehaviour_t6_195 * __this, int32_t ___sensibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousTransform()
extern "C" Matrix4x4_t5_57  VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousTransform_m6_1983 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousTransform(UnityEngine.Matrix4x4)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousTransform_m6_1984 (VirtualButtonAbstractBehaviour_t6_195 * __this, Matrix4x4_t5_57  ___transformMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousParent()
extern "C" GameObject_t5_87 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousParent_m6_1985 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousParent(UnityEngine.GameObject)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousParent_m6_1986 (VirtualButtonAbstractBehaviour_t6_195 * __this, GameObject_t5_87 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.InitializeVirtualButton(Vuforia.VirtualButton)
extern "C" void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_InitializeVirtualButton_m6_1987 (VirtualButtonAbstractBehaviour_t6_195 * __this, VirtualButton_t6_167 * ___virtualButton, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPosAndScaleFromButtonArea(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPosAndScaleFromButtonArea_m6_1988 (VirtualButtonAbstractBehaviour_t6_195 * __this, Vector2_t5_54  ___topLeft, Vector2_t5_54  ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.GetRenderer()
extern "C" Renderer_t5_28 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_GetRenderer_m6_1989 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::LateUpdate()
extern "C" void VirtualButtonAbstractBehaviour_LateUpdate_m6_1990 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDisable()
extern "C" void VirtualButtonAbstractBehaviour_OnDisable_m6_1991 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDestroy()
extern "C" void VirtualButtonAbstractBehaviour_OnDestroy_m6_1992 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Equals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" bool VirtualButtonAbstractBehaviour_Equals_m6_1993 (Object_t * __this /* static, unused */, Vector2_t5_54  ___vec1, Vector2_t5_54  ___vec2, float ___threshold, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_enabled()
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_enabled_m6_1994 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.set_enabled(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_set_enabled_m6_1995 (VirtualButtonAbstractBehaviour_t6_195 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_transform()
extern "C" Transform_t5_66 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_transform_m6_1996 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_gameObject()
extern "C" GameObject_t5_87 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_gameObject_m6_1997 (VirtualButtonAbstractBehaviour_t6_195 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
