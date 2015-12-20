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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1_1715;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1020;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_2220;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1_161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_20.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m1_12749_gshared (KeyCollection_t1_1715 * __this, Dictionary_2_t1_1020 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1_12749(__this, ___dictionary, method) (( void (*) (KeyCollection_t1_1715 *, Dictionary_2_t1_1020 *, const MethodInfo*))KeyCollection__ctor_m1_12749_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_12750_gshared (KeyCollection_t1_1715 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_12750(__this, ___item, method) (( void (*) (KeyCollection_t1_1715 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_12750_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_12751_gshared (KeyCollection_t1_1715 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_12751(__this, method) (( void (*) (KeyCollection_t1_1715 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_12751_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_12752_gshared (KeyCollection_t1_1715 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_12752(__this, ___item, method) (( bool (*) (KeyCollection_t1_1715 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_12752_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_12753_gshared (KeyCollection_t1_1715 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_12753(__this, ___item, method) (( bool (*) (KeyCollection_t1_1715 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_12753_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_12754_gshared (KeyCollection_t1_1715 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_12754(__this, method) (( Object_t* (*) (KeyCollection_t1_1715 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_12754_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m1_12755_gshared (KeyCollection_t1_1715 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1_12755(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1715 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1_12755_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_12756_gshared (KeyCollection_t1_1715 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_12756(__this, method) (( Object_t * (*) (KeyCollection_t1_1715 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_12756_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_12757_gshared (KeyCollection_t1_1715 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_12757(__this, method) (( bool (*) (KeyCollection_t1_1715 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_12757_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_12758_gshared (KeyCollection_t1_1715 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_12758(__this, method) (( bool (*) (KeyCollection_t1_1715 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_12758_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_12759_gshared (KeyCollection_t1_1715 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_12759(__this, method) (( Object_t * (*) (KeyCollection_t1_1715 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_12759_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m1_12760_gshared (KeyCollection_t1_1715 * __this, Int32U5BU5D_t1_161* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1_12760(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1715 *, Int32U5BU5D_t1_161*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1_12760_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1716  KeyCollection_GetEnumerator_m1_12761_gshared (KeyCollection_t1_1715 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m1_12761(__this, method) (( Enumerator_t1_1716  (*) (KeyCollection_t1_1715 *, const MethodInfo*))KeyCollection_GetEnumerator_m1_12761_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m1_12762_gshared (KeyCollection_t1_1715 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1_12762(__this, method) (( int32_t (*) (KeyCollection_t1_1715 *, const MethodInfo*))KeyCollection_get_Count_m1_12762_gshared)(__this, method)
