﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Specialized.OrderedDictionary/OrderedCollection
struct OrderedCollection_t2_30;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Specialized.OrderedDictionary/OrderedCollection::.ctor(System.Collections.ArrayList,System.Boolean)
extern "C" void OrderedCollection__ctor_m2_230 (OrderedCollection_t2_30 * __this, ArrayList_t1_114 * ___list, bool ___isKeyList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedCollection::get_Count()
extern "C" int32_t OrderedCollection_get_Count_m2_231 (OrderedCollection_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedCollection::get_IsSynchronized()
extern "C" bool OrderedCollection_get_IsSynchronized_m2_232 (OrderedCollection_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedCollection::get_SyncRoot()
extern "C" Object_t * OrderedCollection_get_SyncRoot_m2_233 (OrderedCollection_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedCollection::CopyTo(System.Array,System.Int32)
extern "C" void OrderedCollection_CopyTo_m2_234 (OrderedCollection_t2_30 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedCollection::GetEnumerator()
extern "C" Object_t * OrderedCollection_GetEnumerator_m2_235 (OrderedCollection_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
