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

// System.Net.ChunkedInputStream
struct ChunkedInputStream_t2_513;
// System.Net.HttpListenerContext
struct HttpListenerContext_t2_515;
// System.IO.Stream
struct Stream_t1_226;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.ChunkStream
struct ChunkStream_t2_509;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.ChunkedInputStream::.ctor(System.Net.HttpListenerContext,System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C" void ChunkedInputStream__ctor_m2_3808 (ChunkedInputStream_t2_513 * __this, HttpListenerContext_t2_515 * ___context, Stream_t1_226 * ___stream, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream System.Net.ChunkedInputStream::get_Decoder()
extern "C" ChunkStream_t2_509 * ChunkedInputStream_get_Decoder_m2_3809 (ChunkedInputStream_t2_513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkedInputStream::set_Decoder(System.Net.ChunkStream)
extern "C" void ChunkedInputStream_set_Decoder_m2_3810 (ChunkedInputStream_t2_513 * __this, ChunkStream_t2_509 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkedInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ChunkedInputStream_Read_m2_3811 (ChunkedInputStream_t2_513 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.ChunkedInputStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ChunkedInputStream_BeginRead_m2_3812 (ChunkedInputStream_t2_513 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___cback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkedInputStream::OnRead(System.IAsyncResult)
extern "C" void ChunkedInputStream_OnRead_m2_3813 (ChunkedInputStream_t2_513 * __this, Object_t * ___base_ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkedInputStream::EndRead(System.IAsyncResult)
extern "C" int32_t ChunkedInputStream_EndRead_m2_3814 (ChunkedInputStream_t2_513 * __this, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkedInputStream::Close()
extern "C" void ChunkedInputStream_Close_m2_3815 (ChunkedInputStream_t2_513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
