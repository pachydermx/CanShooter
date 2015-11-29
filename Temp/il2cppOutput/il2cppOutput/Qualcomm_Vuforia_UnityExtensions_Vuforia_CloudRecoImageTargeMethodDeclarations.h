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

// Vuforia.CloudRecoImageTargetImpl
struct CloudRecoImageTargetImpl_t6_64;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t6_167;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t1_1071;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"

// System.Void Vuforia.CloudRecoImageTargetImpl::.ctor(System.String,System.Int32,UnityEngine.Vector3)
extern "C" void CloudRecoImageTargetImpl__ctor_m6_392 (CloudRecoImageTargetImpl_t6_64 * __this, String_t* ___name, int32_t ___id, Vector3_t5_55  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.CloudRecoImageTargetImpl::get_ImageTargetType()
extern "C" int32_t CloudRecoImageTargetImpl_get_ImageTargetType_m6_393 (CloudRecoImageTargetImpl_t6_64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CloudRecoImageTargetImpl::GetSize()
extern "C" Vector3_t5_55  CloudRecoImageTargetImpl_GetSize_m6_394 (CloudRecoImageTargetImpl_t6_64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CloudRecoImageTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void CloudRecoImageTargetImpl_SetSize_m6_395 (CloudRecoImageTargetImpl_t6_64 * __this, Vector3_t5_55  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C" VirtualButton_t6_167 * CloudRecoImageTargetImpl_CreateVirtualButton_m6_396 (CloudRecoImageTargetImpl_t6_64 * __this, String_t* ___name, RectangleData_t6_57  ___area, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C" VirtualButton_t6_167 * CloudRecoImageTargetImpl_GetVirtualButtonByName_m6_397 (CloudRecoImageTargetImpl_t6_64 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.CloudRecoImageTargetImpl::GetVirtualButtons()
extern "C" Object_t* CloudRecoImageTargetImpl_GetVirtualButtons_m6_398 (CloudRecoImageTargetImpl_t6_64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C" bool CloudRecoImageTargetImpl_DestroyVirtualButton_m6_399 (CloudRecoImageTargetImpl_t6_64 * __this, VirtualButton_t6_167 * ___vb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StartExtendedTracking()
extern "C" bool CloudRecoImageTargetImpl_StartExtendedTracking_m6_400 (CloudRecoImageTargetImpl_t6_64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StopExtendedTracking()
extern "C" bool CloudRecoImageTargetImpl_StopExtendedTracking_m6_401 (CloudRecoImageTargetImpl_t6_64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
