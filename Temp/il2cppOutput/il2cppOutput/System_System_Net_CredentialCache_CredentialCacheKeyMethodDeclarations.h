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

// System.Net.CredentialCache/CredentialCacheKey
struct CredentialCacheKey_t2_522;
// System.Uri
struct Uri_t2_284;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.CredentialCache/CredentialCacheKey::.ctor(System.Uri,System.String)
extern "C" void CredentialCacheKey__ctor_m2_3909 (CredentialCacheKey_t2_522 * __this, Uri_t2_284 * ___uriPrefix, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CredentialCache/CredentialCacheKey::get_Length()
extern "C" int32_t CredentialCacheKey_get_Length_m2_3910 (CredentialCacheKey_t2_522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CredentialCache/CredentialCacheKey::get_AbsPath()
extern "C" String_t* CredentialCacheKey_get_AbsPath_m2_3911 (CredentialCacheKey_t2_522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.CredentialCache/CredentialCacheKey::get_UriPrefix()
extern "C" Uri_t2_284 * CredentialCacheKey_get_UriPrefix_m2_3912 (CredentialCacheKey_t2_522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CredentialCache/CredentialCacheKey::get_AuthType()
extern "C" String_t* CredentialCacheKey_get_AuthType_m2_3913 (CredentialCacheKey_t2_522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CredentialCache/CredentialCacheKey::GetHashCode()
extern "C" int32_t CredentialCacheKey_GetHashCode_m2_3914 (CredentialCacheKey_t2_522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CredentialCache/CredentialCacheKey::Equals(System.Object)
extern "C" bool CredentialCacheKey_Equals_m2_3915 (CredentialCacheKey_t2_522 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CredentialCache/CredentialCacheKey::ToString()
extern "C" String_t* CredentialCacheKey_ToString_m2_3916 (CredentialCacheKey_t2_522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
