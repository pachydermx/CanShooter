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

// System.Diagnostics.CorrelationManager
struct CorrelationManager_t2_182;
// System.Collections.Stack
struct Stack_t1_143;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Diagnostics.CorrelationManager::.ctor()
extern "C" void CorrelationManager__ctor_m2_1389 (CorrelationManager_t2_182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Diagnostics.CorrelationManager::get_ActivityId()
extern "C" Guid_t1_774  CorrelationManager_get_ActivityId_m2_1390 (CorrelationManager_t2_182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.CorrelationManager::set_ActivityId(System.Guid)
extern "C" void CorrelationManager_set_ActivityId_m2_1391 (CorrelationManager_t2_182 * __this, Guid_t1_774  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Stack System.Diagnostics.CorrelationManager::get_LogicalOperationStack()
extern "C" Stack_t1_143 * CorrelationManager_get_LogicalOperationStack_m2_1392 (CorrelationManager_t2_182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.CorrelationManager::StartLogicalOperation()
extern "C" void CorrelationManager_StartLogicalOperation_m2_1393 (CorrelationManager_t2_182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.CorrelationManager::StartLogicalOperation(System.Object)
extern "C" void CorrelationManager_StartLogicalOperation_m2_1394 (CorrelationManager_t2_182 * __this, Object_t * ___operationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.CorrelationManager::StopLogicalOperation()
extern "C" void CorrelationManager_StopLogicalOperation_m2_1395 (CorrelationManager_t2_182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
