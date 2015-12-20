#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.RBTree
struct RBTree_t2_12;
// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Object,System.Object>
struct NodeHelper_t2_861;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct  SortedDictionary_2_t2_860  : public Object_t
{
	// System.Collections.Generic.RBTree System.Collections.Generic.SortedDictionary`2::tree
	RBTree_t2_12 * ___tree_0;
	// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2::hlp
	NodeHelper_t2_861 * ___hlp_1;
};
