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

// System.Collections.Specialized.StringCollection
struct StringCollection_t2_34;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Collections.Specialized.StringEnumerator
struct StringEnumerator_t2_35;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Specialized.StringCollection::.ctor()
extern "C" void StringCollection__ctor_m2_282 (StringCollection_t2_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsReadOnly()
extern "C" bool StringCollection_System_Collections_IList_get_IsReadOnly_m2_283 (StringCollection_t2_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.get_IsFixedSize()
extern "C" bool StringCollection_System_Collections_IList_get_IsFixedSize_m2_284 (StringCollection_t2_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * StringCollection_System_Collections_IList_get_Item_m2_285 (StringCollection_t2_34 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void StringCollection_System_Collections_IList_set_Item_m2_286 (StringCollection_t2_34 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t StringCollection_System_Collections_IList_Add_m2_287 (StringCollection_t2_34 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool StringCollection_System_Collections_IList_Contains_m2_288 (StringCollection_t2_34 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t StringCollection_System_Collections_IList_IndexOf_m2_289 (StringCollection_t2_34 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void StringCollection_System_Collections_IList_Insert_m2_290 (StringCollection_t2_34 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.IList.Remove(System.Object)
extern "C" void StringCollection_System_Collections_IList_Remove_m2_291 (StringCollection_t2_34 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void StringCollection_System_Collections_ICollection_CopyTo_m2_292 (StringCollection_t2_34 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.StringCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * StringCollection_System_Collections_IEnumerable_GetEnumerator_m2_293 (StringCollection_t2_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.StringCollection::get_Item(System.Int32)
extern "C" String_t* StringCollection_get_Item_m2_294 (StringCollection_t2_34 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::set_Item(System.Int32,System.String)
extern "C" void StringCollection_set_Item_m2_295 (StringCollection_t2_34 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::get_Count()
extern "C" int32_t StringCollection_get_Count_m2_296 (StringCollection_t2_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::Add(System.String)
extern "C" int32_t StringCollection_Add_m2_297 (StringCollection_t2_34 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::AddRange(System.String[])
extern "C" void StringCollection_AddRange_m2_298 (StringCollection_t2_34 * __this, StringU5BU5D_t1_206* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Clear()
extern "C" void StringCollection_Clear_m2_299 (StringCollection_t2_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::Contains(System.String)
extern "C" bool StringCollection_Contains_m2_300 (StringCollection_t2_34 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::CopyTo(System.String[],System.Int32)
extern "C" void StringCollection_CopyTo_m2_301 (StringCollection_t2_34 * __this, StringU5BU5D_t1_206* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringEnumerator System.Collections.Specialized.StringCollection::GetEnumerator()
extern "C" StringEnumerator_t2_35 * StringCollection_GetEnumerator_m2_302 (StringCollection_t2_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringCollection::IndexOf(System.String)
extern "C" int32_t StringCollection_IndexOf_m2_303 (StringCollection_t2_34 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Insert(System.Int32,System.String)
extern "C" void StringCollection_Insert_m2_304 (StringCollection_t2_34 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsReadOnly()
extern "C" bool StringCollection_get_IsReadOnly_m2_305 (StringCollection_t2_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringCollection::get_IsSynchronized()
extern "C" bool StringCollection_get_IsSynchronized_m2_306 (StringCollection_t2_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::Remove(System.String)
extern "C" void StringCollection_Remove_m2_307 (StringCollection_t2_34 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringCollection::RemoveAt(System.Int32)
extern "C" void StringCollection_RemoveAt_m2_308 (StringCollection_t2_34 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringCollection::get_SyncRoot()
extern "C" Object_t * StringCollection_get_SyncRoot_m2_309 (StringCollection_t2_34 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
