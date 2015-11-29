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

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t1_1067;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_InitEr.h"

// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m1_6352_gshared (Action_1_t1_1067 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m1_6352(__this, ___object, ___method, method) (( void (*) (Action_1_t1_1067 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m1_6352_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::Invoke(T)
extern "C" void Action_1_Invoke_m1_6317_gshared (Action_1_t1_1067 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1_6317(__this, ___obj, method) (( void (*) (Action_1_t1_1067 *, int32_t, const MethodInfo*))Action_1_Invoke_m1_6317_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Vuforia.VuforiaUnity/InitError>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m1_16590_gshared (Action_1_t1_1067 * __this, int32_t ___obj, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1_16590(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1_1067 *, int32_t, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m1_16590_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m1_16591_gshared (Action_1_t1_1067 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m1_16591(__this, ___result, method) (( void (*) (Action_1_t1_1067 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m1_16591_gshared)(__this, ___result, method)
