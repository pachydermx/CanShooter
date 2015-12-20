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

// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t2_196;
// System.Diagnostics.ProcessModule[]
struct ProcessModuleU5BU5D_t2_817;
// System.Diagnostics.ProcessModule
struct ProcessModule_t2_200;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.ProcessModuleCollection::.ctor()
extern "C" void ProcessModuleCollection__ctor_m2_1609 (ProcessModuleCollection_t2_196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessModuleCollection::.ctor(System.Diagnostics.ProcessModule[])
extern "C" void ProcessModuleCollection__ctor_m2_1610 (ProcessModuleCollection_t2_196 * __this, ProcessModuleU5BU5D_t2_817* ___processModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessModule System.Diagnostics.ProcessModuleCollection::get_Item(System.Int32)
extern "C" ProcessModule_t2_200 * ProcessModuleCollection_get_Item_m2_1611 (ProcessModuleCollection_t2_196 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessModuleCollection::Contains(System.Diagnostics.ProcessModule)
extern "C" bool ProcessModuleCollection_Contains_m2_1612 (ProcessModuleCollection_t2_196 * __this, ProcessModule_t2_200 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessModuleCollection::CopyTo(System.Diagnostics.ProcessModule[],System.Int32)
extern "C" void ProcessModuleCollection_CopyTo_m2_1613 (ProcessModuleCollection_t2_196 * __this, ProcessModuleU5BU5D_t2_817* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessModuleCollection::IndexOf(System.Diagnostics.ProcessModule)
extern "C" int32_t ProcessModuleCollection_IndexOf_m2_1614 (ProcessModuleCollection_t2_196 * __this, ProcessModule_t2_200 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
