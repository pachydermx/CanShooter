﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1_1277;
// System.ComponentModel.WeakObjectWrapper[]
struct WeakObjectWrapperU5BU5D_t2_881;
// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>[]
struct LinkedList_1U5BU5D_t2_879;
// System.Collections.Generic.IEqualityComparer`1<System.ComponentModel.WeakObjectWrapper>
struct IEqualityComparer_1_t1_1440;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.Dictionary`2/Transform`1<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>,System.Collections.DictionaryEntry>
struct Transform_1_t1_1439;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.ComponentModel.WeakObjectWrapper,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>>
struct  Dictionary_2_t1_936  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t1_161* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t1_1277* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	WeakObjectWrapperU5BU5D_t2_881* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	LinkedList_1U5BU5D_t2_879* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t1_178 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1_936_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1_1439 * ___U3CU3Ef__amU24cacheB_15;
};
