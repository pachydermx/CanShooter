#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Security.AccessControl.AccessRule>
struct List_1_t1_564;
// System.Security.AccessControl.AccessRule
struct AccessRule_t1_557;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.List`1/Enumerator<System.Security.AccessControl.AccessRule>
struct  Enumerator_t1_1317 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1_564 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	AccessRule_t1_557 * ___current_3;
};
