﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t2_326;

#include "mscorlib_System_Object.h"

// System.Net.Sockets.IPv6MulticastOption
struct  IPv6MulticastOption_t2_466  : public Object_t
{
	// System.Net.IPAddress System.Net.Sockets.IPv6MulticastOption::group
	IPAddress_t2_326 * ___group_0;
	// System.Int64 System.Net.Sockets.IPv6MulticastOption::ifIndex
	int64_t ___ifIndex_1;
};
