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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t1_1881;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t1_1877;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_34.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m1_15559_gshared (KeyCollection_t1_1881 * __this, Dictionary_2_t1_1877 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1_15559(__this, ___dictionary, method) (( void (*) (KeyCollection_t1_1881 *, Dictionary_2_t1_1877 *, const MethodInfo*))KeyCollection__ctor_m1_15559_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_15560_gshared (KeyCollection_t1_1881 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_15560(__this, ___item, method) (( void (*) (KeyCollection_t1_1881 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_15560_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_15561_gshared (KeyCollection_t1_1881 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_15561(__this, method) (( void (*) (KeyCollection_t1_1881 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_15561_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_15562_gshared (KeyCollection_t1_1881 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_15562(__this, ___item, method) (( bool (*) (KeyCollection_t1_1881 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_15562_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_15563_gshared (KeyCollection_t1_1881 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_15563(__this, ___item, method) (( bool (*) (KeyCollection_t1_1881 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_15563_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_15564_gshared (KeyCollection_t1_1881 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_15564(__this, method) (( Object_t* (*) (KeyCollection_t1_1881 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_15564_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m1_15565_gshared (KeyCollection_t1_1881 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1_15565(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1881 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1_15565_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_15566_gshared (KeyCollection_t1_1881 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_15566(__this, method) (( Object_t * (*) (KeyCollection_t1_1881 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_15566_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_15567_gshared (KeyCollection_t1_1881 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_15567(__this, method) (( bool (*) (KeyCollection_t1_1881 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_15567_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_15568_gshared (KeyCollection_t1_1881 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_15568(__this, method) (( bool (*) (KeyCollection_t1_1881 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_15568_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_15569_gshared (KeyCollection_t1_1881 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_15569(__this, method) (( Object_t * (*) (KeyCollection_t1_1881 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_15569_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m1_15570_gshared (KeyCollection_t1_1881 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1_15570(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1881 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1_15570_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t1_1882  KeyCollection_GetEnumerator_m1_15571_gshared (KeyCollection_t1_1881 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m1_15571(__this, method) (( Enumerator_t1_1882  (*) (KeyCollection_t1_1881 *, const MethodInfo*))KeyCollection_GetEnumerator_m1_15571_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m1_15572_gshared (KeyCollection_t1_1881 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1_15572(__this, method) (( int32_t (*) (KeyCollection_t1_1881 *, const MethodInfo*))KeyCollection_get_Count_m1_15572_gshared)(__this, method)
