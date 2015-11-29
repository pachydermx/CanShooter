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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1_1059;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1_1172;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_1828;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_1826;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t1_1656;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1_1901;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m1_6217_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1__ctor_m1_6217(__this, method) (( void (*) (List_1_t1_1059 *, const MethodInfo*))List_1__ctor_m1_6217_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1_6179_gshared (List_1_t1_1059 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1_6179(__this, ___collection, method) (( void (*) (List_1_t1_1059 *, Object_t*, const MethodInfo*))List_1__ctor_m1_6179_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_13468_gshared (List_1_t1_1059 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_13468(__this, ___capacity, method) (( void (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1__ctor_m1_13468_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m1_13469_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_13469(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_13469_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_13470_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_13470(__this, method) (( Object_t* (*) (List_1_t1_1059 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_13470_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_13471_gshared (List_1_t1_1059 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_13471(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1059 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_13471_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_13472_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_13472(__this, method) (( Object_t * (*) (List_1_t1_1059 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_13472_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_13473_gshared (List_1_t1_1059 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_13473(__this, ___item, method) (( int32_t (*) (List_1_t1_1059 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_13473_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_13474_gshared (List_1_t1_1059 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_13474(__this, ___item, method) (( bool (*) (List_1_t1_1059 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_13474_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_13475_gshared (List_1_t1_1059 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_13475(__this, ___item, method) (( int32_t (*) (List_1_t1_1059 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_13475_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_13476_gshared (List_1_t1_1059 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_13476(__this, ___index, ___item, method) (( void (*) (List_1_t1_1059 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_13476_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_13477_gshared (List_1_t1_1059 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_13477(__this, ___item, method) (( void (*) (List_1_t1_1059 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_13477_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_13478_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_13478(__this, method) (( bool (*) (List_1_t1_1059 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_13478_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_13479_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_13479(__this, method) (( bool (*) (List_1_t1_1059 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_13479_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_13480_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_13480(__this, method) (( Object_t * (*) (List_1_t1_1059 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_13480_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_13481_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_13481(__this, method) (( bool (*) (List_1_t1_1059 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_13481_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_13482_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_13482(__this, method) (( bool (*) (List_1_t1_1059 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_13482_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_13483_gshared (List_1_t1_1059 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_13483(__this, ___index, method) (( Object_t * (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_13483_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_13484_gshared (List_1_t1_1059 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_13484(__this, ___index, ___value, method) (( void (*) (List_1_t1_1059 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_13484_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m1_13485_gshared (List_1_t1_1059 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m1_13485(__this, ___item, method) (( void (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1_Add_m1_13485_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_13486_gshared (List_1_t1_1059 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_13486(__this, ___newCount, method) (( void (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_13486_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_13487_gshared (List_1_t1_1059 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_13487(__this, ___collection, method) (( void (*) (List_1_t1_1059 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_13487_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_13488_gshared (List_1_t1_1059 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_13488(__this, ___enumerable, method) (( void (*) (List_1_t1_1059 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_13488_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_13489_gshared (List_1_t1_1059 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_13489(__this, ___collection, method) (( void (*) (List_1_t1_1059 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_13489_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_1656 * List_1_AsReadOnly_m1_13490_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_13490(__this, method) (( ReadOnlyCollection_1_t1_1656 * (*) (List_1_t1_1059 *, const MethodInfo*))List_1_AsReadOnly_m1_13490_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m1_13491_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_Clear_m1_13491(__this, method) (( void (*) (List_1_t1_1059 *, const MethodInfo*))List_1_Clear_m1_13491_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m1_13492_gshared (List_1_t1_1059 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m1_13492(__this, ___item, method) (( bool (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1_Contains_m1_13492_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_13493_gshared (List_1_t1_1059 * __this, Int32U5BU5D_t1_161* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_13493(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1059 *, Int32U5BU5D_t1_161*, int32_t, const MethodInfo*))List_1_CopyTo_m1_13493_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1112  List_1_GetEnumerator_m1_6180_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_6180(__this, method) (( Enumerator_t1_1112  (*) (List_1_t1_1059 *, const MethodInfo*))List_1_GetEnumerator_m1_6180_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_13494_gshared (List_1_t1_1059 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_13494(__this, ___item, method) (( int32_t (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1_IndexOf_m1_13494_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_13495_gshared (List_1_t1_1059 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_13495(__this, ___start, ___delta, method) (( void (*) (List_1_t1_1059 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_13495_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_13496_gshared (List_1_t1_1059 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_13496(__this, ___index, method) (( void (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_13496_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_13497_gshared (List_1_t1_1059 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m1_13497(__this, ___index, ___item, method) (( void (*) (List_1_t1_1059 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m1_13497_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_13498_gshared (List_1_t1_1059 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_13498(__this, ___collection, method) (( void (*) (List_1_t1_1059 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_13498_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m1_13499_gshared (List_1_t1_1059 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m1_13499(__this, ___item, method) (( bool (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1_Remove_m1_13499_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_13500_gshared (List_1_t1_1059 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_13500(__this, ___index, method) (( void (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_13500_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m1_13501_gshared (List_1_t1_1059 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m1_13501(__this, ___comparer, method) (( void (*) (List_1_t1_1059 *, Object_t*, const MethodInfo*))List_1_Sort_m1_13501_gshared)(__this, ___comparer, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t1_161* List_1_ToArray_m1_13502_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_13502(__this, method) (( Int32U5BU5D_t1_161* (*) (List_1_t1_1059 *, const MethodInfo*))List_1_ToArray_m1_13502_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_13503_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_13503(__this, method) (( int32_t (*) (List_1_t1_1059 *, const MethodInfo*))List_1_get_Capacity_m1_13503_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_13504_gshared (List_1_t1_1059 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_13504(__this, ___value, method) (( void (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_13504_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m1_13505_gshared (List_1_t1_1059 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_13505(__this, method) (( int32_t (*) (List_1_t1_1059 *, const MethodInfo*))List_1_get_Count_m1_13505_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m1_13506_gshared (List_1_t1_1059 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_13506(__this, ___index, method) (( int32_t (*) (List_1_t1_1059 *, int32_t, const MethodInfo*))List_1_get_Item_m1_13506_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_13507_gshared (List_1_t1_1059 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m1_13507(__this, ___index, ___value, method) (( void (*) (List_1_t1_1059 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m1_13507_gshared)(__this, ___index, ___value, method)
