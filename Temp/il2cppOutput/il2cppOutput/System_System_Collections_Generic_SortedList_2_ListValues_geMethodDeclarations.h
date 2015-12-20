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

// System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>
struct ListValues_t2_872;
// System.Collections.Generic.SortedList`2<System.Object,System.Object>
struct SortedList_2_t2_868;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_957;
// System.Array
struct Array_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedList`2<TKey,TValue>)
extern "C" void ListValues__ctor_m2_6985_gshared (ListValues_t2_872 * __this, SortedList_2_t2_868 * ___host, const MethodInfo* method);
#define ListValues__ctor_m2_6985(__this, ___host, method) (( void (*) (ListValues_t2_872 *, SortedList_2_t2_868 *, const MethodInfo*))ListValues__ctor_m2_6985_gshared)(__this, ___host, method)
// System.Collections.IEnumerator System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ListValues_System_Collections_IEnumerable_GetEnumerator_m2_6986_gshared (ListValues_t2_872 * __this, const MethodInfo* method);
#define ListValues_System_Collections_IEnumerable_GetEnumerator_m2_6986(__this, method) (( Object_t * (*) (ListValues_t2_872 *, const MethodInfo*))ListValues_System_Collections_IEnumerable_GetEnumerator_m2_6986_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::Add(TValue)
extern "C" void ListValues_Add_m2_6987_gshared (ListValues_t2_872 * __this, Object_t * ___item, const MethodInfo* method);
#define ListValues_Add_m2_6987(__this, ___item, method) (( void (*) (ListValues_t2_872 *, Object_t *, const MethodInfo*))ListValues_Add_m2_6987_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::Remove(TValue)
extern "C" bool ListValues_Remove_m2_6988_gshared (ListValues_t2_872 * __this, Object_t * ___value, const MethodInfo* method);
#define ListValues_Remove_m2_6988(__this, ___value, method) (( bool (*) (ListValues_t2_872 *, Object_t *, const MethodInfo*))ListValues_Remove_m2_6988_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::Clear()
extern "C" void ListValues_Clear_m2_6989_gshared (ListValues_t2_872 * __this, const MethodInfo* method);
#define ListValues_Clear_m2_6989(__this, method) (( void (*) (ListValues_t2_872 *, const MethodInfo*))ListValues_Clear_m2_6989_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ListValues_CopyTo_m2_6990_gshared (ListValues_t2_872 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ListValues_CopyTo_m2_6990(__this, ___array, ___arrayIndex, method) (( void (*) (ListValues_t2_872 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))ListValues_CopyTo_m2_6990_gshared)(__this, ___array, ___arrayIndex, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::Contains(TValue)
extern "C" bool ListValues_Contains_m2_6991_gshared (ListValues_t2_872 * __this, Object_t * ___item, const MethodInfo* method);
#define ListValues_Contains_m2_6991(__this, ___item, method) (( bool (*) (ListValues_t2_872 *, Object_t *, const MethodInfo*))ListValues_Contains_m2_6991_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::IndexOf(TValue)
extern "C" int32_t ListValues_IndexOf_m2_6992_gshared (ListValues_t2_872 * __this, Object_t * ___item, const MethodInfo* method);
#define ListValues_IndexOf_m2_6992(__this, ___item, method) (( int32_t (*) (ListValues_t2_872 *, Object_t *, const MethodInfo*))ListValues_IndexOf_m2_6992_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::Insert(System.Int32,TValue)
extern "C" void ListValues_Insert_m2_6993_gshared (ListValues_t2_872 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define ListValues_Insert_m2_6993(__this, ___index, ___item, method) (( void (*) (ListValues_t2_872 *, int32_t, Object_t *, const MethodInfo*))ListValues_Insert_m2_6993_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::RemoveAt(System.Int32)
extern "C" void ListValues_RemoveAt_m2_6994_gshared (ListValues_t2_872 * __this, int32_t ___index, const MethodInfo* method);
#define ListValues_RemoveAt_m2_6994(__this, ___index, method) (( void (*) (ListValues_t2_872 *, int32_t, const MethodInfo*))ListValues_RemoveAt_m2_6994_gshared)(__this, ___index, method)
// TValue System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::get_Item(System.Int32)
extern "C" Object_t * ListValues_get_Item_m2_6995_gshared (ListValues_t2_872 * __this, int32_t ___index, const MethodInfo* method);
#define ListValues_get_Item_m2_6995(__this, ___index, method) (( Object_t * (*) (ListValues_t2_872 *, int32_t, const MethodInfo*))ListValues_get_Item_m2_6995_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::set_Item(System.Int32,TValue)
extern "C" void ListValues_set_Item_m2_6996_gshared (ListValues_t2_872 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ListValues_set_Item_m2_6996(__this, ___index, ___value, method) (( void (*) (ListValues_t2_872 *, int32_t, Object_t *, const MethodInfo*))ListValues_set_Item_m2_6996_gshared)(__this, ___index, ___value, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ListValues_GetEnumerator_m2_6997_gshared (ListValues_t2_872 * __this, const MethodInfo* method);
#define ListValues_GetEnumerator_m2_6997(__this, method) (( Object_t* (*) (ListValues_t2_872 *, const MethodInfo*))ListValues_GetEnumerator_m2_6997_gshared)(__this, method)
// System.Int32 System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::get_Count()
extern "C" int32_t ListValues_get_Count_m2_6998_gshared (ListValues_t2_872 * __this, const MethodInfo* method);
#define ListValues_get_Count_m2_6998(__this, method) (( int32_t (*) (ListValues_t2_872 *, const MethodInfo*))ListValues_get_Count_m2_6998_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::get_IsSynchronized()
extern "C" bool ListValues_get_IsSynchronized_m2_6999_gshared (ListValues_t2_872 * __this, const MethodInfo* method);
#define ListValues_get_IsSynchronized_m2_6999(__this, method) (( bool (*) (ListValues_t2_872 *, const MethodInfo*))ListValues_get_IsSynchronized_m2_6999_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ListValues_get_IsReadOnly_m2_7000_gshared (ListValues_t2_872 * __this, const MethodInfo* method);
#define ListValues_get_IsReadOnly_m2_7000(__this, method) (( bool (*) (ListValues_t2_872 *, const MethodInfo*))ListValues_get_IsReadOnly_m2_7000_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::get_SyncRoot()
extern "C" Object_t * ListValues_get_SyncRoot_m2_7001_gshared (ListValues_t2_872 * __this, const MethodInfo* method);
#define ListValues_get_SyncRoot_m2_7001(__this, method) (( Object_t * (*) (ListValues_t2_872 *, const MethodInfo*))ListValues_get_SyncRoot_m2_7001_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedList`2/ListValues<System.Object,System.Object>::CopyTo(System.Array,System.Int32)
extern "C" void ListValues_CopyTo_m2_7002_gshared (ListValues_t2_872 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ListValues_CopyTo_m2_7002(__this, ___array, ___arrayIndex, method) (( void (*) (ListValues_t2_872 *, Array_t *, int32_t, const MethodInfo*))ListValues_CopyTo_m2_7002_gshared)(__this, ___array, ___arrayIndex, method)
