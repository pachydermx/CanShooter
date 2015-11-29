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

// System.Collections.Specialized.OrderedDictionary/OrderedEntryCollectionEnumerator
struct OrderedEntryCollectionEnumerator_t2_28;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Specialized.OrderedDictionary/OrderedEntryCollectionEnumerator::.ctor(System.Collections.IEnumerator)
extern "C" void OrderedEntryCollectionEnumerator__ctor_m2_219 (OrderedEntryCollectionEnumerator_t2_28 * __this, Object_t * ___listEnumerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedEntryCollectionEnumerator::MoveNext()
extern "C" bool OrderedEntryCollectionEnumerator_MoveNext_m2_220 (OrderedEntryCollectionEnumerator_t2_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedEntryCollectionEnumerator::Reset()
extern "C" void OrderedEntryCollectionEnumerator_Reset_m2_221 (OrderedEntryCollectionEnumerator_t2_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedEntryCollectionEnumerator::get_Current()
extern "C" Object_t * OrderedEntryCollectionEnumerator_get_Current_m2_222 (OrderedEntryCollectionEnumerator_t2_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Specialized.OrderedDictionary/OrderedEntryCollectionEnumerator::get_Entry()
extern "C" DictionaryEntry_t1_168  OrderedEntryCollectionEnumerator_get_Entry_m2_223 (OrderedEntryCollectionEnumerator_t2_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedEntryCollectionEnumerator::get_Key()
extern "C" Object_t * OrderedEntryCollectionEnumerator_get_Key_m2_224 (OrderedEntryCollectionEnumerator_t2_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedEntryCollectionEnumerator::get_Value()
extern "C" Object_t * OrderedEntryCollectionEnumerator_get_Value_m2_225 (OrderedEntryCollectionEnumerator_t2_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
