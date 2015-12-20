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

// System.Func`2<System.Object,System.Object>
struct Func_2_t4_29;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m4_142_gshared (Func_2_t4_29 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m4_142(__this, ___object, ___method, method) (( void (*) (Func_2_t4_29 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m4_142_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m4_143_gshared (Func_2_t4_29 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m4_143(__this, ___arg1, method) (( Object_t * (*) (Func_2_t4_29 *, Object_t *, const MethodInfo*))Func_2_Invoke_m4_143_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m4_144_gshared (Func_2_t4_29 * __this, Object_t * ___arg1, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m4_144(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t4_29 *, Object_t *, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m4_144_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m4_145_gshared (Func_2_t4_29 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m4_145(__this, ___result, method) (( Object_t * (*) (Func_2_t4_29 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m4_145_gshared)(__this, ___result, method)
