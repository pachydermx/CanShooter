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

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t5_340;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_3__ctor_m5_2000_gshared (InvokableCall_3_t5_340 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_3__ctor_m5_2000(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_3_t5_340 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_3__ctor_m5_2000_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_3_Invoke_m5_2001_gshared (InvokableCall_3_t5_340 * __this, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method);
#define InvokableCall_3_Invoke_m5_2001(__this, ___args, method) (( void (*) (InvokableCall_3_t5_340 *, ObjectU5BU5D_t1_158*, const MethodInfo*))InvokableCall_3_Invoke_m5_2001_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_3_Find_m5_2002_gshared (InvokableCall_3_t5_340 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_3_Find_m5_2002(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_3_t5_340 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_3_Find_m5_2002_gshared)(__this, ___targetObj, ___method, method)
