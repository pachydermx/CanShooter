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
struct Dictionary_2_t1_1877;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1282;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_2215;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t1_2313;
// System.Collections.ICollection
struct ICollection_t1_860;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t1_2312;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t1_2314;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_470;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t1_1881;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t1_1885;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m1_15444_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15444(__this, method) (( void (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2__ctor_m1_15444_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_15446_gshared (Dictionary_2_t1_1877 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15446(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1877 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_15446_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_15448_gshared (Dictionary_2_t1_1877 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15448(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1877 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_15448_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_15450_gshared (Dictionary_2_t1_1877 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_15450(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1877 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2__ctor_m1_15450_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_15452_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_15452(__this, method) (( Object_t* (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_15452_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_15454_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_15454(__this, method) (( Object_t* (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_15454_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m1_15456_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1_15456(__this, method) (( Object_t * (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1_15456_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Values()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m1_15458_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1_15458(__this, method) (( Object_t * (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1_15458_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_15460_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_15460(__this, method) (( bool (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m1_15460_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_15462_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_15462(__this, method) (( bool (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1_15462_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_15464_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_15464(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1877 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_15464_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_15466_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_15466(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1877 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_15466_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_15468_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_15468(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1877 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_15468_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_15470_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_15470(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1877 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_15470_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_15472_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_15472(__this, ___key, method) (( void (*) (Dictionary_2_t1_1877 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_15472_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_15474_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_15474(__this, method) (( bool (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_15474_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_15476_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_15476(__this, method) (( Object_t * (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_15476_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_15478_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_15478(__this, method) (( bool (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_15478_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_15480_gshared (Dictionary_2_t1_1877 * __this, KeyValuePair_2_t1_1879  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_15480(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1877 *, KeyValuePair_2_t1_1879 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_15480_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_15482_gshared (Dictionary_2_t1_1877 * __this, KeyValuePair_2_t1_1879  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_15482(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1877 *, KeyValuePair_2_t1_1879 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_15482_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_15484_gshared (Dictionary_2_t1_1877 * __this, KeyValuePair_2U5BU5D_t1_2312* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_15484(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1877 *, KeyValuePair_2U5BU5D_t1_2312*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_15484_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_15486_gshared (Dictionary_2_t1_1877 * __this, KeyValuePair_2_t1_1879  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_15486(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1877 *, KeyValuePair_2_t1_1879 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_15486_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_15488_gshared (Dictionary_2_t1_1877 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_15488(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1877 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_15488_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_15490_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_15490(__this, method) (( Object_t * (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_15490_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_15492_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_15492(__this, method) (( Object_t* (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_15492_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_15494_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_15494(__this, method) (( Object_t * (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_15494_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_15496_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_15496(__this, method) (( int32_t (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_get_Count_m1_15496_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m1_15498_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_15498(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t1_1877 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_15498_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_15500_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_15500(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1877 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m1_15500_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_15502_gshared (Dictionary_2_t1_1877 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_15502(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1877 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_15502_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_15504_gshared (Dictionary_2_t1_1877 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_15504(__this, ___size, method) (( void (*) (Dictionary_2_t1_1877 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_15504_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_15506_gshared (Dictionary_2_t1_1877 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_15506(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1877 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_15506_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1879  Dictionary_2_make_pair_m1_15508_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_15508(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1879  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m1_15508_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_15510_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_15510(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m1_15510_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m1_15512_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_15512(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m1_15512_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_15514_gshared (Dictionary_2_t1_1877 * __this, KeyValuePair_2U5BU5D_t1_2312* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_15514(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1877 *, KeyValuePair_2U5BU5D_t1_2312*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_15514_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m1_15516_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_15516(__this, method) (( void (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_Resize_m1_15516_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_15518_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_15518(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1877 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m1_15518_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m1_15520_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_15520(__this, method) (( void (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_Clear_m1_15520_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_15522_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_15522(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1877 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_15522_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_15524_gshared (Dictionary_2_t1_1877 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_15524(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1877 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m1_15524_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_15526_gshared (Dictionary_2_t1_1877 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_15526(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1877 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))Dictionary_2_GetObjectData_m1_15526_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_15528_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_15528(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1877 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_15528_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_15530_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_15530(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1877 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_15530_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_15532_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_15532(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1877 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_15532_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t1_1881 * Dictionary_2_get_Keys_m1_15534_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_15534(__this, method) (( KeyCollection_t1_1881 * (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_get_Keys_m1_15534_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t1_1885 * Dictionary_2_get_Values_m1_15536_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_15536(__this, method) (( ValueCollection_t1_1885 * (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_get_Values_m1_15536_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_15538_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_15538(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1877 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_15538_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m1_15540_gshared (Dictionary_2_t1_1877 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_15540(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t1_1877 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_15540_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_15542_gshared (Dictionary_2_t1_1877 * __this, KeyValuePair_2_t1_1879  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_15542(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1877 *, KeyValuePair_2_t1_1879 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_15542_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t1_1883  Dictionary_2_GetEnumerator_m1_15544_gshared (Dictionary_2_t1_1877 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_15544(__this, method) (( Enumerator_t1_1883  (*) (Dictionary_2_t1_1877 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_15544_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_168  Dictionary_2_U3CCopyToU3Em__0_m1_15546_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_15546(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_168  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_15546_gshared)(__this /* static, unused */, ___key, ___value, method)
