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
struct KeyCollection_t1_1546;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1542;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_14.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m1_10548_gshared (KeyCollection_t1_1546 * __this, Dictionary_2_t1_1542 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1_10548(__this, ___dictionary, method) (( void (*) (KeyCollection_t1_1546 *, Dictionary_2_t1_1542 *, const MethodInfo*))KeyCollection__ctor_m1_10548_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_10549_gshared (KeyCollection_t1_1546 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_10549(__this, ___item, method) (( void (*) (KeyCollection_t1_1546 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_10549_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_10550_gshared (KeyCollection_t1_1546 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_10550(__this, method) (( void (*) (KeyCollection_t1_1546 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_10550_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_10551_gshared (KeyCollection_t1_1546 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_10551(__this, ___item, method) (( bool (*) (KeyCollection_t1_1546 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_10551_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_10552_gshared (KeyCollection_t1_1546 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_10552(__this, ___item, method) (( bool (*) (KeyCollection_t1_1546 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_10552_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_10553_gshared (KeyCollection_t1_1546 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_10553(__this, method) (( Object_t* (*) (KeyCollection_t1_1546 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_10553_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m1_10554_gshared (KeyCollection_t1_1546 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1_10554(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1546 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1_10554_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_10555_gshared (KeyCollection_t1_1546 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_10555(__this, method) (( Object_t * (*) (KeyCollection_t1_1546 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_10555_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_10556_gshared (KeyCollection_t1_1546 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_10556(__this, method) (( bool (*) (KeyCollection_t1_1546 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_10556_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_10557_gshared (KeyCollection_t1_1546 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_10557(__this, method) (( bool (*) (KeyCollection_t1_1546 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_10557_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_10558_gshared (KeyCollection_t1_1546 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_10558(__this, method) (( Object_t * (*) (KeyCollection_t1_1546 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_10558_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m1_10559_gshared (KeyCollection_t1_1546 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1_10559(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1546 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1_10559_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1547  KeyCollection_GetEnumerator_m1_10560_gshared (KeyCollection_t1_1546 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m1_10560(__this, method) (( Enumerator_t1_1547  (*) (KeyCollection_t1_1546 *, const MethodInfo*))KeyCollection_GetEnumerator_m1_10560_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m1_10561_gshared (KeyCollection_t1_1546 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1_10561(__this, method) (( int32_t (*) (KeyCollection_t1_1546 *, const MethodInfo*))KeyCollection_get_Count_m1_10561_gshared)(__this, method)
