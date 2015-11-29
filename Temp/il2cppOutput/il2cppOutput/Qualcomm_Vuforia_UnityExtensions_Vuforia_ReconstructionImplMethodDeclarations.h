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

// Vuforia.ReconstructionImpl
struct ReconstructionImpl_t6_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.ReconstructionImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionImpl__ctor_m6_197 (ReconstructionImpl_t6_28 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ReconstructionImpl::get_NativePtr()
extern "C" IntPtr_t ReconstructionImpl_get_NativePtr_m6_198 (ReconstructionImpl_t6_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::SetMaximumArea(UnityEngine.Rect)
extern "C" bool ReconstructionImpl_SetMaximumArea_m6_199 (ReconstructionImpl_t6_28 * __this, Rect_t5_30  ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::GetMaximumArea(UnityEngine.Rect&)
extern "C" bool ReconstructionImpl_GetMaximumArea_m6_200 (ReconstructionImpl_t6_28 * __this, Rect_t5_30 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Stop()
extern "C" bool ReconstructionImpl_Stop_m6_201 (ReconstructionImpl_t6_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Start()
extern "C" bool ReconstructionImpl_Start_m6_202 (ReconstructionImpl_t6_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsReconstructing()
extern "C" bool ReconstructionImpl_IsReconstructing_m6_203 (ReconstructionImpl_t6_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::SetNavMeshPadding(System.Single)
extern "C" void ReconstructionImpl_SetNavMeshPadding_m6_204 (ReconstructionImpl_t6_28 * __this, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionImpl::get_NavMeshPadding()
extern "C" float ReconstructionImpl_get_NavMeshPadding_m6_205 (ReconstructionImpl_t6_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StartNavMeshUpdates()
extern "C" void ReconstructionImpl_StartNavMeshUpdates_m6_206 (ReconstructionImpl_t6_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StopNavMeshUpdates()
extern "C" void ReconstructionImpl_StopNavMeshUpdates_m6_207 (ReconstructionImpl_t6_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsNavMeshUpdating()
extern "C" bool ReconstructionImpl_IsNavMeshUpdating_m6_208 (ReconstructionImpl_t6_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Reset()
extern "C" bool ReconstructionImpl_Reset_m6_209 (ReconstructionImpl_t6_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
