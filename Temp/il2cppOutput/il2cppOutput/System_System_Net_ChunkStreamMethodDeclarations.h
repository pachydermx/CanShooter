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

// System.Net.ChunkStream
struct ChunkStream_t2_509;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_ChunkStream_State.h"

// System.Void System.Net.ChunkStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Net.WebHeaderCollection)
extern "C" void ChunkStream__ctor_m2_3791 (ChunkStream_t2_509 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, WebHeaderCollection_t2_510 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::.ctor(System.Net.WebHeaderCollection)
extern "C" void ChunkStream__ctor_m2_3792 (ChunkStream_t2_509 * __this, WebHeaderCollection_t2_510 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ResetBuffer()
extern "C" void ChunkStream_ResetBuffer_m2_3793 (ChunkStream_t2_509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::WriteAndReadBack(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C" void ChunkStream_WriteAndReadBack_m2_3794 (ChunkStream_t2_509 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, int32_t* ___read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ChunkStream_Read_m2_3795 (ChunkStream_t2_509 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::ReadFromChunks(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ChunkStream_ReadFromChunks_m2_3796 (ChunkStream_t2_509 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ChunkStream_Write_m2_3797 (ChunkStream_t2_509 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::InternalWrite(System.Byte[],System.Int32&,System.Int32)
extern "C" void ChunkStream_InternalWrite_m2_3798 (ChunkStream_t2_509 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ChunkStream::get_WantMore()
extern "C" bool ChunkStream_get_WantMore_m2_3799 (ChunkStream_t2_509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream::get_ChunkLeft()
extern "C" int32_t ChunkStream_get_ChunkLeft_m2_3800 (ChunkStream_t2_509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadBody(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadBody_m2_3801 (ChunkStream_t2_509 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::GetChunkSize(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_GetChunkSize_m2_3802 (ChunkStream_t2_509 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ChunkStream::RemoveChunkExtension(System.String)
extern "C" String_t* ChunkStream_RemoveChunkExtension_m2_3803 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadCRLF(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadCRLF_m2_3804 (ChunkStream_t2_509 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ChunkStream/State System.Net.ChunkStream::ReadTrailer(System.Byte[],System.Int32&,System.Int32)
extern "C" int32_t ChunkStream_ReadTrailer_m2_3805 (ChunkStream_t2_509 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t* ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkStream::ThrowProtocolViolation(System.String)
extern "C" void ChunkStream_ThrowProtocolViolation_m2_3806 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
