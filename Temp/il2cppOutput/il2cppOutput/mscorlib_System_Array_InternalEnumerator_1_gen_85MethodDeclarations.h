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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_85.h"
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m1_9890_gshared (InternalEnumerator_1_t1_1434 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m1_9890(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1_1434 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m1_9890_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_9891_gshared (InternalEnumerator_1_t1_1434 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_9891(__this, method) (( void (*) (InternalEnumerator_1_t1_1434 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_9891_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_9892_gshared (InternalEnumerator_1_t1_1434 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_9892(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1_1434 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_9892_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m1_9893_gshared (InternalEnumerator_1_t1_1434 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m1_9893(__this, method) (( void (*) (InternalEnumerator_1_t1_1434 *, const MethodInfo*))InternalEnumerator_1_Dispose_m1_9893_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m1_9894_gshared (InternalEnumerator_1_t1_1434 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m1_9894(__this, method) (( bool (*) (InternalEnumerator_1_t1_1434 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m1_9894_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t1_997  InternalEnumerator_1_get_Current_m1_9895_gshared (InternalEnumerator_1_t1_1434 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m1_9895(__this, method) (( ArraySegment_1_t1_997  (*) (InternalEnumerator_1_t1_1434 *, const MethodInfo*))InternalEnumerator_1_get_Current_m1_9895_gshared)(__this, method)
