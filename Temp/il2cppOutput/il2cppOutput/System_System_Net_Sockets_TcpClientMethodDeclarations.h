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

// System.Net.Sockets.TcpClient
struct TcpClient_t2_306;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;
// System.String
struct String_t;
// System.Net.Sockets.Socket
struct Socket_t2_471;
// System.Net.Sockets.LingerOption
struct LingerOption_t2_467;
// System.Net.IPAddress
struct IPAddress_t2_326;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t2_480;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t2_470;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C" void TcpClient__ctor_m2_3642 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::.ctor(System.Net.Sockets.AddressFamily)
extern "C" void TcpClient__ctor_m2_3643 (TcpClient_t2_306 * __this, int32_t ___family, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::.ctor(System.Net.IPEndPoint)
extern "C" void TcpClient__ctor_m2_3644 (TcpClient_t2_306 * __this, IPEndPoint_t2_430 * ___local_end_point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::.ctor(System.String,System.Int32)
extern "C" void TcpClient__ctor_m2_3645 (TcpClient_t2_306 * __this, String_t* ___hostname, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::System.IDisposable.Dispose()
extern "C" void TcpClient_System_IDisposable_Dispose_m2_3646 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Init(System.Net.Sockets.AddressFamily)
extern "C" void TcpClient_Init_m2_3647 (TcpClient_t2_306 * __this, int32_t ___family, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpClient::get_Active()
extern "C" bool TcpClient_get_Active_m2_3648 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_Active(System.Boolean)
extern "C" void TcpClient_set_Active_m2_3649 (TcpClient_t2_306 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
extern "C" Socket_t2_471 * TcpClient_get_Client_m2_3650 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_Client(System.Net.Sockets.Socket)
extern "C" void TcpClient_set_Client_m2_3651 (TcpClient_t2_306 * __this, Socket_t2_471 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_Available()
extern "C" int32_t TcpClient_get_Available_m2_3652 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpClient::get_Connected()
extern "C" bool TcpClient_get_Connected_m2_3653 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpClient::get_ExclusiveAddressUse()
extern "C" bool TcpClient_get_ExclusiveAddressUse_m2_3654 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_ExclusiveAddressUse(System.Boolean)
extern "C" void TcpClient_set_ExclusiveAddressUse_m2_3655 (TcpClient_t2_306 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::SetTcpClient(System.Net.Sockets.Socket)
extern "C" void TcpClient_SetTcpClient_m2_3656 (TcpClient_t2_306 * __this, Socket_t2_471 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.LingerOption System.Net.Sockets.TcpClient::get_LingerState()
extern "C" LingerOption_t2_467 * TcpClient_get_LingerState_m2_3657 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_LingerState(System.Net.Sockets.LingerOption)
extern "C" void TcpClient_set_LingerState_m2_3658 (TcpClient_t2_306 * __this, LingerOption_t2_467 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.TcpClient::get_NoDelay()
extern "C" bool TcpClient_get_NoDelay_m2_3659 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_NoDelay(System.Boolean)
extern "C" void TcpClient_set_NoDelay_m2_3660 (TcpClient_t2_306 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_ReceiveBufferSize()
extern "C" int32_t TcpClient_get_ReceiveBufferSize_m2_3661 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_ReceiveBufferSize(System.Int32)
extern "C" void TcpClient_set_ReceiveBufferSize_m2_3662 (TcpClient_t2_306 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_ReceiveTimeout()
extern "C" int32_t TcpClient_get_ReceiveTimeout_m2_3663 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_ReceiveTimeout(System.Int32)
extern "C" void TcpClient_set_ReceiveTimeout_m2_3664 (TcpClient_t2_306 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_SendBufferSize()
extern "C" int32_t TcpClient_get_SendBufferSize_m2_3665 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_SendBufferSize(System.Int32)
extern "C" void TcpClient_set_SendBufferSize_m2_3666 (TcpClient_t2_306 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.TcpClient::get_SendTimeout()
extern "C" int32_t TcpClient_get_SendTimeout_m2_3667 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::set_SendTimeout(System.Int32)
extern "C" void TcpClient_set_SendTimeout_m2_3668 (TcpClient_t2_306 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C" void TcpClient_Close_m2_3669 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPEndPoint)
extern "C" void TcpClient_Connect_m2_3670 (TcpClient_t2_306 * __this, IPEndPoint_t2_430 * ___remote_end_point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPAddress,System.Int32)
extern "C" void TcpClient_Connect_m2_3671 (TcpClient_t2_306 * __this, IPAddress_t2_326 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::SetOptions()
extern "C" void TcpClient_SetOptions_m2_3672 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.String,System.Int32)
extern "C" void TcpClient_Connect_m2_3673 (TcpClient_t2_306 * __this, String_t* ___hostname, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Connect(System.Net.IPAddress[],System.Int32)
extern "C" void TcpClient_Connect_m2_3674 (TcpClient_t2_306 * __this, IPAddressU5BU5D_t2_480* ___ipAddresses, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::EndConnect(System.IAsyncResult)
extern "C" void TcpClient_EndConnect_m2_3675 (TcpClient_t2_306 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.Net.IPAddress,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * TcpClient_BeginConnect_m2_3676 (TcpClient_t2_306 * __this, IPAddress_t2_326 * ___address, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.Net.IPAddress[],System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * TcpClient_BeginConnect_m2_3677 (TcpClient_t2_306 * __this, IPAddressU5BU5D_t2_480* ___addresses, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * TcpClient_BeginConnect_m2_3678 (TcpClient_t2_306 * __this, String_t* ___host, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Dispose(System.Boolean)
extern "C" void TcpClient_Dispose_m2_3679 (TcpClient_t2_306 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::Finalize()
extern "C" void TcpClient_Finalize_m2_3680 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C" NetworkStream_t2_470 * TcpClient_GetStream_m2_3681 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.TcpClient::CheckDisposed()
extern "C" void TcpClient_CheckDisposed_m2_3682 (TcpClient_t2_306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
