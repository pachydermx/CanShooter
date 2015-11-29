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

// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2_221;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Diagnostics.TraceListener
struct TraceListener_t2_187;
// System.String
struct String_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t2_220;
// System.Collections.IList
struct IList_t1_427;
// System.Diagnostics.TraceListener[]
struct TraceListenerU5BU5D_t2_820;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.TraceListenerCollection::.ctor()
extern "C" void TraceListenerCollection__ctor_m2_1869 (TraceListenerCollection_t2_221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::.ctor(System.Boolean)
extern "C" void TraceListenerCollection__ctor_m2_1870 (TraceListenerCollection_t2_221 * __this, bool ___addDefault, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * TraceListenerCollection_System_Collections_IList_get_Item_m2_1871 (TraceListenerCollection_t2_221 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void TraceListenerCollection_System_Collections_IList_set_Item_m2_1872 (TraceListenerCollection_t2_221 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool TraceListenerCollection_System_Collections_ICollection_get_IsSynchronized_m2_1873 (TraceListenerCollection_t2_221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * TraceListenerCollection_System_Collections_ICollection_get_SyncRoot_m2_1874 (TraceListenerCollection_t2_221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsFixedSize()
extern "C" bool TraceListenerCollection_System_Collections_IList_get_IsFixedSize_m2_1875 (TraceListenerCollection_t2_221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsReadOnly()
extern "C" bool TraceListenerCollection_System_Collections_IList_get_IsReadOnly_m2_1876 (TraceListenerCollection_t2_221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void TraceListenerCollection_System_Collections_ICollection_CopyTo_m2_1877 (TraceListenerCollection_t2_221 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t TraceListenerCollection_System_Collections_IList_Add_m2_1878 (TraceListenerCollection_t2_221 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool TraceListenerCollection_System_Collections_IList_Contains_m2_1879 (TraceListenerCollection_t2_221 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t TraceListenerCollection_System_Collections_IList_IndexOf_m2_1880 (TraceListenerCollection_t2_221 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void TraceListenerCollection_System_Collections_IList_Insert_m2_1881 (TraceListenerCollection_t2_221 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Remove(System.Object)
extern "C" void TraceListenerCollection_System_Collections_IList_Remove_m2_1882 (TraceListenerCollection_t2_221 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::get_Count()
extern "C" int32_t TraceListenerCollection_get_Count_m2_1883 (TraceListenerCollection_t2_221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListener System.Diagnostics.TraceListenerCollection::get_Item(System.String)
extern "C" TraceListener_t2_187 * TraceListenerCollection_get_Item_m2_1884 (TraceListenerCollection_t2_221 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListener System.Diagnostics.TraceListenerCollection::get_Item(System.Int32)
extern "C" TraceListener_t2_187 * TraceListenerCollection_get_Item_m2_1885 (TraceListenerCollection_t2_221 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::set_Item(System.Int32,System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_set_Item_m2_1886 (TraceListenerCollection_t2_221 * __this, int32_t ___index, TraceListener_t2_187 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener)
extern "C" int32_t TraceListenerCollection_Add_m2_1887 (TraceListenerCollection_t2_221 * __this, TraceListener_t2_187 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener,System.Diagnostics.TraceImplSettings)
extern "C" void TraceListenerCollection_Add_m2_1888 (TraceListenerCollection_t2_221 * __this, TraceListener_t2_187 * ___listener, TraceImplSettings_t2_220 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::InitializeListener(System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_InitializeListener_m2_1889 (TraceListenerCollection_t2_221 * __this, TraceListener_t2_187 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::InitializeRange(System.Collections.IList)
extern "C" void TraceListenerCollection_InitializeRange_m2_1890 (TraceListenerCollection_t2_221 * __this, Object_t * ___listeners, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::AddRange(System.Diagnostics.TraceListener[])
extern "C" void TraceListenerCollection_AddRange_m2_1891 (TraceListenerCollection_t2_221 * __this, TraceListenerU5BU5D_t2_820* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::AddRange(System.Diagnostics.TraceListenerCollection)
extern "C" void TraceListenerCollection_AddRange_m2_1892 (TraceListenerCollection_t2_221 * __this, TraceListenerCollection_t2_221 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Clear()
extern "C" void TraceListenerCollection_Clear_m2_1893 (TraceListenerCollection_t2_221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::Contains(System.Diagnostics.TraceListener)
extern "C" bool TraceListenerCollection_Contains_m2_1894 (TraceListenerCollection_t2_221 * __this, TraceListener_t2_187 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::CopyTo(System.Diagnostics.TraceListener[],System.Int32)
extern "C" void TraceListenerCollection_CopyTo_m2_1895 (TraceListenerCollection_t2_221 * __this, TraceListenerU5BU5D_t2_820* ___listeners, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Diagnostics.TraceListenerCollection::GetEnumerator()
extern "C" Object_t * TraceListenerCollection_GetEnumerator_m2_1896 (TraceListenerCollection_t2_221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::IndexOf(System.Diagnostics.TraceListener)
extern "C" int32_t TraceListenerCollection_IndexOf_m2_1897 (TraceListenerCollection_t2_221 * __this, TraceListener_t2_187 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Insert(System.Int32,System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_Insert_m2_1898 (TraceListenerCollection_t2_221 * __this, int32_t ___index, TraceListener_t2_187 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Remove(System.String)
extern "C" void TraceListenerCollection_Remove_m2_1899 (TraceListenerCollection_t2_221 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Remove(System.Diagnostics.TraceListener)
extern "C" void TraceListenerCollection_Remove_m2_1900 (TraceListenerCollection_t2_221 * __this, TraceListener_t2_187 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::RemoveAt(System.Int32)
extern "C" void TraceListenerCollection_RemoveAt_m2_1901 (TraceListenerCollection_t2_221 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
