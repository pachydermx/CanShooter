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

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t2_663;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3_1;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t2_662;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Extension[]
struct X509ExtensionU5BU5D_t2_837;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t2_678;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor()
extern "C" void X509ExtensionCollection__ctor_m2_5621 (X509ExtensionCollection_t2_663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void X509ExtensionCollection__ctor_m2_5622 (X509ExtensionCollection_t2_663 * __this, X509Certificate_t3_1 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void X509ExtensionCollection_System_Collections_ICollection_CopyTo_m2_5623 (X509ExtensionCollection_t2_663 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m2_5624 (X509ExtensionCollection_t2_663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Count()
extern "C" int32_t X509ExtensionCollection_get_Count_m2_5625 (X509ExtensionCollection_t2_663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_IsSynchronized()
extern "C" bool X509ExtensionCollection_get_IsSynchronized_m2_5626 (X509ExtensionCollection_t2_663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_SyncRoot()
extern "C" Object_t * X509ExtensionCollection_get_SyncRoot_m2_5627 (X509ExtensionCollection_t2_663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.Int32)
extern "C" X509Extension_t2_662 * X509ExtensionCollection_get_Item_m2_5628 (X509ExtensionCollection_t2_663 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.String)
extern "C" X509Extension_t2_662 * X509ExtensionCollection_get_Item_m2_5629 (X509ExtensionCollection_t2_663 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::Add(System.Security.Cryptography.X509Certificates.X509Extension)
extern "C" int32_t X509ExtensionCollection_Add_m2_5630 (X509ExtensionCollection_t2_663 * __this, X509Extension_t2_662 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::CopyTo(System.Security.Cryptography.X509Certificates.X509Extension[],System.Int32)
extern "C" void X509ExtensionCollection_CopyTo_m2_5631 (X509ExtensionCollection_t2_663 * __this, X509ExtensionU5BU5D_t2_837* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::GetEnumerator()
extern "C" X509ExtensionEnumerator_t2_678 * X509ExtensionCollection_GetEnumerator_m2_5632 (X509ExtensionCollection_t2_663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
