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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t1_1338;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m1_7981_gshared (DefaultComparer_t1_1338 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_7981(__this, method) (( void (*) (DefaultComparer_t1_1338 *, const MethodInfo*))DefaultComparer__ctor_m1_7981_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_7982_gshared (DefaultComparer_t1_1338 * __this, Guid_t1_772  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_7982(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1338 *, Guid_t1_772 , const MethodInfo*))DefaultComparer_GetHashCode_m1_7982_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_7983_gshared (DefaultComparer_t1_1338 * __this, Guid_t1_772  ___x, Guid_t1_772  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_7983(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1338 *, Guid_t1_772 , Guid_t1_772 , const MethodInfo*))DefaultComparer_Equals_m1_7983_gshared)(__this, ___x, ___y, method)
