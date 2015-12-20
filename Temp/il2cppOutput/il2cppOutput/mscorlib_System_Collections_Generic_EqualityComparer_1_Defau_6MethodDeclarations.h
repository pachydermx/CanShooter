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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t1_1413;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m1_8224_gshared (DefaultComparer_t1_1413 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_8224(__this, method) (( void (*) (DefaultComparer_t1_1413 *, const MethodInfo*))DefaultComparer__ctor_m1_8224_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_8225_gshared (DefaultComparer_t1_1413 * __this, TimeSpan_t1_218  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_8225(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1413 *, TimeSpan_t1_218 , const MethodInfo*))DefaultComparer_GetHashCode_m1_8225_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_8226_gshared (DefaultComparer_t1_1413 * __this, TimeSpan_t1_218  ___x, TimeSpan_t1_218  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_8226(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1413 *, TimeSpan_t1_218 , TimeSpan_t1_218 , const MethodInfo*))DefaultComparer_Equals_m1_8226_gshared)(__this, ___x, ___y, method)
