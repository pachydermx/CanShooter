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
struct Dictionary_2_t1_1871;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1281;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2209;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t1_2304;
// System.Collections.ICollection
struct ICollection_t1_860;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t1_2303;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t1_2305;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t1_1875;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t1_1879;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m1_15340_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15340(__this, method) (( void (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2__ctor_m1_15340_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_15342_gshared (Dictionary_2_t1_1871 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15342(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1871 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_15342_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_15344_gshared (Dictionary_2_t1_1871 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15344(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1871 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_15344_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_15346_gshared (Dictionary_2_t1_1871 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15346(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1871 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_15346_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_15348_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_15348(__this, method) (( Object_t* (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_15348_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_15350_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_15350(__this, method) (( Object_t* (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_15350_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_15352_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_15352(__this, method) (( Object_t * (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_15352_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_15354_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_15354(__this, method) (( Object_t * (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_15354_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_15356_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_15356(__this, method) (( bool (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_15356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_15358_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_15358(__this, method) (( bool (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_15358_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_15360_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_15360(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1871 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_15360_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_15362_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_15362(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1871 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_15362_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_15364_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_15364(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1871 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_15364_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_15366_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_15366(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1871 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_15366_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_15368_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_15368(__this, ___key, method) (( void (*) (Dictionary_2_t1_1871 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_15368_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_15370_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_15370(__this, method) (( bool (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_15370_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_15372_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_15372(__this, method) (( Object_t * (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_15372_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_15374_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_15374(__this, method) (( bool (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_15374_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_15376_gshared (Dictionary_2_t1_1871 * __this, KeyValuePair_2_t1_1873  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_15376(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1871 *, KeyValuePair_2_t1_1873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_15376_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_15378_gshared (Dictionary_2_t1_1871 * __this, KeyValuePair_2_t1_1873  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_15378(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1871 *, KeyValuePair_2_t1_1873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_15378_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_15380_gshared (Dictionary_2_t1_1871 * __this, KeyValuePair_2U5BU5D_t1_2303* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_15380(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1871 *, KeyValuePair_2U5BU5D_t1_2303*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_15380_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_15382_gshared (Dictionary_2_t1_1871 * __this, KeyValuePair_2_t1_1873  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_15382(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1871 *, KeyValuePair_2_t1_1873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_15382_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_15384_gshared (Dictionary_2_t1_1871 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_15384(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1871 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_15384_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_15386_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_15386(__this, method) (( Object_t * (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_15386_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_15388_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_15388(__this, method) (( Object_t* (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_15388_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_15390_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_15390(__this, method) (( Object_t * (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_15390_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_15392_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_15392(__this, method) (( int32_t (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_get_Count_m1_15392_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m1_15394_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_15394(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t1_1871 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_15394_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_15396_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_15396(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1871 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m1_15396_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_15398_gshared (Dictionary_2_t1_1871 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_15398(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1871 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_15398_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_15400_gshared (Dictionary_2_t1_1871 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_15400(__this, ___size, method) (( void (*) (Dictionary_2_t1_1871 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_15400_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_15402_gshared (Dictionary_2_t1_1871 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_15402(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1871 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_15402_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1873  Dictionary_2_make_pair_m1_15404_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_15404(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1873  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m1_15404_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_15406_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_15406(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m1_15406_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m1_15408_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_15408(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m1_15408_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_15410_gshared (Dictionary_2_t1_1871 * __this, KeyValuePair_2U5BU5D_t1_2303* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_15410(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1871 *, KeyValuePair_2U5BU5D_t1_2303*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_15410_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m1_15412_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_15412(__this, method) (( void (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_Resize_m1_15412_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_15414_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_15414(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1871 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m1_15414_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m1_15416_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_15416(__this, method) (( void (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_Clear_m1_15416_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_15418_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_15418(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1871 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_15418_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_15420_gshared (Dictionary_2_t1_1871 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_15420(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1871 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_15420_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_15422_gshared (Dictionary_2_t1_1871 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_15422(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1871 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_15422_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_15424_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_15424(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1871 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_15424_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_15426_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_15426(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1871 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_15426_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_15428_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_15428(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1871 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_15428_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t1_1875 * Dictionary_2_get_Keys_m1_15430_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_15430(__this, method) (( KeyCollection_t1_1875 * (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_get_Keys_m1_15430_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t1_1879 * Dictionary_2_get_Values_m1_15432_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_15432(__this, method) (( ValueCollection_t1_1879 * (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_get_Values_m1_15432_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_15434_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_15434(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1871 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_15434_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m1_15436_gshared (Dictionary_2_t1_1871 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_15436(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t1_1871 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_15436_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_15438_gshared (Dictionary_2_t1_1871 * __this, KeyValuePair_2_t1_1873  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_15438(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1871 *, KeyValuePair_2_t1_1873 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_15438_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t1_1877  Dictionary_2_GetEnumerator_m1_15440_gshared (Dictionary_2_t1_1871 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_15440(__this, method) (( Enumerator_t1_1877  (*) (Dictionary_2_t1_1871 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_15440_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_15442_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_15442(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_15442_gshared)(__this /* static, unused */, ___key, ___value, method)
