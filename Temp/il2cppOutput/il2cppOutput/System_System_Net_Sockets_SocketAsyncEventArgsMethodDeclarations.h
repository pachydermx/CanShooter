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

// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t2_485;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t1_951;
// System.Net.Sockets.Socket
struct Socket_t2_471;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t1_950;
// System.Net.EndPoint
struct EndPoint_t2_479;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_SocketAsyncOperation.h"
#include "System_System_Net_Sockets_SocketError.h"
#include "System_System_Net_Sockets_SocketFlags.h"

// System.Void System.Net.Sockets.SocketAsyncEventArgs::.ctor(System.Boolean)
extern "C" void SocketAsyncEventArgs__ctor_m2_3582 (SocketAsyncEventArgs_t2_485 * __this, bool ___policy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::.ctor()
extern "C" void SocketAsyncEventArgs__ctor_m2_3583 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::add_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
extern "C" void SocketAsyncEventArgs_add_Completed_m2_3584 (SocketAsyncEventArgs_t2_485 * __this, EventHandler_1_t1_951 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::remove_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
extern "C" void SocketAsyncEventArgs_remove_Completed_m2_3585 (SocketAsyncEventArgs_t2_485 * __this, EventHandler_1_t1_951 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_AcceptSocket()
extern "C" Socket_t2_471 * SocketAsyncEventArgs_get_AcceptSocket_m2_3586 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_AcceptSocket(System.Net.Sockets.Socket)
extern "C" void SocketAsyncEventArgs_set_AcceptSocket_m2_3587 (SocketAsyncEventArgs_t2_485 * __this, Socket_t2_471 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.SocketAsyncEventArgs::get_Buffer()
extern "C" ByteU5BU5D_t1_72* SocketAsyncEventArgs_get_Buffer_m2_3588 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_Buffer(System.Byte[])
extern "C" void SocketAsyncEventArgs_set_Buffer_m2_3589 (SocketAsyncEventArgs_t2_485 * __this, ByteU5BU5D_t1_72* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::get_BufferList()
extern "C" Object_t* SocketAsyncEventArgs_get_BufferList_m2_3590 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BufferList(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
extern "C" void SocketAsyncEventArgs_set_BufferList_m2_3591 (SocketAsyncEventArgs_t2_485 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_BytesTransferred()
extern "C" int32_t SocketAsyncEventArgs_get_BytesTransferred_m2_3592 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BytesTransferred(System.Int32)
extern "C" void SocketAsyncEventArgs_set_BytesTransferred_m2_3593 (SocketAsyncEventArgs_t2_485 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_Count()
extern "C" int32_t SocketAsyncEventArgs_get_Count_m2_3594 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_Count(System.Int32)
extern "C" void SocketAsyncEventArgs_set_Count_m2_3595 (SocketAsyncEventArgs_t2_485 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::get_DisconnectReuseSocket()
extern "C" bool SocketAsyncEventArgs_get_DisconnectReuseSocket_m2_3596 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_DisconnectReuseSocket(System.Boolean)
extern "C" void SocketAsyncEventArgs_set_DisconnectReuseSocket_m2_3597 (SocketAsyncEventArgs_t2_485 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::get_LastOperation()
extern "C" int32_t SocketAsyncEventArgs_get_LastOperation_m2_3598 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_LastOperation(System.Net.Sockets.SocketAsyncOperation)
extern "C" void SocketAsyncEventArgs_set_LastOperation_m2_3599 (SocketAsyncEventArgs_t2_485 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_Offset()
extern "C" int32_t SocketAsyncEventArgs_get_Offset_m2_3600 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_Offset(System.Int32)
extern "C" void SocketAsyncEventArgs_set_Offset_m2_3601 (SocketAsyncEventArgs_t2_485 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::get_RemoteEndPoint()
extern "C" EndPoint_t2_479 * SocketAsyncEventArgs_get_RemoteEndPoint_m2_3602 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_RemoteEndPoint(System.Net.EndPoint)
extern "C" void SocketAsyncEventArgs_set_RemoteEndPoint_m2_3603 (SocketAsyncEventArgs_t2_485 * __this, EndPoint_t2_479 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_SendPacketsSendSize()
extern "C" int32_t SocketAsyncEventArgs_get_SendPacketsSendSize_m2_3604 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SendPacketsSendSize(System.Int32)
extern "C" void SocketAsyncEventArgs_set_SendPacketsSendSize_m2_3605 (SocketAsyncEventArgs_t2_485 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::get_SocketError()
extern "C" int32_t SocketAsyncEventArgs_get_SocketError_m2_3606 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
extern "C" void SocketAsyncEventArgs_set_SocketError_m2_3607 (SocketAsyncEventArgs_t2_485 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncEventArgs::get_SocketFlags()
extern "C" int32_t SocketAsyncEventArgs_get_SocketFlags_m2_3608 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketFlags(System.Net.Sockets.SocketFlags)
extern "C" void SocketAsyncEventArgs_set_SocketFlags_m2_3609 (SocketAsyncEventArgs_t2_485 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.SocketAsyncEventArgs::get_UserToken()
extern "C" Object_t * SocketAsyncEventArgs_get_UserToken_m2_3610 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_UserToken(System.Object)
extern "C" void SocketAsyncEventArgs_set_UserToken_m2_3611 (SocketAsyncEventArgs_t2_485 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_ConnectSocket()
extern "C" Socket_t2_471 * SocketAsyncEventArgs_get_ConnectSocket_m2_3612 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::get_PolicyRestricted()
extern "C" bool SocketAsyncEventArgs_get_PolicyRestricted_m2_3613 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_PolicyRestricted(System.Boolean)
extern "C" void SocketAsyncEventArgs_set_PolicyRestricted_m2_3614 (SocketAsyncEventArgs_t2_485 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Finalize()
extern "C" void SocketAsyncEventArgs_Finalize_m2_3615 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose(System.Boolean)
extern "C" void SocketAsyncEventArgs_Dispose_m2_3616 (SocketAsyncEventArgs_t2_485 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
extern "C" void SocketAsyncEventArgs_Dispose_m2_3617 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs)
extern "C" void SocketAsyncEventArgs_OnCompleted_m2_3618 (SocketAsyncEventArgs_t2_485 * __this, SocketAsyncEventArgs_t2_485 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBuffer(System.Int32,System.Int32)
extern "C" void SocketAsyncEventArgs_SetBuffer_m2_3619 (SocketAsyncEventArgs_t2_485 * __this, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBuffer(System.Byte[],System.Int32,System.Int32)
extern "C" void SocketAsyncEventArgs_SetBuffer_m2_3620 (SocketAsyncEventArgs_t2_485 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBufferInternal(System.Byte[],System.Int32,System.Int32)
extern "C" void SocketAsyncEventArgs_SetBufferInternal_m2_3621 (SocketAsyncEventArgs_t2_485 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::ReceiveCallback()
extern "C" void SocketAsyncEventArgs_ReceiveCallback_m2_3622 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::ConnectCallback()
extern "C" void SocketAsyncEventArgs_ConnectCallback_m2_3623 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::TryConnect(System.Net.EndPoint)
extern "C" int32_t SocketAsyncEventArgs_TryConnect_m2_3624 (SocketAsyncEventArgs_t2_485 * __this, EndPoint_t2_479 * ___endpoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SendCallback()
extern "C" void SocketAsyncEventArgs_SendCallback_m2_3625 (SocketAsyncEventArgs_t2_485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::DoOperation(System.Net.Sockets.SocketAsyncOperation,System.Net.Sockets.Socket)
extern "C" void SocketAsyncEventArgs_DoOperation_m2_3626 (SocketAsyncEventArgs_t2_485 * __this, int32_t ___operation, Socket_t2_471 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
