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

// System.Threading.SynchronizationContext
struct SynchronizationContext_t1_710;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2_58;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.AsyncOperationManager::.cctor()
extern "C" void AsyncOperationManager__cctor_m2_443 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperationManager::get_SynchronizationContext()
extern "C" SynchronizationContext_t1_710 * AsyncOperationManager_get_SynchronizationContext_m2_444 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperationManager::set_SynchronizationContext(System.Threading.SynchronizationContext)
extern "C" void AsyncOperationManager_set_SynchronizationContext_m2_445 (Object_t * __this /* static, unused */, SynchronizationContext_t1_710 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AsyncOperation System.ComponentModel.AsyncOperationManager::CreateOperation(System.Object)
extern "C" AsyncOperation_t2_58 * AsyncOperationManager_CreateOperation_m2_446 (Object_t * __this /* static, unused */, Object_t * ___userSuppliedState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
