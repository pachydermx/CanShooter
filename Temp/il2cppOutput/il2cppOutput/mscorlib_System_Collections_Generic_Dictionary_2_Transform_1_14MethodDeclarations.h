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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Transform_1_t1_1553;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m1_10614_gshared (Transform_1_t1_1553 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1_10614(__this, ___object, ___method, method) (( void (*) (Transform_1_t1_1553 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1_10614_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1_1544  Transform_1_Invoke_m1_10615_gshared (Transform_1_t1_1553 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1_10615(__this, ___key, ___value, method) (( KeyValuePair_2_t1_1544  (*) (Transform_1_t1_1553 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m1_10615_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m1_10616_gshared (Transform_1_t1_1553 * __this, Object_t * ___key, bool ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1_10616(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1_1553 *, Object_t *, bool, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1_10616_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1_1544  Transform_1_EndInvoke_m1_10617_gshared (Transform_1_t1_1553 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1_10617(__this, ___result, method) (( KeyValuePair_2_t1_1544  (*) (Transform_1_t1_1553 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1_10617_gshared)(__this, ___result, method)
