#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.PingReply
struct PingReply_t2_424;

#include "System_System_ComponentModel_AsyncCompletedEventArgs.h"

// System.Net.NetworkInformation.PingCompletedEventArgs
struct  PingCompletedEventArgs_t2_423  : public AsyncCompletedEventArgs_t2_57
{
	// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.PingCompletedEventArgs::reply
	PingReply_t2_424 * ___reply_4;
};
