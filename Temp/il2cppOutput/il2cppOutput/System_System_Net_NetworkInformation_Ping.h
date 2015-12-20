#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t2_62;
// System.Object
struct Object_t;
// System.Net.NetworkInformation.PingCompletedEventHandler
struct PingCompletedEventHandler_t2_422;

#include "System_System_ComponentModel_Component.h"

// System.Net.NetworkInformation.Ping
struct  Ping_t2_421  : public Component_t2_77
{
	// System.ComponentModel.BackgroundWorker System.Net.NetworkInformation.Ping::worker
	BackgroundWorker_t2_62 * ___worker_11;
	// System.Object System.Net.NetworkInformation.Ping::user_async_state
	Object_t * ___user_async_state_12;
	// System.Net.NetworkInformation.PingCompletedEventHandler System.Net.NetworkInformation.Ping::PingCompleted
	PingCompletedEventHandler_t2_422 * ___PingCompleted_13;
};
struct Ping_t2_421_StaticFields{
	// System.Byte[] System.Net.NetworkInformation.Ping::default_buffer
	ByteU5BU5D_t1_72* ___default_buffer_9;
	// System.Boolean System.Net.NetworkInformation.Ping::canSendPrivileged
	bool ___canSendPrivileged_10;
};
