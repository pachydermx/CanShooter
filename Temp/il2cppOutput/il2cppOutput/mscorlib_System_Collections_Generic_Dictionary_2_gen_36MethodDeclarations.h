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
struct Dictionary_2_t1_1542;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1282;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2215;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t1_2243;
// System.Collections.ICollection
struct ICollection_t1_860;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1_2242;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1_2244;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1_1546;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1_1550;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m1_10434_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10434(__this, method) (( void (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2__ctor_m1_10434_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_10435_gshared (Dictionary_2_t1_1542 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10435(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1542 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_10435_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_10437_gshared (Dictionary_2_t1_1542 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10437(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1542 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_10437_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_10439_gshared (Dictionary_2_t1_1542 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10439(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1542 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_10439_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10441_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10441(__this, method) (( Object_t* (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10441_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10443_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10443(__this, method) (( Object_t* (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10443_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10445_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10445(__this, method) (( Object_t * (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10445_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_10447_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_10447(__this, method) (( Object_t * (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_10447_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10449_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10449(__this, method) (( bool (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10449_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10451_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10451(__this, method) (( bool (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10451_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_10453_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_10453(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1542 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_10453_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_10455_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_10455(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1542 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_10455_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_10457_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_10457(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1542 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_10457_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_10459_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_10459(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1542 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_10459_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_10461_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_10461(__this, ___key, method) (( void (*) (Dictionary_2_t1_1542 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_10461_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10463_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10463(__this, method) (( bool (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10463_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10465_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10465(__this, method) (( Object_t * (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10465_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10467_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10467(__this, method) (( bool (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10469_gshared (Dictionary_2_t1_1542 * __this, KeyValuePair_2_t1_1544  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10469(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1542 *, KeyValuePair_2_t1_1544 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10469_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10471_gshared (Dictionary_2_t1_1542 * __this, KeyValuePair_2_t1_1544  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10471(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1542 *, KeyValuePair_2_t1_1544 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10471_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10473_gshared (Dictionary_2_t1_1542 * __this, KeyValuePair_2U5BU5D_t1_2242* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10473(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1542 *, KeyValuePair_2U5BU5D_t1_2242*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10473_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10475_gshared (Dictionary_2_t1_1542 * __this, KeyValuePair_2_t1_1544  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10475(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1542 *, KeyValuePair_2_t1_1544 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10475_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_10477_gshared (Dictionary_2_t1_1542 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_10477(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1542 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_10477_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10479_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10479(__this, method) (( Object_t * (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10479_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10481_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10481(__this, method) (( Object_t* (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10481_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10483_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10483(__this, method) (( Object_t * (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_10485_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_10485(__this, method) (( int32_t (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_get_Count_m1_10485_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m1_10487_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_10487(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1542 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_10487_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_10489_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_10489(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1542 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m1_10489_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_10491_gshared (Dictionary_2_t1_1542 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_10491(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1542 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_10491_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_10493_gshared (Dictionary_2_t1_1542 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_10493(__this, ___size, method) (( void (*) (Dictionary_2_t1_1542 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_10493_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_10495_gshared (Dictionary_2_t1_1542 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_10495(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1542 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_10495_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1544  Dictionary_2_make_pair_m1_10497_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_10497(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1544  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m1_10497_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_10499_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_10499(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m1_10499_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m1_10501_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_10501(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m1_10501_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_10503_gshared (Dictionary_2_t1_1542 * __this, KeyValuePair_2U5BU5D_t1_2242* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_10503(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1542 *, KeyValuePair_2U5BU5D_t1_2242*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_10503_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m1_10505_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_10505(__this, method) (( void (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_Resize_m1_10505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_10507_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_10507(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1542 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m1_10507_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m1_10509_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_10509(__this, method) (( void (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_Clear_m1_10509_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_10511_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_10511(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1542 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_10511_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_10513_gshared (Dictionary_2_t1_1542 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_10513(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1542 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m1_10513_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_10515_gshared (Dictionary_2_t1_1542 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_10515(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1542 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_10515_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_10517_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_10517(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1542 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_10517_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_10519_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_10519(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1542 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_10519_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_10521_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_10521(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1542 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1_10521_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t1_1546 * Dictionary_2_get_Keys_m1_10523_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_10523(__this, method) (( KeyCollection_t1_1546 * (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_get_Keys_m1_10523_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1_1550 * Dictionary_2_get_Values_m1_10525_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_10525(__this, method) (( ValueCollection_t1_1550 * (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_get_Values_m1_10525_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_10527_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_10527(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1542 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_10527_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m1_10529_gshared (Dictionary_2_t1_1542 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_10529(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1542 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_10529_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_10531_gshared (Dictionary_2_t1_1542 * __this, KeyValuePair_2_t1_1544  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_10531(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1542 *, KeyValuePair_2_t1_1544 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_10531_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1548  Dictionary_2_GetEnumerator_m1_10533_gshared (Dictionary_2_t1_1542 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_10533(__this, method) (( Enumerator_t1_1548  (*) (Dictionary_2_t1_1542 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_10533_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_10535_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_10535(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_10535_gshared)(__this /* static, unused */, ___key, ___value, method)
