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

// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t6_32;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t6_55;
// Vuforia.DataSetImpl
struct DataSetImpl_t6_33;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void ObjectTargetImpl__ctor_m6_229 (ObjectTargetImpl_t6_32 * __this, String_t* ___name, int32_t ___id, DataSet_t6_55 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize()
extern "C" Vector3_t5_57  ObjectTargetImpl_GetSize_m6_230 (ObjectTargetImpl_t6_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void ObjectTargetImpl_SetSize_m6_231 (ObjectTargetImpl_t6_32 * __this, Vector3_t5_57  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StartExtendedTracking()
extern "C" bool ObjectTargetImpl_StartExtendedTracking_m6_232 (ObjectTargetImpl_t6_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StopExtendedTracking()
extern "C" bool ObjectTargetImpl_StopExtendedTracking_m6_233 (ObjectTargetImpl_t6_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::get_DataSet()
extern "C" DataSetImpl_t6_33 * ObjectTargetImpl_get_DataSet_m6_234 (ObjectTargetImpl_t6_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
