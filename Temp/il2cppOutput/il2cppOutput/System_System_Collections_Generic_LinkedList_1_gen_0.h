﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t2_850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.LinkedList`1<System.Int32>
struct  LinkedList_1_t2_849  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1::count
	uint32_t ___count_2;
	// System.UInt32 System.Collections.Generic.LinkedList`1::version
	uint32_t ___version_3;
	// System.Object System.Collections.Generic.LinkedList`1::syncRoot
	Object_t * ___syncRoot_4;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::first
	LinkedListNode_1_t2_850 * ___first_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::si
	SerializationInfo_t1_178 * ___si_6;
};
