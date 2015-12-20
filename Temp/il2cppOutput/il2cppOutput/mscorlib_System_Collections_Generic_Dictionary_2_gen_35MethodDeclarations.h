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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1541;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1281;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2209;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t1_2237;
// System.Collections.ICollection
struct ICollection_t1_860;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1_2236;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1_2238;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1_1545;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1_1549;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m1_10433_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10433(__this, method) (( void (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2__ctor_m1_10433_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_10434_gshared (Dictionary_2_t1_1541 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10434(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1541 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_10434_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_10436_gshared (Dictionary_2_t1_1541 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10436(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1541 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_10436_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_10438_gshared (Dictionary_2_t1_1541 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10438(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1541 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_10438_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10440_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10440(__this, method) (( Object_t* (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10440_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10442_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10442(__this, method) (( Object_t* (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10442_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10444_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10444(__this, method) (( Object_t * (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10444_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_10446_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_10446(__this, method) (( Object_t * (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_10446_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10448_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10448(__this, method) (( bool (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10448_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10450_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10450(__this, method) (( bool (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10450_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_10452_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_10452(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1541 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_10452_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_10454_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_10454(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1541 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_10454_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_10456_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_10456(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1541 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_10456_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_10458_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_10458(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1541 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_10458_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_10460_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_10460(__this, ___key, method) (( void (*) (Dictionary_2_t1_1541 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_10460_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10462_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10462(__this, method) (( bool (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10462_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10464_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10464(__this, method) (( Object_t * (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10464_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10466_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10466(__this, method) (( bool (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10466_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10468_gshared (Dictionary_2_t1_1541 * __this, KeyValuePair_2_t1_1543  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10468(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1541 *, KeyValuePair_2_t1_1543 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10468_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10470_gshared (Dictionary_2_t1_1541 * __this, KeyValuePair_2_t1_1543  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10470(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1541 *, KeyValuePair_2_t1_1543 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10470_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10472_gshared (Dictionary_2_t1_1541 * __this, KeyValuePair_2U5BU5D_t1_2236* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10472(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1541 *, KeyValuePair_2U5BU5D_t1_2236*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10472_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10474_gshared (Dictionary_2_t1_1541 * __this, KeyValuePair_2_t1_1543  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10474(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1541 *, KeyValuePair_2_t1_1543 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10474_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_10476_gshared (Dictionary_2_t1_1541 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_10476(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1541 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_10476_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10478_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10478(__this, method) (( Object_t * (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10478_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10480_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10480(__this, method) (( Object_t* (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10480_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10482_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10482(__this, method) (( Object_t * (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10482_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_10484_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_10484(__this, method) (( int32_t (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_get_Count_m1_10484_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m1_10486_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_10486(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1541 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_10486_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_10488_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_10488(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1541 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m1_10488_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_10490_gshared (Dictionary_2_t1_1541 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_10490(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1541 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_10490_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_10492_gshared (Dictionary_2_t1_1541 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_10492(__this, ___size, method) (( void (*) (Dictionary_2_t1_1541 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_10492_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_10494_gshared (Dictionary_2_t1_1541 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_10494(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1541 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_10494_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1543  Dictionary_2_make_pair_m1_10496_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_10496(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1543  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m1_10496_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_10498_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_10498(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m1_10498_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m1_10500_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_10500(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m1_10500_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_10502_gshared (Dictionary_2_t1_1541 * __this, KeyValuePair_2U5BU5D_t1_2236* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_10502(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1541 *, KeyValuePair_2U5BU5D_t1_2236*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_10502_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m1_10504_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_10504(__this, method) (( void (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_Resize_m1_10504_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_10506_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_10506(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1541 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m1_10506_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m1_10508_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_10508(__this, method) (( void (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_Clear_m1_10508_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_10510_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_10510(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1541 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_10510_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_10512_gshared (Dictionary_2_t1_1541 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_10512(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1541 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m1_10512_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_10514_gshared (Dictionary_2_t1_1541 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_10514(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1541 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_10514_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_10516_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_10516(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1541 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_10516_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_10518_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_10518(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1541 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_10518_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_10520_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_10520(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1541 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1_10520_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t1_1545 * Dictionary_2_get_Keys_m1_10522_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_10522(__this, method) (( KeyCollection_t1_1545 * (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_get_Keys_m1_10522_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1_1549 * Dictionary_2_get_Values_m1_10524_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_10524(__this, method) (( ValueCollection_t1_1549 * (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_get_Values_m1_10524_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_10526_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_10526(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1541 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_10526_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m1_10528_gshared (Dictionary_2_t1_1541 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_10528(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1541 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_10528_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_10530_gshared (Dictionary_2_t1_1541 * __this, KeyValuePair_2_t1_1543  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_10530(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1541 *, KeyValuePair_2_t1_1543 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_10530_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1547  Dictionary_2_GetEnumerator_m1_10532_gshared (Dictionary_2_t1_1541 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_10532(__this, method) (( Enumerator_t1_1547  (*) (Dictionary_2_t1_1541 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_10532_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_10534_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_10534(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_10534_gshared)(__this /* static, unused */, ___key, ___value, method)
