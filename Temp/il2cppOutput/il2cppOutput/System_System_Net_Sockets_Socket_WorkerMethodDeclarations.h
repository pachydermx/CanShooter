#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Sockets.Socket/Worker
struct Worker_t2_481;
// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2_478;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult)
extern "C" void Worker__ctor_m2_3369 (Worker_t2_481 * __this, SocketAsyncResult_t2_478 * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::.ctor(System.Net.Sockets.Socket/SocketAsyncResult,System.Boolean)
extern "C" void Worker__ctor_m2_3370 (Worker_t2_481 * __this, SocketAsyncResult_t2_478 * ___ares, bool ___requireSocketSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Accept()
extern "C" void Worker_Accept_m2_3371 (Worker_t2_481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::AcceptReceive()
extern "C" void Worker_AcceptReceive_m2_3372 (Worker_t2_481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Connect()
extern "C" void Worker_Connect_m2_3373 (Worker_t2_481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Disconnect()
extern "C" void Worker_Disconnect_m2_3374 (Worker_t2_481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Receive()
extern "C" void Worker_Receive_m2_3375 (Worker_t2_481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveFrom()
extern "C" void Worker_ReceiveFrom_m2_3376 (Worker_t2_481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::ReceiveGeneric()
extern "C" void Worker_ReceiveGeneric_m2_3377 (Worker_t2_481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::UpdateSendValues(System.Int32)
extern "C" void Worker_UpdateSendValues_m2_3378 (Worker_t2_481 * __this, int32_t ___last_sent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::Send()
extern "C" void Worker_Send_m2_3379 (Worker_t2_481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendTo()
extern "C" void Worker_SendTo_m2_3380 (Worker_t2_481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/Worker::SendGeneric()
extern "C" void Worker_SendGeneric_m2_3381 (Worker_t2_481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
