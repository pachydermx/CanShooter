#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.Net.Sockets.Socket/SendFileHandler
struct SendFileHandler_t2_483;

#include "mscorlib_System_Object.h"

// System.Net.Sockets.Socket/SendFileAsyncResult
struct  SendFileAsyncResult_t2_482  : public Object_t
{
	// System.IAsyncResult System.Net.Sockets.Socket/SendFileAsyncResult::ares
	Object_t * ___ares_0;
	// System.Net.Sockets.Socket/SendFileHandler System.Net.Sockets.Socket/SendFileAsyncResult::d
	SendFileHandler_t2_483 * ___d_1;
};
