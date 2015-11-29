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

// System.Security.Cryptography.OidCollection
struct OidCollection_t2_675;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Security.Cryptography.Oid
struct Oid_t2_656;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Security.Cryptography.Oid[]
struct OidU5BU5D_t2_839;
// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t2_692;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.OidCollection::.ctor()
extern "C" void OidCollection__ctor_m2_5729 (OidCollection_t2_675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void OidCollection_System_Collections_ICollection_CopyTo_m2_5730 (OidCollection_t2_675 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * OidCollection_System_Collections_IEnumerable_GetEnumerator_m2_5731 (OidCollection_t2_675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
extern "C" int32_t OidCollection_get_Count_m2_5732 (OidCollection_t2_675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidCollection::get_IsSynchronized()
extern "C" bool OidCollection_get_IsSynchronized_m2_5733 (OidCollection_t2_675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
extern "C" Oid_t2_656 * OidCollection_get_Item_m2_5734 (OidCollection_t2_675 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.String)
extern "C" Oid_t2_656 * OidCollection_get_Item_m2_5735 (OidCollection_t2_675 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
extern "C" Object_t * OidCollection_get_SyncRoot_m2_5736 (OidCollection_t2_675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
extern "C" int32_t OidCollection_Add_m2_5737 (OidCollection_t2_675 * __this, Oid_t2_656 * ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidCollection::CopyTo(System.Security.Cryptography.Oid[],System.Int32)
extern "C" void OidCollection_CopyTo_m2_5738 (OidCollection_t2_675 * __this, OidU5BU5D_t2_839* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.OidEnumerator System.Security.Cryptography.OidCollection::GetEnumerator()
extern "C" OidEnumerator_t2_692 * OidCollection_GetEnumerator_m2_5739 (OidCollection_t2_675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidCollection::get_ReadOnly()
extern "C" bool OidCollection_get_ReadOnly_m2_5740 (OidCollection_t2_675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidCollection::set_ReadOnly(System.Boolean)
extern "C" void OidCollection_set_ReadOnly_m2_5741 (OidCollection_t2_675 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.OidCollection System.Security.Cryptography.OidCollection::ReadOnlyCopy()
extern "C" OidCollection_t2_675 * OidCollection_ReadOnlyCopy_m2_5742 (OidCollection_t2_675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
