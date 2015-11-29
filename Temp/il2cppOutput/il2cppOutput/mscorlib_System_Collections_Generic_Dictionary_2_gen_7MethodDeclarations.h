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
struct Dictionary_2_t1_1017;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1466;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_1826;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_1823;
// System.Collections.ICollection
struct ICollection_t1_858;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1871;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1_1872;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_468;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1_1535;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1539;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6116_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6116(__this, method) (( void (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2__ctor_m1_6116_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_11089_gshared (Dictionary_2_t1_1017 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_11089(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1017 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_11089_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_11091_gshared (Dictionary_2_t1_1017 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_11091(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1017 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_11091_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_11093_gshared (Dictionary_2_t1_1017 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_11093(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1017 *, SerializationInfo_t1_178 *, StreamingContext_t1_524 , const MethodInfo*))Dictionary_2__ctor_m1_11093_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_11095_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_11095(__this, method) (( Object_t* (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_11095_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_11097_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_11097(__this, method) (( Object_t* (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_11097_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_11099_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_11099(__this, method) (( Object_t * (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_11099_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_11101_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_11101(__this, method) (( Object_t * (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_11101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_11103_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_11103(__this, method) (( bool (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_11103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_11105_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_11105(__this, method) (( bool (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_11105_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_11107_gshared (Dictionary_2_t1_1017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_11107(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1017 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_11107_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_11109_gshared (Dictionary_2_t1_1017 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_11109(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1017 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_11109_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_11111_gshared (Dictionary_2_t1_1017 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_11111(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1017 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_11111_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_11113_gshared (Dictionary_2_t1_1017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_11113(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1017 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_11113_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_11115_gshared (Dictionary_2_t1_1017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_11115(__this, ___key, method) (( void (*) (Dictionary_2_t1_1017 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_11115_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_11117_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_11117(__this, method) (( bool (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_11117_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_11119_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_11119(__this, method) (( Object_t * (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_11119_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_11121_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_11121(__this, method) (( bool (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_11121_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_11123_gshared (Dictionary_2_t1_1017 * __this, KeyValuePair_2_t1_1533  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_11123(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1017 *, KeyValuePair_2_t1_1533 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_11123_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_11125_gshared (Dictionary_2_t1_1017 * __this, KeyValuePair_2_t1_1533  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_11125(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1017 *, KeyValuePair_2_t1_1533 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_11125_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_11127_gshared (Dictionary_2_t1_1017 * __this, KeyValuePair_2U5BU5D_t1_1871* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_11127(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1017 *, KeyValuePair_2U5BU5D_t1_1871*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_11127_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_11129_gshared (Dictionary_2_t1_1017 * __this, KeyValuePair_2_t1_1533  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_11129(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1017 *, KeyValuePair_2_t1_1533 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_11129_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_11131_gshared (Dictionary_2_t1_1017 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_11131(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1017 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_11131_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_11133_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_11133(__this, method) (( Object_t * (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_11133_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_11135_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_11135(__this, method) (( Object_t* (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_11135_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_11137_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_11137(__this, method) (( Object_t * (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_11137_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_11139_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_11139(__this, method) (( int32_t (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_get_Count_m1_11139_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_11141_gshared (Dictionary_2_t1_1017 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_11141(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1017 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_11141_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_11143_gshared (Dictionary_2_t1_1017 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_11143(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1017 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_11143_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_11145_gshared (Dictionary_2_t1_1017 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_11145(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1017 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_11145_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_11147_gshared (Dictionary_2_t1_1017 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_11147(__this, ___size, method) (( void (*) (Dictionary_2_t1_1017 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_11147_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_11149_gshared (Dictionary_2_t1_1017 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_11149(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1017 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_11149_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1533  Dictionary_2_make_pair_m1_11151_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_11151(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1533  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_11151_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m1_11153_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_11153(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m1_11153_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_11155_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_11155(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_11155_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_11157_gshared (Dictionary_2_t1_1017 * __this, KeyValuePair_2U5BU5D_t1_1871* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_11157(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1017 *, KeyValuePair_2U5BU5D_t1_1871*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_11157_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_11159_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_11159(__this, method) (( void (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_Resize_m1_11159_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_11161_gshared (Dictionary_2_t1_1017 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_11161(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1017 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_11161_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_11163_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_11163(__this, method) (( void (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_Clear_m1_11163_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_11165_gshared (Dictionary_2_t1_1017 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_11165(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1017 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_11165_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_11167_gshared (Dictionary_2_t1_1017 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_11167(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1017 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_11167_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_11169_gshared (Dictionary_2_t1_1017 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_11169(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1017 *, SerializationInfo_t1_178 *, StreamingContext_t1_524 , const MethodInfo*))Dictionary_2_GetObjectData_m1_11169_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_11171_gshared (Dictionary_2_t1_1017 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_11171(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1017 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_11171_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_11173_gshared (Dictionary_2_t1_1017 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_11173(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1017 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_11173_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_11175_gshared (Dictionary_2_t1_1017 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_11175(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1017 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_11175_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1_1535 * Dictionary_2_get_Keys_m1_11177_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_11177(__this, method) (( KeyCollection_t1_1535 * (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_get_Keys_m1_11177_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1_1539 * Dictionary_2_get_Values_m1_11179_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_11179(__this, method) (( ValueCollection_t1_1539 * (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_get_Values_m1_11179_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_11181_gshared (Dictionary_2_t1_1017 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_11181(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1017 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_11181_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_11183_gshared (Dictionary_2_t1_1017 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_11183(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1017 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_11183_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_11185_gshared (Dictionary_2_t1_1017 * __this, KeyValuePair_2_t1_1533  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_11185(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1017 *, KeyValuePair_2_t1_1533 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_11185_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1537  Dictionary_2_GetEnumerator_m1_11187_gshared (Dictionary_2_t1_1017 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_11187(__this, method) (( Enumerator_t1_1537  (*) (Dictionary_2_t1_1017 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_11187_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_11189_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_11189(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_11189_gshared)(__this /* static, unused */, ___key, ___value, method)
