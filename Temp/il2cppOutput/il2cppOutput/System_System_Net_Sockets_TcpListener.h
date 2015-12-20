#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t2_471;
// System.Net.EndPoint
struct EndPoint_t2_479;

#include "mscorlib_System_Object.h"

// System.Net.Sockets.TcpListener
struct  TcpListener_t2_498  : public Object_t
{
	// System.Boolean System.Net.Sockets.TcpListener::active
	bool ___active_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::server
	Socket_t2_471 * ___server_1;
	// System.Net.EndPoint System.Net.Sockets.TcpListener::savedEP
	EndPoint_t2_479 * ___savedEP_2;
};
