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

// System.Version
struct Version_t1_330;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Version::.ctor()
extern "C" void Version__ctor_m1_5888 (Version_t1_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C" void Version__ctor_m1_5889 (Version_t1_330 * __this, String_t* ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" void Version__ctor_m1_5890 (Version_t1_330 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m1_5891 (Version_t1_330 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m1_5892 (Version_t1_330 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version_CheckedSet_m1_5893 (Version_t1_330 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
extern "C" int32_t Version_get_Build_m1_5894 (Version_t1_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
extern "C" int32_t Version_get_Major_m1_5895 (Version_t1_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
extern "C" int32_t Version_get_Minor_m1_5896 (Version_t1_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
extern "C" int32_t Version_get_Revision_m1_5897 (Version_t1_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Version::Clone()
extern "C" Object_t * Version_Clone_m1_5898 (Version_t1_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
extern "C" int32_t Version_CompareTo_m1_5899 (Version_t1_330 * __this, Object_t * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
extern "C" bool Version_Equals_m1_5900 (Version_t1_330 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" int32_t Version_CompareTo_m1_5901 (Version_t1_330 * __this, Version_t1_330 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C" bool Version_Equals_m1_5902 (Version_t1_330 * __this, Version_t1_330 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
extern "C" int32_t Version_GetHashCode_m1_5903 (Version_t1_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
extern "C" String_t* Version_ToString_m1_5904 (Version_t1_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
extern "C" Version_t1_330 * Version_CreateFromString_m1_5905 (Object_t * __this /* static, unused */, String_t* ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" bool Version_op_Equality_m1_5906 (Object_t * __this /* static, unused */, Version_t1_330 * ___v1, Version_t1_330 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" bool Version_op_Inequality_m1_5907 (Object_t * __this /* static, unused */, Version_t1_330 * ___v1, Version_t1_330 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_GreaterThan(System.Version,System.Version)
extern "C" bool Version_op_GreaterThan_m1_5908 (Object_t * __this /* static, unused */, Version_t1_330 * ___v1, Version_t1_330 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
extern "C" bool Version_op_GreaterThanOrEqual_m1_5909 (Object_t * __this /* static, unused */, Version_t1_330 * ___v1, Version_t1_330 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C" bool Version_op_LessThan_m1_5910 (Object_t * __this /* static, unused */, Version_t1_330 * ___v1, Version_t1_330 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_LessThanOrEqual(System.Version,System.Version)
extern "C" bool Version_op_LessThanOrEqual_m1_5911 (Object_t * __this /* static, unused */, Version_t1_330 * ___v1, Version_t1_330 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
