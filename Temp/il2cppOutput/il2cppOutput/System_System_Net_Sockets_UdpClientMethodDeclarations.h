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

// System.Net.Sockets.UdpClient
struct UdpClient_t2_500;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;
// System.String
struct String_t;
// System.Net.EndPoint
struct EndPoint_t2_479;
// System.Net.IPAddress
struct IPAddress_t2_326;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.Sockets.Socket
struct Socket_t2_471;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.Sockets.UdpClient::.ctor()
extern "C" void UdpClient__ctor_m2_3703 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Net.Sockets.AddressFamily)
extern "C" void UdpClient__ctor_m2_3704 (UdpClient_t2_500 * __this, int32_t ___family, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32)
extern "C" void UdpClient__ctor_m2_3705 (UdpClient_t2_500 * __this, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Net.IPEndPoint)
extern "C" void UdpClient__ctor_m2_3706 (UdpClient_t2_500 * __this, IPEndPoint_t2_430 * ___localEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32,System.Net.Sockets.AddressFamily)
extern "C" void UdpClient__ctor_m2_3707 (UdpClient_t2_500 * __this, int32_t ___port, int32_t ___family, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::.ctor(System.String,System.Int32)
extern "C" void UdpClient__ctor_m2_3708 (UdpClient_t2_500 * __this, String_t* ___hostname, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::System.IDisposable.Dispose()
extern "C" void UdpClient_System_IDisposable_Dispose_m2_3709 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::InitSocket(System.Net.EndPoint)
extern "C" void UdpClient_InitSocket_m2_3710 (UdpClient_t2_500 * __this, EndPoint_t2_479 * ___localEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::Close()
extern "C" void UdpClient_Close_m2_3711 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::DoConnect(System.Net.IPEndPoint)
extern "C" void UdpClient_DoConnect_m2_3712 (UdpClient_t2_500 * __this, IPEndPoint_t2_430 * ___endPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::Connect(System.Net.IPEndPoint)
extern "C" void UdpClient_Connect_m2_3713 (UdpClient_t2_500 * __this, IPEndPoint_t2_430 * ___endPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::Connect(System.Net.IPAddress,System.Int32)
extern "C" void UdpClient_Connect_m2_3714 (UdpClient_t2_500 * __this, IPAddress_t2_326 * ___addr, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::Connect(System.String,System.Int32)
extern "C" void UdpClient_Connect_m2_3715 (UdpClient_t2_500 * __this, String_t* ___hostname, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::DropMulticastGroup(System.Net.IPAddress)
extern "C" void UdpClient_DropMulticastGroup_m2_3716 (UdpClient_t2_500 * __this, IPAddress_t2_326 * ___multicastAddr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::DropMulticastGroup(System.Net.IPAddress,System.Int32)
extern "C" void UdpClient_DropMulticastGroup_m2_3717 (UdpClient_t2_500 * __this, IPAddress_t2_326 * ___multicastAddr, int32_t ___ifindex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::JoinMulticastGroup(System.Net.IPAddress)
extern "C" void UdpClient_JoinMulticastGroup_m2_3718 (UdpClient_t2_500 * __this, IPAddress_t2_326 * ___multicastAddr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::JoinMulticastGroup(System.Int32,System.Net.IPAddress)
extern "C" void UdpClient_JoinMulticastGroup_m2_3719 (UdpClient_t2_500 * __this, int32_t ___ifindex, IPAddress_t2_326 * ___multicastAddr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::JoinMulticastGroup(System.Net.IPAddress,System.Int32)
extern "C" void UdpClient_JoinMulticastGroup_m2_3720 (UdpClient_t2_500 * __this, IPAddress_t2_326 * ___multicastAddr, int32_t ___timeToLive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::JoinMulticastGroup(System.Net.IPAddress,System.Net.IPAddress)
extern "C" void UdpClient_JoinMulticastGroup_m2_3721 (UdpClient_t2_500 * __this, IPAddress_t2_326 * ___multicastAddr, IPAddress_t2_326 * ___localAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.UdpClient::Receive(System.Net.IPEndPoint&)
extern "C" ByteU5BU5D_t1_72* UdpClient_Receive_m2_3722 (UdpClient_t2_500 * __this, IPEndPoint_t2_430 ** ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.UdpClient::DoSend(System.Byte[],System.Int32,System.Net.IPEndPoint)
extern "C" int32_t UdpClient_DoSend_m2_3723 (UdpClient_t2_500 * __this, ByteU5BU5D_t1_72* ___dgram, int32_t ___bytes, IPEndPoint_t2_430 * ___endPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.UdpClient::Send(System.Byte[],System.Int32)
extern "C" int32_t UdpClient_Send_m2_3724 (UdpClient_t2_500 * __this, ByteU5BU5D_t1_72* ___dgram, int32_t ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.UdpClient::Send(System.Byte[],System.Int32,System.Net.IPEndPoint)
extern "C" int32_t UdpClient_Send_m2_3725 (UdpClient_t2_500 * __this, ByteU5BU5D_t1_72* ___dgram, int32_t ___bytes, IPEndPoint_t2_430 * ___endPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.UdpClient::Send(System.Byte[],System.Int32,System.String,System.Int32)
extern "C" int32_t UdpClient_Send_m2_3726 (UdpClient_t2_500 * __this, ByteU5BU5D_t1_72* ___dgram, int32_t ___bytes, String_t* ___hostname, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.UdpClient::CutArray(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t1_72* UdpClient_CutArray_m2_3727 (UdpClient_t2_500 * __this, ByteU5BU5D_t1_72* ___orig, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.UdpClient::DoBeginSend(System.Byte[],System.Int32,System.Net.IPEndPoint,System.AsyncCallback,System.Object)
extern "C" Object_t * UdpClient_DoBeginSend_m2_3728 (UdpClient_t2_500 * __this, ByteU5BU5D_t1_72* ___datagram, int32_t ___bytes, IPEndPoint_t2_430 * ___endPoint, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginSend(System.Byte[],System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * UdpClient_BeginSend_m2_3729 (UdpClient_t2_500 * __this, ByteU5BU5D_t1_72* ___datagram, int32_t ___bytes, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginSend(System.Byte[],System.Int32,System.Net.IPEndPoint,System.AsyncCallback,System.Object)
extern "C" Object_t * UdpClient_BeginSend_m2_3730 (UdpClient_t2_500 * __this, ByteU5BU5D_t1_72* ___datagram, int32_t ___bytes, IPEndPoint_t2_430 * ___endPoint, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginSend(System.Byte[],System.Int32,System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * UdpClient_BeginSend_m2_3731 (UdpClient_t2_500 * __this, ByteU5BU5D_t1_72* ___datagram, int32_t ___bytes, String_t* ___hostname, int32_t ___port, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.UdpClient::EndSend(System.IAsyncResult)
extern "C" int32_t UdpClient_EndSend_m2_3732 (UdpClient_t2_500 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginReceive(System.AsyncCallback,System.Object)
extern "C" Object_t * UdpClient_BeginReceive_m2_3733 (UdpClient_t2_500 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.UdpClient::EndReceive(System.IAsyncResult,System.Net.IPEndPoint&)
extern "C" ByteU5BU5D_t1_72* UdpClient_EndReceive_m2_3734 (UdpClient_t2_500 * __this, Object_t * ___asyncResult, IPEndPoint_t2_430 ** ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.UdpClient::get_Active()
extern "C" bool UdpClient_get_Active_m2_3735 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::set_Active(System.Boolean)
extern "C" void UdpClient_set_Active_m2_3736 (UdpClient_t2_500 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::get_Client()
extern "C" Socket_t2_471 * UdpClient_get_Client_m2_3737 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::set_Client(System.Net.Sockets.Socket)
extern "C" void UdpClient_set_Client_m2_3738 (UdpClient_t2_500 * __this, Socket_t2_471 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.UdpClient::get_Available()
extern "C" int32_t UdpClient_get_Available_m2_3739 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.UdpClient::get_DontFragment()
extern "C" bool UdpClient_get_DontFragment_m2_3740 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::set_DontFragment(System.Boolean)
extern "C" void UdpClient_set_DontFragment_m2_3741 (UdpClient_t2_500 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.UdpClient::get_EnableBroadcast()
extern "C" bool UdpClient_get_EnableBroadcast_m2_3742 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::set_EnableBroadcast(System.Boolean)
extern "C" void UdpClient_set_EnableBroadcast_m2_3743 (UdpClient_t2_500 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.UdpClient::get_ExclusiveAddressUse()
extern "C" bool UdpClient_get_ExclusiveAddressUse_m2_3744 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::set_ExclusiveAddressUse(System.Boolean)
extern "C" void UdpClient_set_ExclusiveAddressUse_m2_3745 (UdpClient_t2_500 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.UdpClient::get_MulticastLoopback()
extern "C" bool UdpClient_get_MulticastLoopback_m2_3746 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::set_MulticastLoopback(System.Boolean)
extern "C" void UdpClient_set_MulticastLoopback_m2_3747 (UdpClient_t2_500 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.Sockets.UdpClient::get_Ttl()
extern "C" int16_t UdpClient_get_Ttl_m2_3748 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::set_Ttl(System.Int16)
extern "C" void UdpClient_set_Ttl_m2_3749 (UdpClient_t2_500 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::Dispose(System.Boolean)
extern "C" void UdpClient_Dispose_m2_3750 (UdpClient_t2_500 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::Finalize()
extern "C" void UdpClient_Finalize_m2_3751 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.UdpClient::CheckDisposed()
extern "C" void UdpClient_CheckDisposed_m2_3752 (UdpClient_t2_500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
