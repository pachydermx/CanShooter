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

// System.Net.FileWebResponse
struct FileWebResponse_t2_550;
// System.Uri
struct Uri_t2_284;
// System.IO.FileStream
struct FileStream_t1_246;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;
// System.IO.Stream
struct Stream_t1_226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
extern "C" void FileWebResponse__ctor_m2_4096 (FileWebResponse_t2_550 * __this, Uri_t2_284 * ___responseUri, FileStream_t1_246 * ___fileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse__ctor_m2_4097 (FileWebResponse_t2_550 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m2_4098 (FileWebResponse_t2_550 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
extern "C" void FileWebResponse_System_IDisposable_Dispose_m2_4099 (FileWebResponse_t2_550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebResponse::get_ContentLength()
extern "C" int64_t FileWebResponse_get_ContentLength_m2_4100 (FileWebResponse_t2_550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebResponse::get_ContentType()
extern "C" String_t* FileWebResponse_get_ContentType_m2_4101 (FileWebResponse_t2_550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
extern "C" WebHeaderCollection_t2_510 * FileWebResponse_get_Headers_m2_4102 (FileWebResponse_t2_550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebResponse::get_ResponseUri()
extern "C" Uri_t2_284 * FileWebResponse_get_ResponseUri_m2_4103 (FileWebResponse_t2_550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse_GetObjectData_m2_4104 (FileWebResponse_t2_550 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
extern "C" Stream_t1_226 * FileWebResponse_GetResponseStream_m2_4105 (FileWebResponse_t2_550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
extern "C" void FileWebResponse_Finalize_m2_4106 (FileWebResponse_t2_550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
extern "C" void FileWebResponse_Close_m2_4107 (FileWebResponse_t2_550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
extern "C" void FileWebResponse_Dispose_m2_4108 (FileWebResponse_t2_550 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
extern "C" void FileWebResponse_CheckDisposed_m2_4109 (FileWebResponse_t2_550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
