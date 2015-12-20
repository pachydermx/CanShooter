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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1_1285;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1_1279;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_957;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object[]
struct ObjectU5BU5D_t1_158;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_5.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m1_6970_gshared (KeyCollection_t1_1285 * __this, Dictionary_2_t1_1279 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1_6970(__this, ___dictionary, method) (( void (*) (KeyCollection_t1_1285 *, Dictionary_2_t1_1279 *, const MethodInfo*))KeyCollection__ctor_m1_6970_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_6971_gshared (KeyCollection_t1_1285 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_6971(__this, ___item, method) (( void (*) (KeyCollection_t1_1285 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_6971_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_6972_gshared (KeyCollection_t1_1285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_6972(__this, method) (( void (*) (KeyCollection_t1_1285 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_6972_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_6973_gshared (KeyCollection_t1_1285 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_6973(__this, ___item, method) (( bool (*) (KeyCollection_t1_1285 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_6973_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_6974_gshared (KeyCollection_t1_1285 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_6974(__this, ___item, method) (( bool (*) (KeyCollection_t1_1285 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_6974_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_6975_gshared (KeyCollection_t1_1285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_6975(__this, method) (( Object_t* (*) (KeyCollection_t1_1285 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_6975_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m1_6976_gshared (KeyCollection_t1_1285 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1_6976(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1285 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1_6976_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_6977_gshared (KeyCollection_t1_1285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_6977(__this, method) (( Object_t * (*) (KeyCollection_t1_1285 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_6977_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_6978_gshared (KeyCollection_t1_1285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_6978(__this, method) (( bool (*) (KeyCollection_t1_1285 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_6978_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_6979_gshared (KeyCollection_t1_1285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_6979(__this, method) (( bool (*) (KeyCollection_t1_1285 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_6979_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_6980_gshared (KeyCollection_t1_1285 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_6980(__this, method) (( Object_t * (*) (KeyCollection_t1_1285 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_6980_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m1_6981_gshared (KeyCollection_t1_1285 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1_6981(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1285 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1_6981_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1286  KeyCollection_GetEnumerator_m1_6982_gshared (KeyCollection_t1_1285 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m1_6982(__this, method) (( Enumerator_t1_1286  (*) (KeyCollection_t1_1285 *, const MethodInfo*))KeyCollection_GetEnumerator_m1_6982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m1_6983_gshared (KeyCollection_t1_1285 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1_6983(__this, method) (( int32_t (*) (KeyCollection_t1_1285 *, const MethodInfo*))KeyCollection_get_Count_m1_6983_gshared)(__this, method)
