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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1_1443;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1439;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_955;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object[]
struct ObjectU5BU5D_t1_158;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_14.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m1_10101_gshared (KeyCollection_t1_1443 * __this, Dictionary_2_t1_1439 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1_10101(__this, ___dictionary, method) (( void (*) (KeyCollection_t1_1443 *, Dictionary_2_t1_1439 *, const MethodInfo*))KeyCollection__ctor_m1_10101_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_10102_gshared (KeyCollection_t1_1443 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_10102(__this, ___item, method) (( void (*) (KeyCollection_t1_1443 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_10102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_10103_gshared (KeyCollection_t1_1443 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_10103(__this, method) (( void (*) (KeyCollection_t1_1443 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_10103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_10104_gshared (KeyCollection_t1_1443 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_10104(__this, ___item, method) (( bool (*) (KeyCollection_t1_1443 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_10104_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_10105_gshared (KeyCollection_t1_1443 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_10105(__this, ___item, method) (( bool (*) (KeyCollection_t1_1443 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_10105_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_10106_gshared (KeyCollection_t1_1443 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_10106(__this, method) (( Object_t* (*) (KeyCollection_t1_1443 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_10106_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m1_10107_gshared (KeyCollection_t1_1443 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1_10107(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1443 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1_10107_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_10108_gshared (KeyCollection_t1_1443 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_10108(__this, method) (( Object_t * (*) (KeyCollection_t1_1443 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_10108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_10109_gshared (KeyCollection_t1_1443 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_10109(__this, method) (( bool (*) (KeyCollection_t1_1443 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_10109_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_10110_gshared (KeyCollection_t1_1443 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_10110(__this, method) (( bool (*) (KeyCollection_t1_1443 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_10110_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_10111_gshared (KeyCollection_t1_1443 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_10111(__this, method) (( Object_t * (*) (KeyCollection_t1_1443 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_10111_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m1_10112_gshared (KeyCollection_t1_1443 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1_10112(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1443 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1_10112_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1444  KeyCollection_GetEnumerator_m1_10113_gshared (KeyCollection_t1_1443 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m1_10113(__this, method) (( Enumerator_t1_1444  (*) (KeyCollection_t1_1443 *, const MethodInfo*))KeyCollection_GetEnumerator_m1_10113_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m1_10114_gshared (KeyCollection_t1_1443 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1_10114(__this, method) (( int32_t (*) (KeyCollection_t1_1443 *, const MethodInfo*))KeyCollection_get_Count_m1_10114_gshared)(__this, method)
