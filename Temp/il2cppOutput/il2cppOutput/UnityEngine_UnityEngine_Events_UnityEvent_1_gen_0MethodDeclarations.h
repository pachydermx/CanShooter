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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t5_312;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t5_320;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_264;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m5_1889_gshared (UnityEvent_1_t5_312 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5_1889(__this, method) (( void (*) (UnityEvent_1_t5_312 *, const MethodInfo*))UnityEvent_1__ctor_m5_1889_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5_1891_gshared (UnityEvent_1_t5_312 * __this, UnityAction_1_t5_320 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5_1891(__this, ___call, method) (( void (*) (UnityEvent_1_t5_312 *, UnityAction_1_t5_320 *, const MethodInfo*))UnityEvent_1_AddListener_m5_1891_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5_2086_gshared (UnityEvent_1_t5_312 * __this, UnityAction_1_t5_320 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5_2086(__this, ___call, method) (( void (*) (UnityEvent_1_t5_312 *, UnityAction_1_t5_320 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5_2086_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5_2087_gshared (UnityEvent_1_t5_312 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5_2087(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5_312 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5_2087_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_264 * UnityEvent_1_GetDelegate_m5_2088_gshared (UnityEvent_1_t5_312 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2088(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t5_264 * (*) (UnityEvent_1_t5_312 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2088_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t5_264 * UnityEvent_1_GetDelegate_m5_2089_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5_320 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2089(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t5_264 * (*) (Object_t * /* static, unused */, UnityAction_1_t5_320 *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2089_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5_1890_gshared (UnityEvent_1_t5_312 * __this, Color_t5_48  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5_1890(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5_312 *, Color_t5_48 , const MethodInfo*))UnityEvent_1_Invoke_m5_1890_gshared)(__this, ___arg0, method)
