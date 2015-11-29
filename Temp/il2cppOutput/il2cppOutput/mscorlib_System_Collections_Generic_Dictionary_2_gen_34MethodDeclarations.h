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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t1_1670;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1225;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_1823;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t1_1904;
// System.Collections.ICollection
struct ICollection_t1_858;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t1_1903;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t1_1905;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_468;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t1_1674;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t1_1678;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m1_13767_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_13767(__this, method) (( void (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2__ctor_m1_13767_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_13769_gshared (Dictionary_2_t1_1670 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_13769(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1670 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_13769_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_13771_gshared (Dictionary_2_t1_1670 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_13771(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1670 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_13771_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_13773_gshared (Dictionary_2_t1_1670 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_13773(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1670 *, SerializationInfo_t1_178 *, StreamingContext_t1_524 , const MethodInfo*))Dictionary_2__ctor_m1_13773_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_13775_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_13775(__this, method) (( Object_t* (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_13775_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_13777_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_13777(__this, method) (( Object_t* (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_13777_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_13779_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_13779(__this, method) (( Object_t * (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_13779_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_13781_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_13781(__this, method) (( Object_t * (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_13781_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_13783_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_13783(__this, method) (( bool (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_13783_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_13785_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_13785(__this, method) (( bool (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_13785_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_13787_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_13787(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1670 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_13787_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_13789_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_13789(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1670 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_13789_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_13791_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_13791(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1670 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_13791_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_13793_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_13793(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1670 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_13793_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_13795_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_13795(__this, ___key, method) (( void (*) (Dictionary_2_t1_1670 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_13795_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_13797_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_13797(__this, method) (( bool (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_13797_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_13799_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_13799(__this, method) (( Object_t * (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_13799_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_13801_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_13801(__this, method) (( bool (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_13801_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_13803_gshared (Dictionary_2_t1_1670 * __this, KeyValuePair_2_t1_1672  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_13803(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1670 *, KeyValuePair_2_t1_1672 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_13803_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_13805_gshared (Dictionary_2_t1_1670 * __this, KeyValuePair_2_t1_1672  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_13805(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1670 *, KeyValuePair_2_t1_1672 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_13805_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_13807_gshared (Dictionary_2_t1_1670 * __this, KeyValuePair_2U5BU5D_t1_1903* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_13807(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1670 *, KeyValuePair_2U5BU5D_t1_1903*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_13807_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_13809_gshared (Dictionary_2_t1_1670 * __this, KeyValuePair_2_t1_1672  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_13809(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1670 *, KeyValuePair_2_t1_1672 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_13809_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_13811_gshared (Dictionary_2_t1_1670 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_13811(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1670 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_13811_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_13813_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_13813(__this, method) (( Object_t * (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_13813_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_13815_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_13815(__this, method) (( Object_t* (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_13815_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_13817_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_13817(__this, method) (( Object_t * (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_13817_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_13819_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_13819(__this, method) (( int32_t (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_get_Count_m1_13819_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m1_13821_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_13821(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t1_1670 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_13821_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_13823_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_13823(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1670 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m1_13823_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_13825_gshared (Dictionary_2_t1_1670 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_13825(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1670 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_13825_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_13827_gshared (Dictionary_2_t1_1670 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_13827(__this, ___size, method) (( void (*) (Dictionary_2_t1_1670 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_13827_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_13829_gshared (Dictionary_2_t1_1670 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_13829(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1670 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_13829_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1672  Dictionary_2_make_pair_m1_13831_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_13831(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1672  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m1_13831_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_13833_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_13833(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m1_13833_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m1_13835_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_13835(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m1_13835_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_13837_gshared (Dictionary_2_t1_1670 * __this, KeyValuePair_2U5BU5D_t1_1903* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_13837(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1670 *, KeyValuePair_2U5BU5D_t1_1903*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_13837_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m1_13839_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_13839(__this, method) (( void (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_Resize_m1_13839_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_13841_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_13841(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1670 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m1_13841_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m1_13843_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_13843(__this, method) (( void (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_Clear_m1_13843_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_13845_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_13845(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1670 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_13845_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_13847_gshared (Dictionary_2_t1_1670 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_13847(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1670 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_13847_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_13849_gshared (Dictionary_2_t1_1670 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_13849(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1670 *, SerializationInfo_t1_178 *, StreamingContext_t1_524 , const MethodInfo*))Dictionary_2_GetObjectData_m1_13849_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_13851_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_13851(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1670 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_13851_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_13853_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_13853(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1670 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_13853_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_13855_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_13855(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1670 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_13855_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t1_1674 * Dictionary_2_get_Keys_m1_13857_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_13857(__this, method) (( KeyCollection_t1_1674 * (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_get_Keys_m1_13857_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t1_1678 * Dictionary_2_get_Values_m1_13859_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_13859(__this, method) (( ValueCollection_t1_1678 * (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_get_Values_m1_13859_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_13861_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_13861(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1670 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_13861_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m1_13863_gshared (Dictionary_2_t1_1670 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_13863(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t1_1670 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_13863_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_13865_gshared (Dictionary_2_t1_1670 * __this, KeyValuePair_2_t1_1672  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_13865(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1670 *, KeyValuePair_2_t1_1672 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_13865_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t1_1676  Dictionary_2_GetEnumerator_m1_13867_gshared (Dictionary_2_t1_1670 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_13867(__this, method) (( Enumerator_t1_1676  (*) (Dictionary_2_t1_1670 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_13867_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_13869_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_13869(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_13869_gshared)(__this /* static, unused */, ___key, ___value, method)
