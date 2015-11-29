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

// System.Net.Sockets.Socket
struct Socket_t2_471;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.Collections.IList
struct IList_t1_427;
// System.String
struct String_t;
// System.Net.Sockets.Socket[]
struct SocketU5BU5D_t2_831;
// System.Net.Sockets.LingerOption
struct LingerOption_t2_467;
// System.Net.SocketAddress
struct SocketAddress_t2_606;
// System.Net.EndPoint
struct EndPoint_t2_479;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t2_485;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.IPAddress
struct IPAddress_t2_326;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t2_480;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t1_948;
// System.Exception
struct Exception_t1_33;
// System.Net.Sockets.Socket/WSABUF[]
struct WSABUFU5BU5D_t2_832;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"
#include "System_System_Net_Sockets_SocketType.h"
#include "System_System_Net_Sockets_ProtocolType.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_Sockets_SocketInformation.h"
#include "System_System_Net_Sockets_SocketFlags.h"
#include "System_System_Net_Sockets_SocketError.h"
#include "System_System_Net_Sockets_TransmitFileOptions.h"
#include "System_System_Net_Sockets_IPPacketInformation.h"
#include "System_System_Net_Sockets_SocketOptionLevel.h"
#include "System_System_Net_Sockets_SocketOptionName.h"
#include "System_System_Net_Sockets_IOControlCode.h"
#include "System_System_Net_Sockets_SelectMode.h"
#include "System_System_Net_Sockets_SocketShutdown.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.IntPtr)
extern "C" void Socket__ctor_m2_3397 (Socket_t2_471 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, IntPtr_t ___sock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.SocketInformation)
extern "C" void Socket__ctor_m2_3398 (Socket_t2_471 * __this, SocketInformation_t2_490  ___socketInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C" void Socket__ctor_m2_3399 (Socket_t2_471 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
extern "C" void Socket__cctor_m2_3400 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::AddSockets(System.Collections.ArrayList,System.Collections.IList,System.String)
extern "C" void Socket_AddSockets_m2_3401 (Object_t * __this /* static, unused */, ArrayList_t1_114 * ___sockets, Object_t * ___list, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Select_internal(System.Net.Sockets.Socket[]&,System.Int32,System.Int32&)
extern "C" void Socket_Select_internal_m2_3402 (Object_t * __this /* static, unused */, SocketU5BU5D_t2_831** ___sockets, int32_t ___microSeconds, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Select(System.Collections.IList,System.Collections.IList,System.Collections.IList,System.Int32)
extern "C" void Socket_Select_m2_3403 (Object_t * __this /* static, unused */, Object_t * ___checkRead, Object_t * ___checkWrite, Object_t * ___checkError, int32_t ___microSeconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SocketDefaults()
extern "C" void Socket_SocketDefaults_m2_3404 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Available_internal(System.IntPtr,System.Int32&)
extern "C" int32_t Socket_Available_internal_m2_3405 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_Available()
extern "C" int32_t Socket_get_Available_m2_3406 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_DontFragment()
extern "C" bool Socket_get_DontFragment_m2_3407 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_DontFragment(System.Boolean)
extern "C" void Socket_set_DontFragment_m2_3408 (Socket_t2_471 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_EnableBroadcast()
extern "C" bool Socket_get_EnableBroadcast_m2_3409 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_EnableBroadcast(System.Boolean)
extern "C" void Socket_set_EnableBroadcast_m2_3410 (Socket_t2_471 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_ExclusiveAddressUse()
extern "C" bool Socket_get_ExclusiveAddressUse_m2_3411 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_ExclusiveAddressUse(System.Boolean)
extern "C" void Socket_set_ExclusiveAddressUse_m2_3412 (Socket_t2_471 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_IsBound()
extern "C" bool Socket_get_IsBound_m2_3413 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.LingerOption System.Net.Sockets.Socket::get_LingerState()
extern "C" LingerOption_t2_467 * Socket_get_LingerState_m2_3414 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_LingerState(System.Net.Sockets.LingerOption)
extern "C" void Socket_set_LingerState_m2_3415 (Socket_t2_471 * __this, LingerOption_t2_467 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_MulticastLoopback()
extern "C" bool Socket_get_MulticastLoopback_m2_3416 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_MulticastLoopback(System.Boolean)
extern "C" void Socket_set_MulticastLoopback_m2_3417 (Socket_t2_471 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_UseOnlyOverlappedIO()
extern "C" bool Socket_get_UseOnlyOverlappedIO_m2_3418 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_UseOnlyOverlappedIO(System.Boolean)
extern "C" void Socket_set_UseOnlyOverlappedIO_m2_3419 (Socket_t2_471 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::get_Handle()
extern "C" IntPtr_t Socket_get_Handle_m2_3420 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32&)
extern "C" SocketAddress_t2_606 * Socket_LocalEndPoint_internal_m2_3421 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
extern "C" EndPoint_t2_479 * Socket_get_LocalEndPoint_m2_3422 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketType System.Net.Sockets.Socket::get_SocketType()
extern "C" int32_t Socket_get_SocketType_m2_3423 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_SendTimeout()
extern "C" int32_t Socket_get_SendTimeout_m2_3424 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_SendTimeout(System.Int32)
extern "C" void Socket_set_SendTimeout_m2_3425 (Socket_t2_471 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_ReceiveTimeout()
extern "C" int32_t Socket_get_ReceiveTimeout_m2_3426 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_ReceiveTimeout(System.Int32)
extern "C" void Socket_set_ReceiveTimeout_m2_3427 (Socket_t2_471 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::AcceptAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_AcceptAsync_m2_3428 (Socket_t2_471 * __this, SocketAsyncEventArgs_t2_485 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Accept_internal(System.IntPtr,System.Int32&,System.Boolean)
extern "C" IntPtr_t Socket_Accept_internal_m2_3429 (Object_t * __this /* static, unused */, IntPtr_t ___sock, int32_t* ___error, bool ___blocking, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::Accept()
extern "C" Socket_t2_471 * Socket_Accept_m2_3430 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Accept(System.Net.Sockets.Socket)
extern "C" void Socket_Accept_m2_3431 (Socket_t2_471 * __this, Socket_t2_471 * ___acceptSocket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginAccept(System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginAccept_m2_3432 (Socket_t2_471 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginAccept(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginAccept_m2_3433 (Socket_t2_471 * __this, int32_t ___receiveSize, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginAccept(System.Net.Sockets.Socket,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginAccept_m2_3434 (Socket_t2_471 * __this, Socket_t2_471 * ___acceptSocket, int32_t ___receiveSize, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.EndPoint,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginConnect_m2_3435 (Socket_t2_471 * __this, EndPoint_t2_479 * ___end_point, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.EndPoint,System.AsyncCallback,System.Object,System.Boolean)
extern "C" Object_t * Socket_BeginConnect_m2_3436 (Socket_t2_471 * __this, EndPoint_t2_479 * ___end_point, AsyncCallback_t1_28 * ___callback, Object_t * ___state, bool ___bypassSocketSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.IPAddress,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginConnect_m2_3437 (Socket_t2_471 * __this, IPAddress_t2_326 * ___address, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.IPAddress[],System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginConnect_m2_3438 (Socket_t2_471 * __this, IPAddressU5BU5D_t2_480* ___addresses, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginConnect_m2_3439 (Socket_t2_471 * __this, String_t* ___host, int32_t ___port, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginDisconnect(System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginDisconnect_m2_3440 (Socket_t2_471 * __this, bool ___reuseSocket, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceive_m2_3441 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceive_m2_3442 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceive_m2_3443 (Socket_t2_471 * __this, Object_t* ___buffers, int32_t ___socketFlags, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceive_m2_3444 (Socket_t2_471 * __this, Object_t* ___buffers, int32_t ___socketFlags, int32_t* ___errorCode, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceiveFrom_m2_3445 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, EndPoint_t2_479 ** ___remote_end, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginReceiveMessageFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginReceiveMessageFrom_m2_3446 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socketFlags, EndPoint_t2_479 ** ___remoteEP, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSend_m2_3447 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSend_m2_3448 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socketFlags, int32_t* ___errorCode, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSend_m2_3449 (Socket_t2_471 * __this, Object_t* ___buffers, int32_t ___socketFlags, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSend(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSend_m2_3450 (Socket_t2_471 * __this, Object_t* ___buffers, int32_t ___socketFlags, int32_t* ___errorCode, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSendFile(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSendFile_m2_3451 (Socket_t2_471 * __this, String_t* ___fileName, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSendFile(System.String,System.Byte[],System.Byte[],System.Net.Sockets.TransmitFileOptions,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSendFile_m2_3452 (Socket_t2_471 * __this, String_t* ___fileName, ByteU5BU5D_t1_72* ___preBuffer, ByteU5BU5D_t1_72* ___postBuffer, int32_t ___flags, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginSendTo(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint,System.AsyncCallback,System.Object)
extern "C" Object_t * Socket_BeginSendTo_m2_3453 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___socket_flags, EndPoint_t2_479 * ___remote_end, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C" void Socket_Bind_internal_m2_3454 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t2_606 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Bind(System.Net.EndPoint)
extern "C" void Socket_Bind_m2_3455 (Socket_t2_471 * __this, EndPoint_t2_479 * ___local_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ConnectAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_ConnectAsync_m2_3456 (Socket_t2_471 * __this, SocketAsyncEventArgs_t2_485 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress,System.Int32)
extern "C" void Socket_Connect_m2_3457 (Socket_t2_471 * __this, IPAddress_t2_326 * ___address, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress[],System.Int32)
extern "C" void Socket_Connect_m2_3458 (Socket_t2_471 * __this, IPAddressU5BU5D_t2_480* ___addresses, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.String,System.Int32)
extern "C" void Socket_Connect_m2_3459 (Socket_t2_471 * __this, String_t* ___host, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::DisconnectAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_DisconnectAsync_m2_3460 (Socket_t2_471 * __this, SocketAsyncEventArgs_t2_485 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Disconnect_internal(System.IntPtr,System.Boolean,System.Int32&)
extern "C" void Socket_Disconnect_internal_m2_3461 (Object_t * __this /* static, unused */, IntPtr_t ___sock, bool ___reuse, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Disconnect(System.Boolean)
extern "C" void Socket_Disconnect_m2_3462 (Socket_t2_471 * __this, bool ___reuseSocket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketInformation System.Net.Sockets.Socket::DuplicateAndClose(System.Int32)
extern "C" SocketInformation_t2_490  Socket_DuplicateAndClose_m2_3463 (Socket_t2_471 * __this, int32_t ___targetProcessId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.IAsyncResult)
extern "C" Socket_t2_471 * Socket_EndAccept_m2_3464 (Socket_t2_471 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.Byte[]&,System.IAsyncResult)
extern "C" Socket_t2_471 * Socket_EndAccept_m2_3465 (Socket_t2_471 * __this, ByteU5BU5D_t1_72** ___buffer, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket::EndAccept(System.Byte[]&,System.Int32&,System.IAsyncResult)
extern "C" Socket_t2_471 * Socket_EndAccept_m2_3466 (Socket_t2_471 * __this, ByteU5BU5D_t1_72** ___buffer, int32_t* ___bytesTransferred, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
extern "C" void Socket_EndConnect_m2_3467 (Socket_t2_471 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::EndDisconnect(System.IAsyncResult)
extern "C" void Socket_EndDisconnect_m2_3468 (Socket_t2_471 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult)
extern "C" int32_t Socket_EndReceive_m2_3469 (Socket_t2_471 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceive(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_EndReceive_m2_3470 (Socket_t2_471 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceiveFrom(System.IAsyncResult,System.Net.EndPoint&)
extern "C" int32_t Socket_EndReceiveFrom_m2_3471 (Socket_t2_471 * __this, Object_t * ___result, EndPoint_t2_479 ** ___end_point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndReceiveMessageFrom(System.IAsyncResult,System.Net.Sockets.SocketFlags&,System.Net.EndPoint&,System.Net.Sockets.IPPacketInformation&)
extern "C" int32_t Socket_EndReceiveMessageFrom_m2_3472 (Socket_t2_471 * __this, Object_t * ___asyncResult, int32_t* ___socketFlags, EndPoint_t2_479 ** ___endPoint, IPPacketInformation_t2_465 * ___ipPacketInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult)
extern "C" int32_t Socket_EndSend_m2_3473 (Socket_t2_471 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSend(System.IAsyncResult,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_EndSend_m2_3474 (Socket_t2_471 * __this, Object_t * ___asyncResult, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::EndSendFile(System.IAsyncResult)
extern "C" void Socket_EndSendFile_m2_3475 (Socket_t2_471 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.Sockets.Socket::InvalidAsyncOp(System.String)
extern "C" Exception_t1_33 * Socket_InvalidAsyncOp_m2_3476 (Socket_t2_471 * __this, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::EndSendTo(System.IAsyncResult)
extern "C" int32_t Socket_EndSendTo_m2_3477 (Socket_t2_471 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_arr_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Byte[]&,System.Int32&)
extern "C" void Socket_GetSocketOption_arr_internal_m2_3478 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, ByteU5BU5D_t1_72** ___byte_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Byte[])
extern "C" void Socket_GetSocketOption_m2_3479 (Socket_t2_471 * __this, int32_t ___optionLevel, int32_t ___optionName, ByteU5BU5D_t1_72* ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern "C" ByteU5BU5D_t1_72* Socket_GetSocketOption_m2_3480 (Socket_t2_471 * __this, int32_t ___optionLevel, int32_t ___optionName, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::WSAIoctl(System.IntPtr,System.Int32,System.Byte[],System.Byte[],System.Int32&)
extern "C" int32_t Socket_WSAIoctl_m2_3481 (Object_t * __this /* static, unused */, IntPtr_t ___sock, int32_t ___ioctl_code, ByteU5BU5D_t1_72* ___input, ByteU5BU5D_t1_72* ___output, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::IOControl(System.Int32,System.Byte[],System.Byte[])
extern "C" int32_t Socket_IOControl_m2_3482 (Socket_t2_471 * __this, int32_t ___ioctl_code, ByteU5BU5D_t1_72* ___in_value, ByteU5BU5D_t1_72* ___out_value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::IOControl(System.Net.Sockets.IOControlCode,System.Byte[],System.Byte[])
extern "C" int32_t Socket_IOControl_m2_3483 (Socket_t2_471 * __this, int64_t ___ioControlCode, ByteU5BU5D_t1_72* ___optionInValue, ByteU5BU5D_t1_72* ___optionOutValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen_internal(System.IntPtr,System.Int32,System.Int32&)
extern "C" void Socket_Listen_internal_m2_3484 (Object_t * __this /* static, unused */, IntPtr_t ___sock, int32_t ___backlog, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Listen(System.Int32)
extern "C" void Socket_Listen_m2_3485 (Socket_t2_471 * __this, int32_t ___backlog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
extern "C" bool Socket_Poll_m2_3486 (Socket_t2_471 * __this, int32_t ___time_us, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
extern "C" int32_t Socket_Receive_m2_3487 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Receive_m2_3488 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Receive_m2_3489 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Receive_m2_3490 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Receive_m2_3491 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF[],System.Net.Sockets.SocketFlags,System.Int32&)
extern "C" int32_t Socket_Receive_internal_m2_3492 (Object_t * __this /* static, unused */, IntPtr_t ___sock, WSABUFU5BU5D_t2_832* ___bufarray, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
extern "C" int32_t Socket_Receive_m2_3493 (Socket_t2_471 * __this, Object_t* ___buffers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Receive_m2_3494 (Socket_t2_471 * __this, Object_t* ___buffers, int32_t ___socketFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Receive_m2_3495 (Socket_t2_471 * __this, Object_t* ___buffers, int32_t ___socketFlags, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ReceiveFromAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_ReceiveFromAsync_m2_3496 (Socket_t2_471 * __this, SocketAsyncEventArgs_t2_485 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_m2_3497 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, EndPoint_t2_479 ** ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_m2_3498 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___flags, EndPoint_t2_479 ** ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_m2_3499 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___size, int32_t ___flags, EndPoint_t2_479 ** ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::RecvFrom_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&)
extern "C" int32_t Socket_RecvFrom_internal_m2_3500 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t2_606 ** ___sockaddr, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_m2_3501 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t2_479 ** ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C" int32_t Socket_ReceiveFrom_nochecks_m2_3502 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t2_479 ** ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks_exc(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Boolean,System.Int32&)
extern "C" int32_t Socket_ReceiveFrom_nochecks_exc_m2_3503 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t2_479 ** ___remote_end, bool ___throwOnError, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ReceiveMessageFromAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_ReceiveMessageFromAsync_m2_3504 (Socket_t2_471 * __this, SocketAsyncEventArgs_t2_485 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveMessageFrom(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags&,System.Net.EndPoint&,System.Net.Sockets.IPPacketInformation&)
extern "C" int32_t Socket_ReceiveMessageFrom_m2_3505 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t* ___socketFlags, EndPoint_t2_479 ** ___remoteEP, IPPacketInformation_t2_465 * ___ipPacketInformation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::SendPacketsAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_SendPacketsAsync_m2_3506 (Socket_t2_471 * __this, SocketAsyncEventArgs_t2_485 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[])
extern "C" int32_t Socket_Send_m2_3507 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Send_m2_3508 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Send_m2_3509 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Send_m2_3510 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Send_m2_3511 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Net.Sockets.Socket/WSABUF[],System.Net.Sockets.SocketFlags,System.Int32&)
extern "C" int32_t Socket_Send_internal_m2_3512 (Object_t * __this /* static, unused */, IntPtr_t ___sock, WSABUFU5BU5D_t2_832* ___bufarray, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
extern "C" int32_t Socket_Send_m2_3513 (Socket_t2_471 * __this, Object_t* ___buffers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags)
extern "C" int32_t Socket_Send_m2_3514 (Socket_t2_471 * __this, Object_t* ___buffers, int32_t ___socketFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Send_m2_3515 (Socket_t2_471 * __this, Object_t* ___buffers, int32_t ___socketFlags, int32_t* ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::SendFile(System.IntPtr,System.String,System.Byte[],System.Byte[],System.Net.Sockets.TransmitFileOptions)
extern "C" bool Socket_SendFile_m2_3516 (Object_t * __this /* static, unused */, IntPtr_t ___sock, String_t* ___filename, ByteU5BU5D_t1_72* ___pre_buffer, ByteU5BU5D_t1_72* ___post_buffer, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SendFile(System.String)
extern "C" void Socket_SendFile_m2_3517 (Socket_t2_471 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SendFile(System.String,System.Byte[],System.Byte[],System.Net.Sockets.TransmitFileOptions)
extern "C" void Socket_SendFile_m2_3518 (Socket_t2_471 * __this, String_t* ___fileName, ByteU5BU5D_t1_72* ___preBuffer, ByteU5BU5D_t1_72* ___postBuffer, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::SendToAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_SendToAsync_m2_3519 (Socket_t2_471 * __this, SocketAsyncEventArgs_t2_485 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_m2_3520 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, EndPoint_t2_479 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_m2_3521 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___flags, EndPoint_t2_479 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_m2_3522 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___size, int32_t ___flags, EndPoint_t2_479 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal_real(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C" int32_t Socket_SendTo_internal_real_m2_3523 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t2_606 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C" int32_t Socket_SendTo_internal_m2_3524 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t2_606 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_m2_3525 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t2_479 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C" int32_t Socket_SendTo_nochecks_m2_3526 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t2_479 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Byte[])
extern "C" void Socket_SetSocketOption_m2_3527 (Socket_t2_471 * __this, int32_t ___optionLevel, int32_t ___optionName, ByteU5BU5D_t1_72* ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object)
extern "C" void Socket_SetSocketOption_m2_3528 (Socket_t2_471 * __this, int32_t ___optionLevel, int32_t ___optionName, Object_t * ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Boolean)
extern "C" void Socket_SetSocketOption_m2_3529 (Socket_t2_471 * __this, int32_t ___optionLevel, int32_t ___optionName, bool ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
extern "C" void Socket_CheckProtocolSupport_m2_3530 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern "C" bool Socket_get_SupportsIPv4_m2_3531 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern "C" bool Socket_get_SupportsIPv6_m2_3532 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv4()
extern "C" bool Socket_get_OSSupportsIPv4_m2_3533 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_OSSupportsIPv6()
extern "C" bool Socket_get_OSSupportsIPv6_m2_3534 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern "C" IntPtr_t Socket_Socket_internal_m2_3535 (Socket_t2_471 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
extern "C" void Socket_Finalize_m2_3536 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern "C" int32_t Socket_get_AddressFamily_m2_3537 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern "C" void Socket_Blocking_internal_m2_3538 (Object_t * __this /* static, unused */, IntPtr_t ___socket, bool ___block, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern "C" bool Socket_get_Blocking_m2_3539 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern "C" void Socket_set_Blocking_m2_3540 (Socket_t2_471 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
extern "C" bool Socket_get_Connected_m2_3541 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Connected(System.Boolean)
extern "C" void Socket_set_Connected_m2_3542 (Socket_t2_471 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::get_ProtocolType()
extern "C" int32_t Socket_get_ProtocolType_m2_3543 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_NoDelay()
extern "C" bool Socket_get_NoDelay_m2_3544 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern "C" void Socket_set_NoDelay_m2_3545 (Socket_t2_471 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_ReceiveBufferSize()
extern "C" int32_t Socket_get_ReceiveBufferSize_m2_3546 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_ReceiveBufferSize(System.Int32)
extern "C" void Socket_set_ReceiveBufferSize_m2_3547 (Socket_t2_471 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_SendBufferSize()
extern "C" int32_t Socket_get_SendBufferSize_m2_3548 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_SendBufferSize(System.Int32)
extern "C" void Socket_set_SendBufferSize_m2_3549 (Socket_t2_471 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.Sockets.Socket::get_Ttl()
extern "C" int16_t Socket_get_Ttl_m2_3550 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Ttl(System.Int16)
extern "C" void Socket_set_Ttl_m2_3551 (Socket_t2_471 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::RemoteEndPoint_internal(System.IntPtr,System.Int32&)
extern "C" SocketAddress_t2_606 * Socket_RemoteEndPoint_internal_m2_3552 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
extern "C" EndPoint_t2_479 * Socket_get_RemoteEndPoint_m2_3553 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern "C" void Socket_Linger_m2_3554 (Socket_t2_471 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern "C" void Socket_Dispose_m2_3555 (Socket_t2_471 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose()
extern "C" void Socket_Dispose_m2_3556 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern "C" void Socket_Close_internal_m2_3557 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
extern "C" void Socket_Close_m2_3558 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close(System.Int32)
extern "C" void Socket_Close_m2_3559 (Socket_t2_471 * __this, int32_t ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal_real(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C" void Socket_Connect_internal_real_m2_3560 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t2_606 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C" void Socket_Connect_internal_m2_3561 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t2_606 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern "C" void Socket_Connect_internal_m2_3562 (Object_t * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t2_606 * ___sa, int32_t* ___error, bool ___requireSocketPolicyFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::CheckEndPoint(System.Net.SocketAddress)
extern "C" bool Socket_CheckEndPoint_m2_3563 (Object_t * __this /* static, unused */, SocketAddress_t2_606 * ___sa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Net.Sockets.Socket::GetUnityCrossDomainHelperMethod(System.String)
extern "C" MethodInfo_t * Socket_GetUnityCrossDomainHelperMethod_m2_3564 (Object_t * __this /* static, unused */, String_t* ___methodname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
extern "C" void Socket_Connect_m2_3565 (Socket_t2_471 * __this, EndPoint_t2_479 * ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint,System.Boolean)
extern "C" void Socket_Connect_m2_3566 (Socket_t2_471 * __this, EndPoint_t2_479 * ___remoteEP, bool ___requireSocketPolicy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ReceiveAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_ReceiveAsync_m2_3567 (Socket_t2_471 * __this, SocketAsyncEventArgs_t2_485 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::SendAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" bool Socket_SendAsync_m2_3568 (Socket_t2_471 * __this, SocketAsyncEventArgs_t2_485 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern "C" bool Socket_Poll_internal_m2_3569 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___mode, int32_t ___timeout, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode,System.Int32&)
extern "C" bool Socket_Poll_m2_3570 (Socket_t2_471 * __this, int32_t ___time_us, int32_t ___mode, int32_t* ___socket_error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C" int32_t Socket_Receive_internal_m2_3571 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Receive_nochecks_m2_3572 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern "C" void Socket_GetSocketOption_obj_internal_m2_3573 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Object_t ** ___obj_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C" int32_t Socket_Send_internal_m2_3574 (Object_t * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C" int32_t Socket_Send_nochecks_m2_3575 (Socket_t2_471 * __this, ByteU5BU5D_t1_72* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern "C" Object_t * Socket_GetSocketOption_m2_3576 (Socket_t2_471 * __this, int32_t ___optionLevel, int32_t ___optionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern "C" void Socket_Shutdown_internal_m2_3577 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___how, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown(System.Net.Sockets.SocketShutdown)
extern "C" void Socket_Shutdown_m2_3578 (Socket_t2_471 * __this, int32_t ___how, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern "C" void Socket_SetSocketOption_internal_m2_3579 (Object_t * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Object_t * ___obj_val, ByteU5BU5D_t1_72* ___byte_val, int32_t ___int_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern "C" void Socket_SetSocketOption_m2_3580 (Socket_t2_471 * __this, int32_t ___optionLevel, int32_t ___optionName, int32_t ___optionValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::ThrowIfUpd()
extern "C" void Socket_ThrowIfUpd_m2_3581 (Socket_t2_471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
