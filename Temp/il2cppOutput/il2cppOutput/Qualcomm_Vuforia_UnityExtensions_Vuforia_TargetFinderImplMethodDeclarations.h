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

// Vuforia.TargetFinderImpl
struct TargetFinderImpl_t6_161;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t1_1098;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t6_173;
// UnityEngine.GameObject
struct GameObject_t5_101;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t1_1099;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_InitSt.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Update.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Filter.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void Vuforia.TargetFinderImpl::.ctor()
extern "C" void TargetFinderImpl__ctor_m6_1666 (TargetFinderImpl_t6_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::Finalize()
extern "C" void TargetFinderImpl_Finalize_m6_1667 (TargetFinderImpl_t6_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartInit(System.String,System.String)
extern "C" bool TargetFinderImpl_StartInit_m6_1668 (TargetFinderImpl_t6_161 * __this, String_t* ___userAuth, String_t* ___secretAuth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/InitState Vuforia.TargetFinderImpl::GetInitState()
extern "C" int32_t TargetFinderImpl_GetInitState_m6_1669 (TargetFinderImpl_t6_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Deinit()
extern "C" bool TargetFinderImpl_Deinit_m6_1670 (TargetFinderImpl_t6_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartRecognition()
extern "C" bool TargetFinderImpl_StartRecognition_m6_1671 (TargetFinderImpl_t6_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Stop()
extern "C" bool TargetFinderImpl_Stop_m6_1672 (TargetFinderImpl_t6_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIScanlineColor(UnityEngine.Color)
extern "C" void TargetFinderImpl_SetUIScanlineColor_m6_1673 (TargetFinderImpl_t6_161 * __this, Color_t5_48  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIPointColor(UnityEngine.Color)
extern "C" void TargetFinderImpl_SetUIPointColor_m6_1674 (TargetFinderImpl_t6_161 * __this, Color_t5_48  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::IsRequesting()
extern "C" bool TargetFinderImpl_IsRequesting_m6_1675 (TargetFinderImpl_t6_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update()
extern "C" int32_t TargetFinderImpl_Update_m6_1676 (TargetFinderImpl_t6_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update(Vuforia.TargetFinder/FilterMode)
extern "C" int32_t TargetFinderImpl_Update_m6_1677 (TargetFinderImpl_t6_161 * __this, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::GetResults()
extern "C" Object_t* TargetFinderImpl_GetResults_m6_1678 (TargetFinderImpl_t6_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,System.String)
extern "C" ImageTargetAbstractBehaviour_t6_173 * TargetFinderImpl_EnableTracking_m6_1679 (TargetFinderImpl_t6_161 * __this, TargetSearchResult_t6_158  ___result, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t6_173 * TargetFinderImpl_EnableTracking_m6_1680 (TargetFinderImpl_t6_161 * __this, TargetSearchResult_t6_158  ___result, GameObject_t5_101 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::ClearTrackables(System.Boolean)
extern "C" void TargetFinderImpl_ClearTrackables_m6_1681 (TargetFinderImpl_t6_161 * __this, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget> Vuforia.TargetFinderImpl::GetImageTargets()
extern "C" Object_t* TargetFinderImpl_GetImageTargets_m6_1682 (TargetFinderImpl_t6_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
