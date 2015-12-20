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

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t5_369;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t5_368;
// System.Object[]
struct ObjectU5BU5D_t1_158;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m5_2131_gshared (InvokableCall_1_t5_369 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m5_2131(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5_369 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m5_2131_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m5_2132_gshared (InvokableCall_1_t5_369 * __this, UnityAction_1_t5_368 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m5_2132(__this, ___action, method) (( void (*) (InvokableCall_1_t5_369 *, UnityAction_1_t5_368 *, const MethodInfo*))InvokableCall_1__ctor_m5_2132_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m5_2133_gshared (InvokableCall_1_t5_369 * __this, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m5_2133(__this, ___args, method) (( void (*) (InvokableCall_1_t5_369 *, ObjectU5BU5D_t1_158*, const MethodInfo*))InvokableCall_1_Invoke_m5_2133_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m5_2134_gshared (InvokableCall_1_t5_369 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m5_2134(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5_369 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m5_2134_gshared)(__this, ___targetObj, ___method, method)
