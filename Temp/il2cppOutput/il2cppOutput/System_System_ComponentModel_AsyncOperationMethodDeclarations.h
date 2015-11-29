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

// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2_58;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t1_710;
// System.Object
struct Object_t;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1_825;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.AsyncOperation::.ctor(System.Threading.SynchronizationContext,System.Object)
extern "C" void AsyncOperation__ctor_m2_436 (AsyncOperation_t2_58 * __this, SynchronizationContext_t1_710 * ___ctx, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2_437 (AsyncOperation_t2_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::get_SynchronizationContext()
extern "C" SynchronizationContext_t1_710 * AsyncOperation_get_SynchronizationContext_m2_438 (AsyncOperation_t2_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AsyncOperation::get_UserSuppliedState()
extern "C" Object_t * AsyncOperation_get_UserSuppliedState_m2_439 (AsyncOperation_t2_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::OperationCompleted()
extern "C" void AsyncOperation_OperationCompleted_m2_440 (AsyncOperation_t2_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C" void AsyncOperation_Post_m2_441 (AsyncOperation_t2_58 * __this, SendOrPostCallback_t1_825 * ___d, Object_t * ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncOperation::PostOperationCompleted(System.Threading.SendOrPostCallback,System.Object)
extern "C" void AsyncOperation_PostOperationCompleted_m2_442 (AsyncOperation_t2_58 * __this, SendOrPostCallback_t1_825 * ___d, Object_t * ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
