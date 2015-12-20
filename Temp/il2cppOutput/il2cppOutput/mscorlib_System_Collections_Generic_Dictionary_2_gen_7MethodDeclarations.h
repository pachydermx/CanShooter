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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1020;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1568;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_2212;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2209;
// System.Collections.ICollection
struct ICollection_t1_860;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_2272;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1_2273;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1_1709;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1713;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6131_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6131(__this, method) (( void (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2__ctor_m1_6131_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_12532_gshared (Dictionary_2_t1_1020 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_12532(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_12532_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_12534_gshared (Dictionary_2_t1_1020 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_12534(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1020 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_12534_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_12536_gshared (Dictionary_2_t1_1020 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_12536(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1020 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_12536_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_12538_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_12538(__this, method) (( Object_t* (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_12538_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_12540_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_12540(__this, method) (( Object_t* (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_12540_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_12542_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_12542(__this, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_12542_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_12544_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_12544(__this, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_12544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_12546_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_12546(__this, method) (( bool (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_12546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_12548_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_12548(__this, method) (( bool (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_12548_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_12550_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_12550(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_12550_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_12552_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_12552(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_12552_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_12554_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_12554(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_12554_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_12556_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_12556(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_12556_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_12558_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_12558(__this, ___key, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_12558_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_12560_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_12560(__this, method) (( bool (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_12560_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_12562_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_12562(__this, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_12562_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_12564_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_12564(__this, method) (( bool (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_12564_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_12566_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2_t1_1707  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_12566(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1020 *, KeyValuePair_2_t1_1707 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_12566_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_12568_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2_t1_1707  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_12568(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1020 *, KeyValuePair_2_t1_1707 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_12568_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_12570_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2U5BU5D_t1_2272* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_12570(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1020 *, KeyValuePair_2U5BU5D_t1_2272*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_12570_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_12572_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2_t1_1707  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_12572(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1020 *, KeyValuePair_2_t1_1707 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_12572_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_12574_gshared (Dictionary_2_t1_1020 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_12574(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1020 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_12574_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_12576_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_12576(__this, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_12576_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_12578_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_12578(__this, method) (( Object_t* (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_12578_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_12580_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_12580(__this, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_12580_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_12582_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_12582(__this, method) (( int32_t (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_get_Count_m1_12582_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_12584_gshared (Dictionary_2_t1_1020 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_12584(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_12584_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_12586_gshared (Dictionary_2_t1_1020 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_12586(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1020 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_12586_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_12588_gshared (Dictionary_2_t1_1020 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_12588(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1020 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_12588_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_12590_gshared (Dictionary_2_t1_1020 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_12590(__this, ___size, method) (( void (*) (Dictionary_2_t1_1020 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_12590_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_12592_gshared (Dictionary_2_t1_1020 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_12592(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1020 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_12592_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1707  Dictionary_2_make_pair_m1_12594_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_12594(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1707  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_12594_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m1_12596_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_12596(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m1_12596_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_12598_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_12598(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_12598_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_12600_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2U5BU5D_t1_2272* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_12600(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1020 *, KeyValuePair_2U5BU5D_t1_2272*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_12600_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_12602_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_12602(__this, method) (( void (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_Resize_m1_12602_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_12604_gshared (Dictionary_2_t1_1020 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_12604(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1020 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_12604_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_12606_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_12606(__this, method) (( void (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_Clear_m1_12606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_12608_gshared (Dictionary_2_t1_1020 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_12608(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1020 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_12608_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_12610_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_12610(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_12610_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_12612_gshared (Dictionary_2_t1_1020 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_12612(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1020 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_12612_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_12614_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_12614(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_12614_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_12616_gshared (Dictionary_2_t1_1020 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_12616(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1020 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_12616_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_12618_gshared (Dictionary_2_t1_1020 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_12618(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1020 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_12618_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1_1709 * Dictionary_2_get_Keys_m1_12620_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_12620(__this, method) (( KeyCollection_t1_1709 * (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_get_Keys_m1_12620_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1_1713 * Dictionary_2_get_Values_m1_12622_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_12622(__this, method) (( ValueCollection_t1_1713 * (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_get_Values_m1_12622_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_12624_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_12624(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_12624_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_12626_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_12626(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_12626_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_12628_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2_t1_1707  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_12628(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1020 *, KeyValuePair_2_t1_1707 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_12628_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1711  Dictionary_2_GetEnumerator_m1_12630_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_12630(__this, method) (( Enumerator_t1_1711  (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_12630_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_12632_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_12632(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_12632_gshared)(__this /* static, unused */, ___key, ___value, method)
