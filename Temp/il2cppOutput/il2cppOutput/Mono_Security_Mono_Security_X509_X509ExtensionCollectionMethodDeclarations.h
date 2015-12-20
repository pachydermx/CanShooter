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

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3_17;
// Mono.Security.ASN1
struct ASN1_t3_5;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.String
struct String_t;
// Mono.Security.X509.X509Extension
struct X509Extension_t3_7;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C" void X509ExtensionCollection__ctor_m3_394 (X509ExtensionCollection_t3_17 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C" void X509ExtensionCollection__ctor_m3_395 (X509ExtensionCollection_t3_17 * __this, ASN1_t3_5 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m3_396 (X509ExtensionCollection_t3_17 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C" int32_t X509ExtensionCollection_IndexOf_m3_397 (X509ExtensionCollection_t3_17 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C" X509Extension_t3_7 * X509ExtensionCollection_get_Item_m3_29 (X509ExtensionCollection_t3_17 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
