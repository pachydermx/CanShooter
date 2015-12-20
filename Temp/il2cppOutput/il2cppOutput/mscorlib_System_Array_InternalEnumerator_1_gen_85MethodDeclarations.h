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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_85.h"
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m1_10321_gshared (InternalEnumerator_1_t1_1535 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m1_10321(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1_1535 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m1_10321_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_10322_gshared (InternalEnumerator_1_t1_1535 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_10322(__this, method) (( void (*) (InternalEnumerator_1_t1_1535 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_10322_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_10323_gshared (InternalEnumerator_1_t1_1535 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_10323(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1_1535 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_10323_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m1_10324_gshared (InternalEnumerator_1_t1_1535 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m1_10324(__this, method) (( void (*) (InternalEnumerator_1_t1_1535 *, const MethodInfo*))InternalEnumerator_1_Dispose_m1_10324_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m1_10325_gshared (InternalEnumerator_1_t1_1535 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m1_10325(__this, method) (( bool (*) (InternalEnumerator_1_t1_1535 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m1_10325_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t1_999  InternalEnumerator_1_get_Current_m1_10326_gshared (InternalEnumerator_1_t1_1535 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m1_10326(__this, method) (( ArraySegment_1_t1_999  (*) (InternalEnumerator_1_t1_1535 *, const MethodInfo*))InternalEnumerator_1_get_Current_m1_10326_gshared)(__this, method)
