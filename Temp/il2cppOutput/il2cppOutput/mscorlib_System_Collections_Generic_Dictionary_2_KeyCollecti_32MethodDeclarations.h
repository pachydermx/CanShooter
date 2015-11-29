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
struct KeyCollection_t1_1674;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t1_1670;
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
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_33.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m1_13882_gshared (KeyCollection_t1_1674 * __this, Dictionary_2_t1_1670 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1_13882(__this, ___dictionary, method) (( void (*) (KeyCollection_t1_1674 *, Dictionary_2_t1_1670 *, const MethodInfo*))KeyCollection__ctor_m1_13882_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_13883_gshared (KeyCollection_t1_1674 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_13883(__this, ___item, method) (( void (*) (KeyCollection_t1_1674 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_13883_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_13884_gshared (KeyCollection_t1_1674 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_13884(__this, method) (( void (*) (KeyCollection_t1_1674 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_13884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_13885_gshared (KeyCollection_t1_1674 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_13885(__this, ___item, method) (( bool (*) (KeyCollection_t1_1674 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_13885_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_13886_gshared (KeyCollection_t1_1674 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_13886(__this, ___item, method) (( bool (*) (KeyCollection_t1_1674 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_13886_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_13887_gshared (KeyCollection_t1_1674 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_13887(__this, method) (( Object_t* (*) (KeyCollection_t1_1674 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_13887_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m1_13888_gshared (KeyCollection_t1_1674 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1_13888(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1674 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1_13888_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_13889_gshared (KeyCollection_t1_1674 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_13889(__this, method) (( Object_t * (*) (KeyCollection_t1_1674 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_13889_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_13890_gshared (KeyCollection_t1_1674 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_13890(__this, method) (( bool (*) (KeyCollection_t1_1674 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_13890_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_13891_gshared (KeyCollection_t1_1674 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_13891(__this, method) (( bool (*) (KeyCollection_t1_1674 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_13891_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_13892_gshared (KeyCollection_t1_1674 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_13892(__this, method) (( Object_t * (*) (KeyCollection_t1_1674 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_13892_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m1_13893_gshared (KeyCollection_t1_1674 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1_13893(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1674 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1_13893_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t1_1675  KeyCollection_GetEnumerator_m1_13894_gshared (KeyCollection_t1_1674 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m1_13894(__this, method) (( Enumerator_t1_1675  (*) (KeyCollection_t1_1674 *, const MethodInfo*))KeyCollection_GetEnumerator_m1_13894_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m1_13895_gshared (KeyCollection_t1_1674 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1_13895(__this, method) (( int32_t (*) (KeyCollection_t1_1674 *, const MethodInfo*))KeyCollection_get_Count_m1_13895_gshared)(__this, method)
