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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1_1257;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1_1253;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m1_7108_gshared (KeyCollection_t1_1257 * __this, Dictionary_2_t1_1253 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1_7108(__this, ___dictionary, method) (( void (*) (KeyCollection_t1_1257 *, Dictionary_2_t1_1253 *, const MethodInfo*))KeyCollection__ctor_m1_7108_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_7109_gshared (KeyCollection_t1_1257 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_7109(__this, ___item, method) (( void (*) (KeyCollection_t1_1257 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_7109_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_7110_gshared (KeyCollection_t1_1257 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_7110(__this, method) (( void (*) (KeyCollection_t1_1257 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_7110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_7111_gshared (KeyCollection_t1_1257 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_7111(__this, ___item, method) (( bool (*) (KeyCollection_t1_1257 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_7111_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_7112_gshared (KeyCollection_t1_1257 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_7112(__this, ___item, method) (( bool (*) (KeyCollection_t1_1257 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_7112_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_7113_gshared (KeyCollection_t1_1257 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_7113(__this, method) (( Object_t* (*) (KeyCollection_t1_1257 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_7113_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m1_7114_gshared (KeyCollection_t1_1257 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1_7114(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1257 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1_7114_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_7115_gshared (KeyCollection_t1_1257 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_7115(__this, method) (( Object_t * (*) (KeyCollection_t1_1257 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_7115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_7116_gshared (KeyCollection_t1_1257 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_7116(__this, method) (( bool (*) (KeyCollection_t1_1257 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_7116_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_7117_gshared (KeyCollection_t1_1257 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_7117(__this, method) (( bool (*) (KeyCollection_t1_1257 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_7117_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_7118_gshared (KeyCollection_t1_1257 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_7118(__this, method) (( Object_t * (*) (KeyCollection_t1_1257 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_7118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m1_7119_gshared (KeyCollection_t1_1257 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1_7119(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1257 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1_7119_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1258  KeyCollection_GetEnumerator_m1_7120_gshared (KeyCollection_t1_1257 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m1_7120(__this, method) (( Enumerator_t1_1258  (*) (KeyCollection_t1_1257 *, const MethodInfo*))KeyCollection_GetEnumerator_m1_7120_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m1_7121_gshared (KeyCollection_t1_1257 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1_7121(__this, method) (( int32_t (*) (KeyCollection_t1_1257 *, const MethodInfo*))KeyCollection_get_Count_m1_7121_gshared)(__this, method)
