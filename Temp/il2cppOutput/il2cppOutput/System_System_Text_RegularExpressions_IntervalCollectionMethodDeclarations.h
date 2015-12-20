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

// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t2_741;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t2_740;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
extern "C" void IntervalCollection__ctor_m2_6076 (IntervalCollection_t2_741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
extern "C" Interval_t2_738  IntervalCollection_get_Item_m2_6077 (IntervalCollection_t2_741 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::set_Item(System.Int32,System.Text.RegularExpressions.Interval)
extern "C" void IntervalCollection_set_Item_m2_6078 (IntervalCollection_t2_741 * __this, int32_t ___i, Interval_t2_738  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
extern "C" void IntervalCollection_Add_m2_6079 (IntervalCollection_t2_741 * __this, Interval_t2_738  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Clear()
extern "C" void IntervalCollection_Clear_m2_6080 (IntervalCollection_t2_741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Sort()
extern "C" void IntervalCollection_Sort_m2_6081 (IntervalCollection_t2_741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
extern "C" void IntervalCollection_Normalize_m2_6082 (IntervalCollection_t2_741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C" IntervalCollection_t2_741 * IntervalCollection_GetMetaCollection_m2_6083 (IntervalCollection_t2_741 * __this, CostDelegate_t2_740 * ___cost_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C" void IntervalCollection_Optimize_m2_6084 (IntervalCollection_t2_741 * __this, int32_t ___begin, int32_t ___end, IntervalCollection_t2_741 * ___meta, CostDelegate_t2_740 * ___cost_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
extern "C" int32_t IntervalCollection_get_Count_m2_6085 (IntervalCollection_t2_741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
extern "C" bool IntervalCollection_get_IsSynchronized_m2_6086 (IntervalCollection_t2_741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
extern "C" Object_t * IntervalCollection_get_SyncRoot_m2_6087 (IntervalCollection_t2_741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
extern "C" void IntervalCollection_CopyTo_m2_6088 (IntervalCollection_t2_741 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
extern "C" Object_t * IntervalCollection_GetEnumerator_m2_6089 (IntervalCollection_t2_741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
