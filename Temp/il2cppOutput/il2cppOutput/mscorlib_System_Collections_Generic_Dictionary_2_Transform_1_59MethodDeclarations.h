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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>
struct Transform_1_t1_1761;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m1_15756_gshared (Transform_1_t1_1761 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1_15756(__this, ___object, ___method, method) (( void (*) (Transform_1_t1_1761 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1_15756_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1_1751  Transform_1_Invoke_m1_15757_gshared (Transform_1_t1_1761 * __this, int32_t ___key, VirtualButtonData_t6_97  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1_15757(__this, ___key, ___value, method) (( KeyValuePair_2_t1_1751  (*) (Transform_1_t1_1761 *, int32_t, VirtualButtonData_t6_97 , const MethodInfo*))Transform_1_Invoke_m1_15757_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m1_15758_gshared (Transform_1_t1_1761 * __this, int32_t ___key, VirtualButtonData_t6_97  ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1_15758(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1_1761 *, int32_t, VirtualButtonData_t6_97 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1_15758_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1_1751  Transform_1_EndInvoke_m1_15759_gshared (Transform_1_t1_1761 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1_15759(__this, ___result, method) (( KeyValuePair_2_t1_1751  (*) (Transform_1_t1_1761 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1_15759_gshared)(__this, ___result, method)
