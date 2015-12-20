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

// System.Net.ResponseStream
struct ResponseStream_t2_571;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_t2_577;
// System.IO.MemoryStream
struct MemoryStream_t1_250;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.ResponseStream::.ctor(System.IO.Stream,System.Net.HttpListenerResponse,System.Boolean)
extern "C" void ResponseStream__ctor_m2_4755 (ResponseStream_t2_571 * __this, Stream_t1_226 * ___stream, HttpListenerResponse_t2_577 * ___response, bool ___ignore_errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::.cctor()
extern "C" void ResponseStream__cctor_m2_4756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ResponseStream::get_CanRead()
extern "C" bool ResponseStream_get_CanRead_m2_4757 (ResponseStream_t2_571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ResponseStream::get_CanSeek()
extern "C" bool ResponseStream_get_CanSeek_m2_4758 (ResponseStream_t2_571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ResponseStream::get_CanWrite()
extern "C" bool ResponseStream_get_CanWrite_m2_4759 (ResponseStream_t2_571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.ResponseStream::get_Length()
extern "C" int64_t ResponseStream_get_Length_m2_4760 (ResponseStream_t2_571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.ResponseStream::get_Position()
extern "C" int64_t ResponseStream_get_Position_m2_4761 (ResponseStream_t2_571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::set_Position(System.Int64)
extern "C" void ResponseStream_set_Position_m2_4762 (ResponseStream_t2_571 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::Close()
extern "C" void ResponseStream_Close_m2_4763 (ResponseStream_t2_571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream System.Net.ResponseStream::GetHeaders(System.Boolean)
extern "C" MemoryStream_t1_250 * ResponseStream_GetHeaders_m2_4764 (ResponseStream_t2_571 * __this, bool ___closing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::Flush()
extern "C" void ResponseStream_Flush_m2_4765 (ResponseStream_t2_571 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.ResponseStream::GetChunkSizeBytes(System.Int32,System.Boolean)
extern "C" ByteU5BU5D_t1_72* ResponseStream_GetChunkSizeBytes_m2_4766 (Object_t * __this /* static, unused */, int32_t ___size, bool ___final, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern "C" void ResponseStream_InternalWrite_m2_4767 (ResponseStream_t2_571 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ResponseStream_Write_m2_4768 (ResponseStream_t2_571 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.ResponseStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseStream_BeginWrite_m2_4769 (ResponseStream_t2_571 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::EndWrite(System.IAsyncResult)
extern "C" void ResponseStream_EndWrite_m2_4770 (ResponseStream_t2_571 * __this, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ResponseStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ResponseStream_Read_m2_4771 (ResponseStream_t2_571 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.ResponseStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ResponseStream_BeginRead_m2_4772 (ResponseStream_t2_571 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ResponseStream::EndRead(System.IAsyncResult)
extern "C" int32_t ResponseStream_EndRead_m2_4773 (ResponseStream_t2_571 * __this, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.ResponseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ResponseStream_Seek_m2_4774 (ResponseStream_t2_571 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::SetLength(System.Int64)
extern "C" void ResponseStream_SetLength_m2_4775 (ResponseStream_t2_571 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
