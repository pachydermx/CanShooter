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

// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t2_57;
// System.Exception
struct Exception_t1_33;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.AsyncCompletedEventArgs::.ctor(System.Exception,System.Boolean,System.Object)
extern "C" void AsyncCompletedEventArgs__ctor_m2_431 (AsyncCompletedEventArgs_t2_57 * __this, Exception_t1_33 * ___error, bool ___cancelled, Object_t * ___userState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AsyncCompletedEventArgs::RaiseExceptionIfNecessary()
extern "C" void AsyncCompletedEventArgs_RaiseExceptionIfNecessary_m2_432 (AsyncCompletedEventArgs_t2_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::get_Cancelled()
extern "C" bool AsyncCompletedEventArgs_get_Cancelled_m2_433 (AsyncCompletedEventArgs_t2_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.AsyncCompletedEventArgs::get_Error()
extern "C" Exception_t1_33 * AsyncCompletedEventArgs_get_Error_m2_434 (AsyncCompletedEventArgs_t2_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AsyncCompletedEventArgs::get_UserState()
extern "C" Object_t * AsyncCompletedEventArgs_get_UserState_m2_435 (AsyncCompletedEventArgs_t2_57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
