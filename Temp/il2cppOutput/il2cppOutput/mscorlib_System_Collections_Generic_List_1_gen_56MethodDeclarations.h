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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t1_1171;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1_1115;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_955;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_1823;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1_930;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t1_1348;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1_6377_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1__ctor_m1_6377(__this, method) (( void (*) (List_1_t1_1171 *, const MethodInfo*))List_1__ctor_m1_6377_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1_6379_gshared (List_1_t1_1171 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1_6379(__this, ___collection, method) (( void (*) (List_1_t1_1171 *, Object_t*, const MethodInfo*))List_1__ctor_m1_6379_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_6381_gshared (List_1_t1_1171 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_6381(__this, ___capacity, method) (( void (*) (List_1_t1_1171 *, int32_t, const MethodInfo*))List_1__ctor_m1_6381_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m1_6383_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_6383(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_6383_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_6385_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_6385(__this, method) (( Object_t* (*) (List_1_t1_1171 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_6385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_6387_gshared (List_1_t1_1171 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_6387(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1171 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_6387_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_6389_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_6389(__this, method) (( Object_t * (*) (List_1_t1_1171 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_6389_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_6391_gshared (List_1_t1_1171 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_6391(__this, ___item, method) (( int32_t (*) (List_1_t1_1171 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_6391_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_6393_gshared (List_1_t1_1171 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_6393(__this, ___item, method) (( bool (*) (List_1_t1_1171 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_6393_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_6395_gshared (List_1_t1_1171 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_6395(__this, ___item, method) (( int32_t (*) (List_1_t1_1171 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_6395_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_6397_gshared (List_1_t1_1171 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_6397(__this, ___index, ___item, method) (( void (*) (List_1_t1_1171 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_6397_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_6399_gshared (List_1_t1_1171 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_6399(__this, ___item, method) (( void (*) (List_1_t1_1171 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_6399_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_6401_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_6401(__this, method) (( bool (*) (List_1_t1_1171 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_6401_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_6403_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_6403(__this, method) (( bool (*) (List_1_t1_1171 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_6403_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_6405_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_6405(__this, method) (( Object_t * (*) (List_1_t1_1171 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_6405_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_6407_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_6407(__this, method) (( bool (*) (List_1_t1_1171 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_6407_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_6409_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_6409(__this, method) (( bool (*) (List_1_t1_1171 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_6409_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_6411_gshared (List_1_t1_1171 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_6411(__this, ___index, method) (( Object_t * (*) (List_1_t1_1171 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_6411_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_6413_gshared (List_1_t1_1171 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_6413(__this, ___index, ___value, method) (( void (*) (List_1_t1_1171 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_6413_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m1_6415_gshared (List_1_t1_1171 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m1_6415(__this, ___item, method) (( void (*) (List_1_t1_1171 *, Object_t *, const MethodInfo*))List_1_Add_m1_6415_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_6417_gshared (List_1_t1_1171 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_6417(__this, ___newCount, method) (( void (*) (List_1_t1_1171 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_6417_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_6419_gshared (List_1_t1_1171 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_6419(__this, ___collection, method) (( void (*) (List_1_t1_1171 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_6419_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_6421_gshared (List_1_t1_1171 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_6421(__this, ___enumerable, method) (( void (*) (List_1_t1_1171 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_6421_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_6423_gshared (List_1_t1_1171 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_6423(__this, ___collection, method) (( void (*) (List_1_t1_1171 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_6423_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_930 * List_1_AsReadOnly_m1_6425_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_6425(__this, method) (( ReadOnlyCollection_1_t1_930 * (*) (List_1_t1_1171 *, const MethodInfo*))List_1_AsReadOnly_m1_6425_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m1_6427_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_Clear_m1_6427(__this, method) (( void (*) (List_1_t1_1171 *, const MethodInfo*))List_1_Clear_m1_6427_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m1_6429_gshared (List_1_t1_1171 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m1_6429(__this, ___item, method) (( bool (*) (List_1_t1_1171 *, Object_t *, const MethodInfo*))List_1_Contains_m1_6429_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_6431_gshared (List_1_t1_1171 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_6431(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1171 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))List_1_CopyTo_m1_6431_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1183  List_1_GetEnumerator_m1_6432_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_6432(__this, method) (( Enumerator_t1_1183  (*) (List_1_t1_1171 *, const MethodInfo*))List_1_GetEnumerator_m1_6432_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_6434_gshared (List_1_t1_1171 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_6434(__this, ___item, method) (( int32_t (*) (List_1_t1_1171 *, Object_t *, const MethodInfo*))List_1_IndexOf_m1_6434_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_6436_gshared (List_1_t1_1171 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_6436(__this, ___start, ___delta, method) (( void (*) (List_1_t1_1171 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_6436_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_6438_gshared (List_1_t1_1171 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_6438(__this, ___index, method) (( void (*) (List_1_t1_1171 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_6438_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_6440_gshared (List_1_t1_1171 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m1_6440(__this, ___index, ___item, method) (( void (*) (List_1_t1_1171 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m1_6440_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_6442_gshared (List_1_t1_1171 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_6442(__this, ___collection, method) (( void (*) (List_1_t1_1171 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_6442_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m1_6444_gshared (List_1_t1_1171 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m1_6444(__this, ___item, method) (( bool (*) (List_1_t1_1171 *, Object_t *, const MethodInfo*))List_1_Remove_m1_6444_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_6446_gshared (List_1_t1_1171 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_6446(__this, ___index, method) (( void (*) (List_1_t1_1171 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_6446_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m1_6448_gshared (List_1_t1_1171 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m1_6448(__this, ___comparer, method) (( void (*) (List_1_t1_1171 *, Object_t*, const MethodInfo*))List_1_Sort_m1_6448_gshared)(__this, ___comparer, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t1_158* List_1_ToArray_m1_6449_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_6449(__this, method) (( ObjectU5BU5D_t1_158* (*) (List_1_t1_1171 *, const MethodInfo*))List_1_ToArray_m1_6449_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_6451_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_6451(__this, method) (( int32_t (*) (List_1_t1_1171 *, const MethodInfo*))List_1_get_Capacity_m1_6451_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_6453_gshared (List_1_t1_1171 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_6453(__this, ___value, method) (( void (*) (List_1_t1_1171 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_6453_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m1_6455_gshared (List_1_t1_1171 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_6455(__this, method) (( int32_t (*) (List_1_t1_1171 *, const MethodInfo*))List_1_get_Count_m1_6455_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m1_6457_gshared (List_1_t1_1171 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_6457(__this, ___index, method) (( Object_t * (*) (List_1_t1_1171 *, int32_t, const MethodInfo*))List_1_get_Item_m1_6457_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_6459_gshared (List_1_t1_1171 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m1_6459(__this, ___index, ___value, method) (( void (*) (List_1_t1_1171 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m1_6459_gshared)(__this, ___index, ___value, method)
