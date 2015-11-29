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
struct Dictionary_2_t1_1223;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1225;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_1823;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_1826;
// System.Collections.ICollection
struct ICollection_t1_858;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1_1825;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1_1827;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_468;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1_1229;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1_1233;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6752_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6752(__this, method) (( void (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2__ctor_m1_6752_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6754_gshared (Dictionary_2_t1_1223 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6754(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1223 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6754_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_6755_gshared (Dictionary_2_t1_1223 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6755(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1223 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_6755_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_6757_gshared (Dictionary_2_t1_1223 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6757(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1223 *, SerializationInfo_t1_178 *, StreamingContext_t1_524 , const MethodInfo*))Dictionary_2__ctor_m1_6757_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6759_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6759(__this, method) (( Object_t* (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6759_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6761_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6761(__this, method) (( Object_t* (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6761_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_6763_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_6763(__this, method) (( Object_t * (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_6763_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_6765_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_6765(__this, method) (( Object_t * (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_6765_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_6767_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_6767(__this, method) (( bool (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_6767_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_6769_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_6769(__this, method) (( bool (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_6769_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_6771_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_6771(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1223 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_6771_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_6773_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_6773(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1223 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_6773_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_6775_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_6775(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1223 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_6775_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_6777_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_6777(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1223 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_6777_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_6779_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_6779(__this, ___key, method) (( void (*) (Dictionary_2_t1_1223 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_6779_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6781_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6781(__this, method) (( bool (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6781_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6783_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6783(__this, method) (( Object_t * (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6783_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6785_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6785(__this, method) (( bool (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6785_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6787_gshared (Dictionary_2_t1_1223 * __this, KeyValuePair_2_t1_1226  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6787(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1223 *, KeyValuePair_2_t1_1226 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6787_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6789_gshared (Dictionary_2_t1_1223 * __this, KeyValuePair_2_t1_1226  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6789(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1223 *, KeyValuePair_2_t1_1226 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6789_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6791_gshared (Dictionary_2_t1_1223 * __this, KeyValuePair_2U5BU5D_t1_1825* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6791(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1223 *, KeyValuePair_2U5BU5D_t1_1825*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6791_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6793_gshared (Dictionary_2_t1_1223 * __this, KeyValuePair_2_t1_1226  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6793(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1223 *, KeyValuePair_2_t1_1226 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6793_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_6795_gshared (Dictionary_2_t1_1223 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_6795(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1223 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_6795_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6797_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6797(__this, method) (( Object_t * (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6797_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6799_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6799(__this, method) (( Object_t* (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6799_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6801_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6801(__this, method) (( Object_t * (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6801_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_6803_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_6803(__this, method) (( int32_t (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_get_Count_m1_6803_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m1_6805_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_6805(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1223 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_6805_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6807_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6807(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1223 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m1_6807_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6809_gshared (Dictionary_2_t1_1223 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6809(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1223 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6809_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6811_gshared (Dictionary_2_t1_1223 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6811(__this, ___size, method) (( void (*) (Dictionary_2_t1_1223 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6811_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6813_gshared (Dictionary_2_t1_1223 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6813(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1223 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6813_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1226  Dictionary_2_make_pair_m1_6815_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6815(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1226  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m1_6815_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_6817_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_6817(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m1_6817_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m1_6819_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_6819(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m1_6819_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6821_gshared (Dictionary_2_t1_1223 * __this, KeyValuePair_2U5BU5D_t1_1825* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6821(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1223 *, KeyValuePair_2U5BU5D_t1_1825*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6821_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m1_6823_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6823(__this, method) (( void (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_Resize_m1_6823_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6825_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6825(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1223 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m1_6825_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m1_6827_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6827(__this, method) (( void (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_Clear_m1_6827_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6829_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6829(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1223 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6829_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_6831_gshared (Dictionary_2_t1_1223 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_6831(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1223 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_6831_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6833_gshared (Dictionary_2_t1_1223 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6833(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1223 *, SerializationInfo_t1_178 *, StreamingContext_t1_524 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6833_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6835_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6835(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1223 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6835_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6837_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6837(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1223 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6837_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6839_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6839(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1223 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_6839_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1_1229 * Dictionary_2_get_Keys_m1_6841_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_6841(__this, method) (( KeyCollection_t1_1229 * (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_get_Keys_m1_6841_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1_1233 * Dictionary_2_get_Values_m1_6843_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_6843(__this, method) (( ValueCollection_t1_1233 * (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_get_Values_m1_6843_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6845_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6845(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1223 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6845_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m1_6847_gshared (Dictionary_2_t1_1223 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6847(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1_1223 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6847_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6849_gshared (Dictionary_2_t1_1223 * __this, KeyValuePair_2_t1_1226  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6849(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1223 *, KeyValuePair_2_t1_1226 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6849_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1231  Dictionary_2_GetEnumerator_m1_6851_gshared (Dictionary_2_t1_1223 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6851(__this, method) (( Enumerator_t1_1231  (*) (Dictionary_2_t1_1223 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6851_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_6853_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6853(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6853_gshared)(__this /* static, unused */, ___key, ___value, method)
