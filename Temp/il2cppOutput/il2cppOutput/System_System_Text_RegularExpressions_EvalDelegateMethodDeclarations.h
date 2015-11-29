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

// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t2_714;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t2_713;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Text.RegularExpressions.EvalDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void EvalDelegate__ctor_m2_6642 (EvalDelegate_t2_714 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::Invoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&)
extern "C" bool EvalDelegate_Invoke_m2_6643 (EvalDelegate_t2_714 * __this, RxInterpreter_t2_713 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_EvalDelegate_t2_714(Il2CppObject* delegate, RxInterpreter_t2_713 * ___interp, int32_t ___strpos, int32_t* ___strpos_result);
// System.IAsyncResult System.Text.RegularExpressions.EvalDelegate::BeginInvoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
extern "C" Object_t * EvalDelegate_BeginInvoke_m2_6644 (EvalDelegate_t2_714 * __this, RxInterpreter_t2_713 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.EvalDelegate::EndInvoke(System.Int32&,System.IAsyncResult)
extern "C" bool EvalDelegate_EndInvoke_m2_6645 (EvalDelegate_t2_714 * __this, int32_t* ___strpos_result, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
