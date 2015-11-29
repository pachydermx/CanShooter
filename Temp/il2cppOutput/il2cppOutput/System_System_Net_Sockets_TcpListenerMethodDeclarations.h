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

// System.Net.Sockets.TcpListener
struct TcpListener_t2_498;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;
// System.Net.IPAddress
struct IPAddress_t2_326;
// System.Net.EndPoint
struct EndPoint_t2_479;
// System.Net.Sockets.Socket
struct Socket_t2_471;
// System.Net.Sockets.TcpClient
struct TcpClient_t2_306;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.Sockets.TcpListener::.ctor(System.Int32)
extern "C" void TcpListener__ctor_m2_3683 (TcpListener_t2_498 * __this, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPEndPoint)
extern "C" void TcpListener__ctor_m2_3684 (TcpListener_t2_498 * __this, IPEndPoint_t2_430 * ___local_end_point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
extern "C" void TcpListener__ctor_m2_3685 (TcpListener_t2_498 * __this, IPAddress_t2_326 * ___listen_ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Init(System.Net.Sockets.AddressFamily,System.Net.EndPoint)
extern "C" void TcpListener_Init_m2_3686 (TcpListener_t2_498 * __this, int32_t ___family, EndPoint_t2_479 * ___ep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpListener::get_Active()
extern "C" bool TcpListener_get_Active_m2_3687 (TcpListener_t2_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.TcpListener::get_LocalEndpoint()
extern "C" EndPoint_t2_479 * TcpListener_get_LocalEndpoint_m2_3688 (TcpListener_t2_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::get_Server()
extern "C" Socket_t2_471 * TcpListener_get_Server_m2_3689 (TcpListener_t2_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpListener::get_ExclusiveAddressUse()
extern "C" bool TcpListener_get_ExclusiveAddressUse_m2_3690 (TcpListener_t2_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::set_ExclusiveAddressUse(System.Boolean)
extern "C" void TcpListener_set_ExclusiveAddressUse_m2_3691 (TcpListener_t2_498 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::AcceptSocket()
extern "C" Socket_t2_471 * TcpListener_AcceptSocket_m2_3692 (TcpListener_t2_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::AcceptTcpClient()
extern "C" TcpClient_t2_306 * TcpListener_AcceptTcpClient_m2_3693 (TcpListener_t2_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Finalize()
extern "C" void TcpListener_Finalize_m2_3694 (TcpListener_t2_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpListener::Pending()
extern "C" bool TcpListener_Pending_m2_3695 (TcpListener_t2_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Start()
extern "C" void TcpListener_Start_m2_3696 (TcpListener_t2_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Start(System.Int32)
extern "C" void TcpListener_Start_m2_3697 (TcpListener_t2_498 * __this, int32_t ___backlog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpListener::BeginAcceptSocket(System.AsyncCallback,System.Object)
extern "C" Object_t * TcpListener_BeginAcceptSocket_m2_3698 (TcpListener_t2_498 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpListener::BeginAcceptTcpClient(System.AsyncCallback,System.Object)
extern "C" Object_t * TcpListener_BeginAcceptTcpClient_m2_3699 (TcpListener_t2_498 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::EndAcceptSocket(System.IAsyncResult)
extern "C" Socket_t2_471 * TcpListener_EndAcceptSocket_m2_3700 (TcpListener_t2_498 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::EndAcceptTcpClient(System.IAsyncResult)
extern "C" TcpClient_t2_306 * TcpListener_EndAcceptTcpClient_m2_3701 (TcpListener_t2_498 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpListener::Stop()
extern "C" void TcpListener_Stop_m2_3702 (TcpListener_t2_498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
