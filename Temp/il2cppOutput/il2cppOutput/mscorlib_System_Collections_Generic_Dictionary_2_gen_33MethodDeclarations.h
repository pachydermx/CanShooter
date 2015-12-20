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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1_1279;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1281;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2209;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_2212;
// System.Collections.ICollection
struct ICollection_t1_860;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1_2211;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1_2213;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1_1285;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1_1289;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6850_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6850(__this, method) (( void (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2__ctor_m1_6850_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6852_gshared (Dictionary_2_t1_1279 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6852(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1279 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6852_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_6853_gshared (Dictionary_2_t1_1279 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6853(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1279 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_6853_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_6855_gshared (Dictionary_2_t1_1279 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6855(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1279 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_6855_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6857_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6857(__this, method) (( Object_t* (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6857_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6859_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6859(__this, method) (( Object_t* (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6859_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_6861_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_6861(__this, method) (( Object_t * (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_6861_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_6863_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_6863(__this, method) (( Object_t * (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_6863_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_6865_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_6865(__this, method) (( bool (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_6865_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_6867_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_6867(__this, method) (( bool (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_6867_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_6869_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_6869(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1279 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_6869_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_6871_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_6871(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1279 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_6871_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_6873_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_6873(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1279 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_6873_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_6875_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_6875(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1279 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_6875_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_6877_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_6877(__this, ___key, method) (( void (*) (Dictionary_2_t1_1279 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_6877_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6879_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6879(__this, method) (( bool (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6879_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6881_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6881(__this, method) (( Object_t * (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6881_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6883_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6883(__this, method) (( bool (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6883_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6885_gshared (Dictionary_2_t1_1279 * __this, KeyValuePair_2_t1_1282  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6885(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1279 *, KeyValuePair_2_t1_1282 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6885_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6887_gshared (Dictionary_2_t1_1279 * __this, KeyValuePair_2_t1_1282  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6887(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1279 *, KeyValuePair_2_t1_1282 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6887_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6889_gshared (Dictionary_2_t1_1279 * __this, KeyValuePair_2U5BU5D_t1_2211* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6889(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1279 *, KeyValuePair_2U5BU5D_t1_2211*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6889_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6891_gshared (Dictionary_2_t1_1279 * __this, KeyValuePair_2_t1_1282  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6891(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1279 *, KeyValuePair_2_t1_1282 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6891_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_6893_gshared (Dictionary_2_t1_1279 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_6893(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1279 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_6893_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6895_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6895(__this, method) (( Object_t * (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6895_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6897_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6897(__this, method) (( Object_t* (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6897_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6899_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6899(__this, method) (( Object_t * (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6899_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_6901_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_6901(__this, method) (( int32_t (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_get_Count_m1_6901_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m1_6903_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_6903(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1279 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_6903_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6905_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6905(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1279 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m1_6905_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6907_gshared (Dictionary_2_t1_1279 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6907(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1279 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6907_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6909_gshared (Dictionary_2_t1_1279 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6909(__this, ___size, method) (( void (*) (Dictionary_2_t1_1279 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6909_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6911_gshared (Dictionary_2_t1_1279 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6911(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1279 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6911_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1282  Dictionary_2_make_pair_m1_6913_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6913(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1282  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m1_6913_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_6915_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_6915(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m1_6915_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m1_6917_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_6917(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m1_6917_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6919_gshared (Dictionary_2_t1_1279 * __this, KeyValuePair_2U5BU5D_t1_2211* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6919(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1279 *, KeyValuePair_2U5BU5D_t1_2211*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6919_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m1_6921_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6921(__this, method) (( void (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_Resize_m1_6921_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6923_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6923(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1279 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m1_6923_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m1_6925_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6925(__this, method) (( void (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_Clear_m1_6925_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6927_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6927(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1279 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6927_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_6929_gshared (Dictionary_2_t1_1279 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_6929(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1279 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_6929_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6931_gshared (Dictionary_2_t1_1279 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6931(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1279 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6931_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6933_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6933(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1279 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6933_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6935_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6935(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1279 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6935_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6937_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6937(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1279 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_6937_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1_1285 * Dictionary_2_get_Keys_m1_6939_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_6939(__this, method) (( KeyCollection_t1_1285 * (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_get_Keys_m1_6939_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1_1289 * Dictionary_2_get_Values_m1_6941_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_6941(__this, method) (( ValueCollection_t1_1289 * (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_get_Values_m1_6941_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6943_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6943(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1279 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6943_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m1_6945_gshared (Dictionary_2_t1_1279 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6945(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1_1279 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6945_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6947_gshared (Dictionary_2_t1_1279 * __this, KeyValuePair_2_t1_1282  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6947(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1279 *, KeyValuePair_2_t1_1282 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6947_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1287  Dictionary_2_GetEnumerator_m1_6949_gshared (Dictionary_2_t1_1279 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6949(__this, method) (( Enumerator_t1_1287  (*) (Dictionary_2_t1_1279 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6949_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_6951_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6951(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6951_gshared)(__this /* static, unused */, ___key, ___value, method)
