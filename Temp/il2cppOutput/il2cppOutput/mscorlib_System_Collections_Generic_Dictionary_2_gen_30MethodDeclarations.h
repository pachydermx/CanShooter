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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1_952;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1466;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_1826;
// System.Collections.ICollection
struct ICollection_t1_858;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1_1856;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t1_1857;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_468;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t1_1469;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t1_1473;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m1_10277_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10277(__this, method) (( void (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2__ctor_m1_10277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_10278_gshared (Dictionary_2_t1_952 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10278(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_952 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_10278_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_10279_gshared (Dictionary_2_t1_952 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10279(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_952 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_10279_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_10280_gshared (Dictionary_2_t1_952 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10280(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_952 *, SerializationInfo_t1_178 *, StreamingContext_t1_524 , const MethodInfo*))Dictionary_2__ctor_m1_10280_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10281_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10281(__this, method) (( Object_t* (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10281_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10282_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10282(__this, method) (( Object_t* (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10282_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10283_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10283(__this, method) (( Object_t * (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_10283_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_10284_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_10284(__this, method) (( Object_t * (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_10284_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10285_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10285(__this, method) (( bool (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_10285_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10286_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10286(__this, method) (( bool (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_10286_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_10287_gshared (Dictionary_2_t1_952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_10287(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_952 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_10287_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_10288_gshared (Dictionary_2_t1_952 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_10288(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_952 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_10288_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_10289_gshared (Dictionary_2_t1_952 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_10289(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_952 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_10289_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_10290_gshared (Dictionary_2_t1_952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_10290(__this, ___key, method) (( bool (*) (Dictionary_2_t1_952 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_10290_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_10291_gshared (Dictionary_2_t1_952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_10291(__this, ___key, method) (( void (*) (Dictionary_2_t1_952 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_10291_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10292_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10292(__this, method) (( bool (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10292_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10293_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10293(__this, method) (( Object_t * (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10293_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10294_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10294(__this, method) (( bool (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10294_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10295_gshared (Dictionary_2_t1_952 * __this, KeyValuePair_2_t1_1467  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10295(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_952 *, KeyValuePair_2_t1_1467 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10295_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10296_gshared (Dictionary_2_t1_952 * __this, KeyValuePair_2_t1_1467  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10296(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_952 *, KeyValuePair_2_t1_1467 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10296_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10297_gshared (Dictionary_2_t1_952 * __this, KeyValuePair_2U5BU5D_t1_1856* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10297(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_952 *, KeyValuePair_2U5BU5D_t1_1856*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10297_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10298_gshared (Dictionary_2_t1_952 * __this, KeyValuePair_2_t1_1467  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10298(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_952 *, KeyValuePair_2_t1_1467 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10298_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_10299_gshared (Dictionary_2_t1_952 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_10299(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_952 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_10299_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10300_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10300(__this, method) (( Object_t * (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10300_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10301_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10301(__this, method) (( Object_t* (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10301_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10302_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10302(__this, method) (( Object_t * (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10302_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_10303_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_10303(__this, method) (( int32_t (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_get_Count_m1_10303_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m1_10304_gshared (Dictionary_2_t1_952 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_10304(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_952 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_10304_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_10305_gshared (Dictionary_2_t1_952 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_10305(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_952 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m1_10305_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_10306_gshared (Dictionary_2_t1_952 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_10306(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_952 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_10306_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_10307_gshared (Dictionary_2_t1_952 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_10307(__this, ___size, method) (( void (*) (Dictionary_2_t1_952 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_10307_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_10308_gshared (Dictionary_2_t1_952 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_10308(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_952 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_10308_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1467  Dictionary_2_make_pair_m1_10309_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_10309(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1467  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m1_10309_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m1_10310_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_10310(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m1_10310_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m1_10311_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_10311(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m1_10311_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_10312_gshared (Dictionary_2_t1_952 * __this, KeyValuePair_2U5BU5D_t1_1856* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_10312(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_952 *, KeyValuePair_2U5BU5D_t1_1856*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_10312_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m1_10313_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_10313(__this, method) (( void (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_Resize_m1_10313_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_10314_gshared (Dictionary_2_t1_952 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_10314(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_952 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m1_10314_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m1_10315_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_10315(__this, method) (( void (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_Clear_m1_10315_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_10316_gshared (Dictionary_2_t1_952 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_10316(__this, ___key, method) (( bool (*) (Dictionary_2_t1_952 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_10316_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_10317_gshared (Dictionary_2_t1_952 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_10317(__this, ___value, method) (( bool (*) (Dictionary_2_t1_952 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_10317_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_10318_gshared (Dictionary_2_t1_952 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_10318(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_952 *, SerializationInfo_t1_178 *, StreamingContext_t1_524 , const MethodInfo*))Dictionary_2_GetObjectData_m1_10318_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_10319_gshared (Dictionary_2_t1_952 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_10319(__this, ___sender, method) (( void (*) (Dictionary_2_t1_952 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_10319_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_10320_gshared (Dictionary_2_t1_952 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_10320(__this, ___key, method) (( bool (*) (Dictionary_2_t1_952 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_10320_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_10321_gshared (Dictionary_2_t1_952 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_10321(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_952 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_10321_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t1_1469 * Dictionary_2_get_Keys_m1_10322_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_10322(__this, method) (( KeyCollection_t1_1469 * (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_get_Keys_m1_10322_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t1_1473 * Dictionary_2_get_Values_m1_10323_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_10323(__this, method) (( ValueCollection_t1_1473 * (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_get_Values_m1_10323_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_10324_gshared (Dictionary_2_t1_952 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_10324(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_952 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_10324_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m1_10325_gshared (Dictionary_2_t1_952 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_10325(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1_952 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_10325_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_10326_gshared (Dictionary_2_t1_952 * __this, KeyValuePair_2_t1_1467  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_10326(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_952 *, KeyValuePair_2_t1_1467 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_10326_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1471  Dictionary_2_GetEnumerator_m1_10327_gshared (Dictionary_2_t1_952 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_10327(__this, method) (( Enumerator_t1_1471  (*) (Dictionary_2_t1_952 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_10327_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_10328_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_10328(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_10328_gshared)(__this /* static, unused */, ___key, ___value, method)
