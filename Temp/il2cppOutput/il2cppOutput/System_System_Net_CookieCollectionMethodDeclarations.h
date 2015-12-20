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

// System.Net.CookieCollection
struct CookieCollection_t2_519;
// System.Collections.Generic.IList`1<System.Net.Cookie>
struct IList_1_t1_966;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Net.Cookie[]
struct CookieU5BU5D_t2_833;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Net.Cookie
struct Cookie_t2_517;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.CookieCollection::.ctor()
extern "C" void CookieCollection__ctor_m2_3862 (CookieCollection_t2_519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::.cctor()
extern "C" void CookieCollection__cctor_m2_3863 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Net.Cookie> System.Net.CookieCollection::get_List()
extern "C" Object_t* CookieCollection_get_List_m2_3864 (CookieCollection_t2_519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::get_Count()
extern "C" int32_t CookieCollection_get_Count_m2_3865 (CookieCollection_t2_519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieCollection::get_IsSynchronized()
extern "C" bool CookieCollection_get_IsSynchronized_m2_3866 (CookieCollection_t2_519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.CookieCollection::get_SyncRoot()
extern "C" Object_t * CookieCollection_get_SyncRoot_m2_3867 (CookieCollection_t2_519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern "C" void CookieCollection_CopyTo_m2_3868 (CookieCollection_t2_519 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::CopyTo(System.Net.Cookie[],System.Int32)
extern "C" void CookieCollection_CopyTo_m2_3869 (CookieCollection_t2_519 * __this, CookieU5BU5D_t2_833* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.CookieCollection::GetEnumerator()
extern "C" Object_t * CookieCollection_GetEnumerator_m2_3870 (CookieCollection_t2_519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieCollection::get_IsReadOnly()
extern "C" bool CookieCollection_get_IsReadOnly_m2_3871 (CookieCollection_t2_519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Add(System.Net.Cookie)
extern "C" void CookieCollection_Add_m2_3872 (CookieCollection_t2_519 * __this, Cookie_t2_517 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Sort()
extern "C" void CookieCollection_Sort_m2_3873 (CookieCollection_t2_519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::SearchCookie(System.Net.Cookie)
extern "C" int32_t CookieCollection_SearchCookie_m2_3874 (CookieCollection_t2_519 * __this, Cookie_t2_517 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Add(System.Net.CookieCollection)
extern "C" void CookieCollection_Add_m2_3875 (CookieCollection_t2_519 * __this, CookieCollection_t2_519 * ___cookies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cookie System.Net.CookieCollection::get_Item(System.Int32)
extern "C" Cookie_t2_517 * CookieCollection_get_Item_m2_3876 (CookieCollection_t2_519 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cookie System.Net.CookieCollection::get_Item(System.String)
extern "C" Cookie_t2_517 * CookieCollection_get_Item_m2_3877 (CookieCollection_t2_519 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
