﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t1_1063;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainInitial.h"

// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m1_16555_gshared (Action_1_t1_1063 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m1_16555(__this, ___object, ___method, method) (( void (*) (Action_1_t1_1063 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m1_16555_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::Invoke(T)
extern "C" void Action_1_Invoke_m1_6267_gshared (Action_1_t1_1063 * __this, SmartTerrainInitializationInfo_t6_46  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m1_6267(__this, ___obj, method) (( void (*) (Action_1_t1_1063 *, SmartTerrainInitializationInfo_t6_46 , const MethodInfo*))Action_1_Invoke_m1_6267_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Vuforia.SmartTerrainInitializationInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m1_16556_gshared (Action_1_t1_1063 * __this, SmartTerrainInitializationInfo_t6_46  ___obj, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m1_16556(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1_1063 *, SmartTerrainInitializationInfo_t6_46 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m1_16556_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m1_16557_gshared (Action_1_t1_1063 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m1_16557(__this, ___result, method) (( void (*) (Action_1_t1_1063 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m1_16557_gshared)(__this, ___result, method)
