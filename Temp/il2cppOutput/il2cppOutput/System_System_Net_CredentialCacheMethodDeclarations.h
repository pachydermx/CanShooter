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

// System.Net.CredentialCache
struct CredentialCache_t2_524;
// System.Net.ICredentials
struct ICredentials_t2_551;
// System.Net.NetworkCredential
struct NetworkCredential_t2_525;
// System.Uri
struct Uri_t2_284;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.CredentialCache::.ctor()
extern "C" void CredentialCache__ctor_m2_3924 (CredentialCache_t2_524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CredentialCache::.cctor()
extern "C" void CredentialCache__cctor_m2_3925 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.CredentialCache::get_DefaultCredentials()
extern "C" Object_t * CredentialCache_get_DefaultCredentials_m2_3926 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.CredentialCache::get_DefaultNetworkCredentials()
extern "C" NetworkCredential_t2_525 * CredentialCache_get_DefaultNetworkCredentials_m2_3927 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.CredentialCache::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t2_525 * CredentialCache_GetCredential_m2_3928 (CredentialCache_t2_524 * __this, Uri_t2_284 * ___uriPrefix, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.CredentialCache::GetEnumerator()
extern "C" Object_t * CredentialCache_GetEnumerator_m2_3929 (CredentialCache_t2_524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CredentialCache::Add(System.Uri,System.String,System.Net.NetworkCredential)
extern "C" void CredentialCache_Add_m2_3930 (CredentialCache_t2_524 * __this, Uri_t2_284 * ___uriPrefix, String_t* ___authType, NetworkCredential_t2_525 * ___cred, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CredentialCache::Remove(System.Uri,System.String)
extern "C" void CredentialCache_Remove_m2_3931 (CredentialCache_t2_524 * __this, Uri_t2_284 * ___uriPrefix, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.CredentialCache::GetCredential(System.String,System.Int32,System.String)
extern "C" NetworkCredential_t2_525 * CredentialCache_GetCredential_m2_3932 (CredentialCache_t2_524 * __this, String_t* ___host, int32_t ___port, String_t* ___authenticationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CredentialCache::Add(System.String,System.Int32,System.String,System.Net.NetworkCredential)
extern "C" void CredentialCache_Add_m2_3933 (CredentialCache_t2_524 * __this, String_t* ___host, int32_t ___port, String_t* ___authenticationType, NetworkCredential_t2_525 * ___credential, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CredentialCache::Remove(System.String,System.Int32,System.String)
extern "C" void CredentialCache_Remove_m2_3934 (CredentialCache_t2_524 * __this, String_t* ___host, int32_t ___port, String_t* ___authenticationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
