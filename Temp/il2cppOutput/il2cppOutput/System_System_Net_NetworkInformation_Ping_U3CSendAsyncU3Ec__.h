#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t2_326;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.NetworkInformation.PingOptions
struct PingOptions_t2_420;
// System.Net.NetworkInformation.Ping
struct Ping_t2_421;

#include "mscorlib_System_Object.h"

// System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6
struct  U3CSendAsyncU3Ec__AnonStorey6_t2_419  : public Object_t
{
	// System.Net.IPAddress System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::address
	IPAddress_t2_326 * ___address_0;
	// System.Int32 System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::timeout
	int32_t ___timeout_1;
	// System.Byte[] System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::buffer
	ByteU5BU5D_t1_72* ___buffer_2;
	// System.Net.NetworkInformation.PingOptions System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::options
	PingOptions_t2_420 * ___options_3;
	// System.Net.NetworkInformation.Ping System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::<>f__this
	Ping_t2_421 * ___U3CU3Ef__this_4;
};
