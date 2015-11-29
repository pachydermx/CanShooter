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

// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t2_205;
// System.Diagnostics.ProcessThread[]
struct ProcessThreadU5BU5D_t2_819;
// System.Diagnostics.ProcessThread
struct ProcessThread_t2_203;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.ProcessThreadCollection::.ctor()
extern "C" void ProcessThreadCollection__ctor_m2_1679 (ProcessThreadCollection_t2_205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThreadCollection::.ctor(System.Diagnostics.ProcessThread[])
extern "C" void ProcessThreadCollection__ctor_m2_1680 (ProcessThreadCollection_t2_205 * __this, ProcessThreadU5BU5D_t2_819* ___processThreads, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessThreadCollection System.Diagnostics.ProcessThreadCollection::GetEmpty()
extern "C" ProcessThreadCollection_t2_205 * ProcessThreadCollection_GetEmpty_m2_1681 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessThread System.Diagnostics.ProcessThreadCollection::get_Item(System.Int32)
extern "C" ProcessThread_t2_203 * ProcessThreadCollection_get_Item_m2_1682 (ProcessThreadCollection_t2_205 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessThreadCollection::Add(System.Diagnostics.ProcessThread)
extern "C" int32_t ProcessThreadCollection_Add_m2_1683 (ProcessThreadCollection_t2_205 * __this, ProcessThread_t2_203 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessThreadCollection::Contains(System.Diagnostics.ProcessThread)
extern "C" bool ProcessThreadCollection_Contains_m2_1684 (ProcessThreadCollection_t2_205 * __this, ProcessThread_t2_203 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThreadCollection::CopyTo(System.Diagnostics.ProcessThread[],System.Int32)
extern "C" void ProcessThreadCollection_CopyTo_m2_1685 (ProcessThreadCollection_t2_205 * __this, ProcessThreadU5BU5D_t2_819* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessThreadCollection::IndexOf(System.Diagnostics.ProcessThread)
extern "C" int32_t ProcessThreadCollection_IndexOf_m2_1686 (ProcessThreadCollection_t2_205 * __this, ProcessThread_t2_203 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThreadCollection::Insert(System.Int32,System.Diagnostics.ProcessThread)
extern "C" void ProcessThreadCollection_Insert_m2_1687 (ProcessThreadCollection_t2_205 * __this, int32_t ___index, ProcessThread_t2_203 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThreadCollection::Remove(System.Diagnostics.ProcessThread)
extern "C" void ProcessThreadCollection_Remove_m2_1688 (ProcessThreadCollection_t2_205 * __this, ProcessThread_t2_203 * ___thread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
