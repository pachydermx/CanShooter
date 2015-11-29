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

// Vuforia.ReconstructionFromTargetImpl
struct ReconstructionFromTargetImpl_t6_38;
// Vuforia.CylinderTarget
struct CylinderTarget_t6_53;
// Vuforia.ImageTarget
struct ImageTarget_t6_169;
// Vuforia.MultiTarget
struct MultiTarget_t6_178;
// Vuforia.Trackable
struct Trackable_t6_16;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionFromTargetImpl__ctor_m6_257 (ReconstructionFromTargetImpl_t6_38 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m6_258 (ReconstructionFromTargetImpl_t6_38 * __this, Object_t * ___cylinderTarget, Vector3_t5_55  ___occluderMin, Vector3_t5_55  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m6_259 (ReconstructionFromTargetImpl_t6_38 * __this, Object_t * ___cylinderTarget, Vector3_t5_55  ___occluderMin, Vector3_t5_55  ___occluderMax, Vector3_t5_55  ___offsetToOccluderOrigin, Quaternion_t5_56  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m6_260 (ReconstructionFromTargetImpl_t6_38 * __this, Object_t * ___imageTarget, Vector3_t5_55  ___occluderMin, Vector3_t5_55  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m6_261 (ReconstructionFromTargetImpl_t6_38 * __this, Object_t * ___imageTarget, Vector3_t5_55  ___occluderMin, Vector3_t5_55  ___occluderMax, Vector3_t5_55  ___offsetToOccluderOrigin, Quaternion_t5_56  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m6_262 (ReconstructionFromTargetImpl_t6_38 * __this, Object_t * ___multiTarget, Vector3_t5_55  ___occluderMin, Vector3_t5_55  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m6_263 (ReconstructionFromTargetImpl_t6_38 * __this, Object_t * ___multiTarget, Vector3_t5_55  ___occluderMin, Vector3_t5_55  ___occluderMax, Vector3_t5_55  ___offsetToOccluderOrigin, Quaternion_t5_56  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m6_264 (ReconstructionFromTargetImpl_t6_38 * __this, Vector3_t5_55 * ___occluderMin, Vector3_t5_55 * ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m6_265 (ReconstructionFromTargetImpl_t6_38 * __this, Vector3_t5_55 * ___occluderMin, Vector3_t5_55 * ___occluderMax, Vector3_t5_55 * ___offsetToOccluderOrigin, Quaternion_t5_56 * ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C" bool ReconstructionFromTargetImpl_Reset_m6_266 (ReconstructionFromTargetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C" bool ReconstructionFromTargetImpl_Start_m6_267 (ReconstructionFromTargetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m6_268 (ReconstructionFromTargetImpl_t6_38 * __this, IntPtr_t ___datasetPtr, Object_t * ___trackable, Vector3_t5_55  ___occluderMin, Vector3_t5_55  ___occluderMax, Vector3_t5_55  ___offsetToOccluderOrigin, Quaternion_t5_56  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C" bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m6_269 (ReconstructionFromTargetImpl_t6_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C" void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m6_270 (ReconstructionFromTargetImpl_t6_38 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
