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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1_1334;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m1_7960_gshared (DefaultComparer_t1_1334 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_7960(__this, method) (( void (*) (DefaultComparer_t1_1334 *, const MethodInfo*))DefaultComparer__ctor_m1_7960_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_7961_gshared (DefaultComparer_t1_1334 * __this, DateTimeOffset_t1_748  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_7961(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1334 *, DateTimeOffset_t1_748 , const MethodInfo*))DefaultComparer_GetHashCode_m1_7961_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_7962_gshared (DefaultComparer_t1_1334 * __this, DateTimeOffset_t1_748  ___x, DateTimeOffset_t1_748  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_7962(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1334 *, DateTimeOffset_t1_748 , DateTimeOffset_t1_748 , const MethodInfo*))DefaultComparer_Equals_m1_7962_gshared)(__this, ___x, ___y, method)
