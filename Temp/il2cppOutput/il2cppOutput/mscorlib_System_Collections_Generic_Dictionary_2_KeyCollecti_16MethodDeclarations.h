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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t1_1469;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1_952;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_1828;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1_161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_17.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m1_10341_gshared (KeyCollection_t1_1469 * __this, Dictionary_2_t1_952 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1_10341(__this, ___dictionary, method) (( void (*) (KeyCollection_t1_1469 *, Dictionary_2_t1_952 *, const MethodInfo*))KeyCollection__ctor_m1_10341_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_10342_gshared (KeyCollection_t1_1469 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_10342(__this, ___item, method) (( void (*) (KeyCollection_t1_1469 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_10342_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_10343_gshared (KeyCollection_t1_1469 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_10343(__this, method) (( void (*) (KeyCollection_t1_1469 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_10343_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_10344_gshared (KeyCollection_t1_1469 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_10344(__this, ___item, method) (( bool (*) (KeyCollection_t1_1469 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_10344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_10345_gshared (KeyCollection_t1_1469 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_10345(__this, ___item, method) (( bool (*) (KeyCollection_t1_1469 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_10345_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_10346_gshared (KeyCollection_t1_1469 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_10346(__this, method) (( Object_t* (*) (KeyCollection_t1_1469 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_10346_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m1_10347_gshared (KeyCollection_t1_1469 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1_10347(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1469 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1_10347_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_10348_gshared (KeyCollection_t1_1469 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_10348(__this, method) (( Object_t * (*) (KeyCollection_t1_1469 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_10348_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_10349_gshared (KeyCollection_t1_1469 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_10349(__this, method) (( bool (*) (KeyCollection_t1_1469 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_10349_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_10350_gshared (KeyCollection_t1_1469 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_10350(__this, method) (( bool (*) (KeyCollection_t1_1469 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_10350_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_10351_gshared (KeyCollection_t1_1469 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_10351(__this, method) (( Object_t * (*) (KeyCollection_t1_1469 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_10351_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m1_10352_gshared (KeyCollection_t1_1469 * __this, Int32U5BU5D_t1_161* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1_10352(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1469 *, Int32U5BU5D_t1_161*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1_10352_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1470  KeyCollection_GetEnumerator_m1_10353_gshared (KeyCollection_t1_1469 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m1_10353(__this, method) (( Enumerator_t1_1470  (*) (KeyCollection_t1_1469 *, const MethodInfo*))KeyCollection_GetEnumerator_m1_10353_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m1_10354_gshared (KeyCollection_t1_1469 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1_10354(__this, method) (( int32_t (*) (KeyCollection_t1_1469 *, const MethodInfo*))KeyCollection_get_Count_m1_10354_gshared)(__this, method)
