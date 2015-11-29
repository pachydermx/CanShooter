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

// System.Diagnostics.ProcessThreadCollectionBase
struct ProcessThreadCollectionBase_t2_204;
// System.Diagnostics.ProcessThread
struct ProcessThread_t2_203;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.ProcessThreadCollectionBase::.ctor()
extern "C" void ProcessThreadCollectionBase__ctor_m2_1676 (ProcessThreadCollectionBase_t2_204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessThreadCollectionBase System.Diagnostics.ProcessThreadCollectionBase::get_InnerList()
extern "C" ProcessThreadCollectionBase_t2_204 * ProcessThreadCollectionBase_get_InnerList_m2_1677 (ProcessThreadCollectionBase_t2_204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessThreadCollectionBase::Add(System.Diagnostics.ProcessThread)
extern "C" int32_t ProcessThreadCollectionBase_Add_m2_1678 (ProcessThreadCollectionBase_t2_204 * __this, ProcessThread_t2_203 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
