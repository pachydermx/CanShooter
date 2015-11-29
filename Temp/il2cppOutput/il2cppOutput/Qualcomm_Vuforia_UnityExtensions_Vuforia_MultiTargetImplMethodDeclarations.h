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

// Vuforia.MultiTargetImpl
struct MultiTargetImpl_t6_85;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t6_55;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.MultiTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void MultiTargetImpl__ctor_m6_531 (MultiTargetImpl_t6_85 * __this, String_t* ___name, int32_t ___id, DataSet_t6_55 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.MultiTargetImpl::GetSize()
extern "C" Vector3_t5_55  MultiTargetImpl_GetSize_m6_532 (MultiTargetImpl_t6_85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void MultiTargetImpl_SetSize_m6_533 (MultiTargetImpl_t6_85 * __this, Vector3_t5_55  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
