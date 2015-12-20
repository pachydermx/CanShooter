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

// System.Net.Sockets.NetworkStream
struct NetworkStream_t2_470;
// System.Net.Sockets.Socket
struct Socket_t2_471;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_FileAccess.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket)
extern "C" void NetworkStream__ctor_m2_3297 (NetworkStream_t2_470 * __this, Socket_t2_471 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.Boolean)
extern "C" void NetworkStream__ctor_m2_3298 (NetworkStream_t2_470 * __this, Socket_t2_471 * ___socket, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.IO.FileAccess)
extern "C" void NetworkStream__ctor_m2_3299 (NetworkStream_t2_470 * __this, Socket_t2_471 * ___socket, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::.ctor(System.Net.Sockets.Socket,System.IO.FileAccess,System.Boolean)
extern "C" void NetworkStream__ctor_m2_3300 (NetworkStream_t2_470 * __this, Socket_t2_471 * ___socket, int32_t ___access, bool ___owns_socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::System.IDisposable.Dispose()
extern "C" void NetworkStream_System_IDisposable_Dispose_m2_3301 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanRead()
extern "C" bool NetworkStream_get_CanRead_m2_3302 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanSeek()
extern "C" bool NetworkStream_get_CanSeek_m2_3303 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanTimeout()
extern "C" bool NetworkStream_get_CanTimeout_m2_3304 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_CanWrite()
extern "C" bool NetworkStream_get_CanWrite_m2_3305 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_DataAvailable()
extern "C" bool NetworkStream_get_DataAvailable_m2_3306 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Length()
extern "C" int64_t NetworkStream_get_Length_m2_3307 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::get_Position()
extern "C" int64_t NetworkStream_get_Position_m2_3308 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_Position(System.Int64)
extern "C" void NetworkStream_set_Position_m2_3309 (NetworkStream_t2_470 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_Readable()
extern "C" bool NetworkStream_get_Readable_m2_3310 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_Readable(System.Boolean)
extern "C" void NetworkStream_set_Readable_m2_3311 (NetworkStream_t2_470 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_ReadTimeout()
extern "C" int32_t NetworkStream_get_ReadTimeout_m2_3312 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_ReadTimeout(System.Int32)
extern "C" void NetworkStream_set_ReadTimeout_m2_3313 (NetworkStream_t2_470 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::get_Socket()
extern "C" Socket_t2_471 * NetworkStream_get_Socket_m2_3314 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.NetworkStream::get_Writeable()
extern "C" bool NetworkStream_get_Writeable_m2_3315 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_Writeable(System.Boolean)
extern "C" void NetworkStream_set_Writeable_m2_3316 (NetworkStream_t2_470 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::get_WriteTimeout()
extern "C" int32_t NetworkStream_get_WriteTimeout_m2_3317 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::set_WriteTimeout(System.Int32)
extern "C" void NetworkStream_set_WriteTimeout_m2_3318 (NetworkStream_t2_470 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NetworkStream_BeginRead_m2_3319 (NetworkStream_t2_470 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.NetworkStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NetworkStream_BeginWrite_m2_3320 (NetworkStream_t2_470 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Finalize()
extern "C" void NetworkStream_Finalize_m2_3321 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Dispose(System.Boolean)
extern "C" void NetworkStream_Dispose_m2_3322 (NetworkStream_t2_470 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::EndRead(System.IAsyncResult)
extern "C" int32_t NetworkStream_EndRead_m2_3323 (NetworkStream_t2_470 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::EndWrite(System.IAsyncResult)
extern "C" void NetworkStream_EndWrite_m2_3324 (NetworkStream_t2_470 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Flush()
extern "C" void NetworkStream_Flush_m2_3325 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.NetworkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t NetworkStream_Read_m2_3326 (NetworkStream_t2_470 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Sockets.NetworkStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t NetworkStream_Seek_m2_3327 (NetworkStream_t2_470 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::SetLength(System.Int64)
extern "C" void NetworkStream_SetLength_m2_3328 (NetworkStream_t2_470 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void NetworkStream_Write_m2_3329 (NetworkStream_t2_470 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.NetworkStream::CheckDisposed()
extern "C" void NetworkStream_CheckDisposed_m2_3330 (NetworkStream_t2_470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
