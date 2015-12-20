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
struct List_1_t1_1028;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1_1182;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_2214;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_2212;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t1_1649;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1_1652;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t1_2260;
// System.Comparison`1<System.Int32>
struct Comparison_1_t1_1653;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m1_6238_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1__ctor_m1_6238(__this, method) (( void (*) (List_1_t1_1028 *, const MethodInfo*))List_1__ctor_m1_6238_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1_6200_gshared (List_1_t1_1028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1_6200(__this, ___collection, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1__ctor_m1_6200_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_11692_gshared (List_1_t1_1028 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_11692(__this, ___capacity, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1__ctor_m1_11692_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m1_11693_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_11693(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_11693_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_11694_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_11694(__this, method) (( Object_t* (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_11694_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_11695_gshared (List_1_t1_1028 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_11695(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1028 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_11695_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_11696_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_11696(__this, method) (( Object_t * (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_11696_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_11697_gshared (List_1_t1_1028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_11697(__this, ___item, method) (( int32_t (*) (List_1_t1_1028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_11697_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_11698_gshared (List_1_t1_1028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_11698(__this, ___item, method) (( bool (*) (List_1_t1_1028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_11698_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_11699_gshared (List_1_t1_1028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_11699(__this, ___item, method) (( int32_t (*) (List_1_t1_1028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_11699_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_11700_gshared (List_1_t1_1028 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_11700(__this, ___index, ___item, method) (( void (*) (List_1_t1_1028 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_11700_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_11701_gshared (List_1_t1_1028 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_11701(__this, ___item, method) (( void (*) (List_1_t1_1028 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_11701_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_11702_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_11702(__this, method) (( bool (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_11702_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_11703_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_11703(__this, method) (( bool (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_11703_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_11704_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_11704(__this, method) (( Object_t * (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_11704_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_11705_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_11705(__this, method) (( bool (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_11705_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_11706_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_11706(__this, method) (( bool (*) (List_1_t1_1028 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_11706_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_11707_gshared (List_1_t1_1028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_11707(__this, ___index, method) (( Object_t * (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_11707_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_11708_gshared (List_1_t1_1028 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_11708(__this, ___index, ___value, method) (( void (*) (List_1_t1_1028 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_11708_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m1_11709_gshared (List_1_t1_1028 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m1_11709(__this, ___item, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_Add_m1_11709_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_11710_gshared (List_1_t1_1028 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_11710(__this, ___newCount, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_11710_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_11711_gshared (List_1_t1_1028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_11711(__this, ___collection, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_11711_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_11712_gshared (List_1_t1_1028 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_11712(__this, ___enumerable, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_11712_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_6415_gshared (List_1_t1_1028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_6415(__this, ___collection, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_6415_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_1649 * List_1_AsReadOnly_m1_11713_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_11713(__this, method) (( ReadOnlyCollection_1_t1_1649 * (*) (List_1_t1_1028 *, const MethodInfo*))List_1_AsReadOnly_m1_11713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m1_11714_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_Clear_m1_11714(__this, method) (( void (*) (List_1_t1_1028 *, const MethodInfo*))List_1_Clear_m1_11714_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m1_11715_gshared (List_1_t1_1028 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m1_11715(__this, ___item, method) (( bool (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_Contains_m1_11715_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_11716_gshared (List_1_t1_1028 * __this, Int32U5BU5D_t1_161* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_11716(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1028 *, Int32U5BU5D_t1_161*, int32_t, const MethodInfo*))List_1_CopyTo_m1_11716_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m1_11717_gshared (List_1_t1_1028 * __this, Predicate_1_t1_1652 * ___match, const MethodInfo* method);
#define List_1_Find_m1_11717(__this, ___match, method) (( int32_t (*) (List_1_t1_1028 *, Predicate_1_t1_1652 *, const MethodInfo*))List_1_Find_m1_11717_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m1_11718_gshared (Object_t * __this /* static, unused */, Predicate_1_t1_1652 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1_11718(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1_1652 *, const MethodInfo*))List_1_CheckMatch_m1_11718_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m1_11719_gshared (List_1_t1_1028 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1_1652 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1_11719(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1_1028 *, int32_t, int32_t, Predicate_1_t1_1652 *, const MethodInfo*))List_1_GetIndex_m1_11719_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1122  List_1_GetEnumerator_m1_6201_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_6201(__this, method) (( Enumerator_t1_1122  (*) (List_1_t1_1028 *, const MethodInfo*))List_1_GetEnumerator_m1_6201_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_11720_gshared (List_1_t1_1028 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_11720(__this, ___item, method) (( int32_t (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_IndexOf_m1_11720_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_11721_gshared (List_1_t1_1028 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_11721(__this, ___start, ___delta, method) (( void (*) (List_1_t1_1028 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_11721_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_11722_gshared (List_1_t1_1028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_11722(__this, ___index, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_11722_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_11723_gshared (List_1_t1_1028 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m1_11723(__this, ___index, ___item, method) (( void (*) (List_1_t1_1028 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m1_11723_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_11724_gshared (List_1_t1_1028 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_11724(__this, ___collection, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_11724_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m1_11725_gshared (List_1_t1_1028 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m1_11725(__this, ___item, method) (( bool (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_Remove_m1_11725_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m1_11726_gshared (List_1_t1_1028 * __this, Predicate_1_t1_1652 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1_11726(__this, ___match, method) (( int32_t (*) (List_1_t1_1028 *, Predicate_1_t1_1652 *, const MethodInfo*))List_1_RemoveAll_m1_11726_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_11727_gshared (List_1_t1_1028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_11727(__this, ___index, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_11727_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m1_11728_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_Reverse_m1_11728(__this, method) (( void (*) (List_1_t1_1028 *, const MethodInfo*))List_1_Reverse_m1_11728_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m1_11729_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_Sort_m1_11729(__this, method) (( void (*) (List_1_t1_1028 *, const MethodInfo*))List_1_Sort_m1_11729_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m1_11730_gshared (List_1_t1_1028 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m1_11730(__this, ___comparer, method) (( void (*) (List_1_t1_1028 *, Object_t*, const MethodInfo*))List_1_Sort_m1_11730_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1_11731_gshared (List_1_t1_1028 * __this, Comparison_1_t1_1653 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1_11731(__this, ___comparison, method) (( void (*) (List_1_t1_1028 *, Comparison_1_t1_1653 *, const MethodInfo*))List_1_Sort_m1_11731_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t1_161* List_1_ToArray_m1_11732_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_11732(__this, method) (( Int32U5BU5D_t1_161* (*) (List_1_t1_1028 *, const MethodInfo*))List_1_ToArray_m1_11732_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m1_11733_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1_11733(__this, method) (( void (*) (List_1_t1_1028 *, const MethodInfo*))List_1_TrimExcess_m1_11733_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_11734_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_11734(__this, method) (( int32_t (*) (List_1_t1_1028 *, const MethodInfo*))List_1_get_Capacity_m1_11734_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_11735_gshared (List_1_t1_1028 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_11735(__this, ___value, method) (( void (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_11735_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m1_11736_gshared (List_1_t1_1028 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_11736(__this, method) (( int32_t (*) (List_1_t1_1028 *, const MethodInfo*))List_1_get_Count_m1_11736_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m1_11737_gshared (List_1_t1_1028 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_11737(__this, ___index, method) (( int32_t (*) (List_1_t1_1028 *, int32_t, const MethodInfo*))List_1_get_Item_m1_11737_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_11738_gshared (List_1_t1_1028 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m1_11738(__this, ___index, ___value, method) (( void (*) (List_1_t1_1028 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m1_11738_gshared)(__this, ___index, ___value, method)
