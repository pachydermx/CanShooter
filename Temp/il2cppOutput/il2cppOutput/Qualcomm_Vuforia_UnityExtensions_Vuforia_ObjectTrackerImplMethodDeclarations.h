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

// Vuforia.ObjectTrackerImpl
struct ObjectTrackerImpl_t6_80;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t6_69;
// Vuforia.TargetFinder
struct TargetFinder_t6_81;
// Vuforia.DataSet
struct DataSet_t6_55;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t1_1073;

#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::get_ImageTargetBuilder()
extern "C" ImageTargetBuilder_t6_69 * ObjectTrackerImpl_get_ImageTargetBuilder_m6_499 (ObjectTrackerImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::get_TargetFinder()
extern "C" TargetFinder_t6_81 * ObjectTrackerImpl_get_TargetFinder_m6_500 (ObjectTrackerImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::.ctor()
extern "C" void ObjectTrackerImpl__ctor_m6_501 (ObjectTrackerImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::Start()
extern "C" bool ObjectTrackerImpl_Start_m6_502 (ObjectTrackerImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::Stop()
extern "C" void ObjectTrackerImpl_Stop_m6_503 (ObjectTrackerImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSet Vuforia.ObjectTrackerImpl::CreateDataSet()
extern "C" DataSet_t6_55 * ObjectTrackerImpl_CreateDataSet_m6_504 (ObjectTrackerImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DestroyDataSet(Vuforia.DataSet,System.Boolean)
extern "C" bool ObjectTrackerImpl_DestroyDataSet_m6_505 (ObjectTrackerImpl_t6_80 * __this, DataSet_t6_55 * ___dataSet, bool ___destroyTrackables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ActivateDataSet(Vuforia.DataSet)
extern "C" bool ObjectTrackerImpl_ActivateDataSet_m6_506 (ObjectTrackerImpl_t6_80 * __this, DataSet_t6_55 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DeactivateDataSet(Vuforia.DataSet)
extern "C" bool ObjectTrackerImpl_DeactivateDataSet_m6_507 (ObjectTrackerImpl_t6_80 * __this, DataSet_t6_55 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetActiveDataSets()
extern "C" Object_t* ObjectTrackerImpl_GetActiveDataSets_m6_508 (ObjectTrackerImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetDataSets()
extern "C" Object_t* ObjectTrackerImpl_GetDataSets_m6_509 (ObjectTrackerImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::DestroyAllDataSets(System.Boolean)
extern "C" void ObjectTrackerImpl_DestroyAllDataSets_m6_510 (ObjectTrackerImpl_t6_80 * __this, bool ___destroyTrackables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::PersistExtendedTracking(System.Boolean)
extern "C" bool ObjectTrackerImpl_PersistExtendedTracking_m6_511 (ObjectTrackerImpl_t6_80 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ResetExtendedTracking()
extern "C" bool ObjectTrackerImpl_ResetExtendedTracking_m6_512 (ObjectTrackerImpl_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
