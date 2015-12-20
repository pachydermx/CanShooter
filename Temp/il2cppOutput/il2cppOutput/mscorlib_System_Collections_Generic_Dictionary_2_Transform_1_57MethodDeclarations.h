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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct Transform_1_t1_1977;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m1_17449_gshared (Transform_1_t1_1977 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1_17449(__this, ___object, ___method, method) (( void (*) (Transform_1_t1_1977 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1_17449_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Invoke(TKey,TValue)
extern "C" VirtualButtonData_t6_97  Transform_1_Invoke_m1_17450_gshared (Transform_1_t1_1977 * __this, int32_t ___key, VirtualButtonData_t6_97  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1_17450(__this, ___key, ___value, method) (( VirtualButtonData_t6_97  (*) (Transform_1_t1_1977 *, int32_t, VirtualButtonData_t6_97 , const MethodInfo*))Transform_1_Invoke_m1_17450_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,Vuforia.VuforiaManagerImpl/VirtualButtonData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m1_17451_gshared (Transform_1_t1_1977 * __this, int32_t ___key, VirtualButtonData_t6_97  ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1_17451(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1_1977 *, int32_t, VirtualButtonData_t6_97 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1_17451_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData,Vuforia.VuforiaManagerImpl/VirtualButtonData>::EndInvoke(System.IAsyncResult)
extern "C" VirtualButtonData_t6_97  Transform_1_EndInvoke_m1_17452_gshared (Transform_1_t1_1977 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1_17452(__this, ___result, method) (( VirtualButtonData_t6_97  (*) (Transform_1_t1_1977 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1_17452_gshared)(__this, ___result, method)
