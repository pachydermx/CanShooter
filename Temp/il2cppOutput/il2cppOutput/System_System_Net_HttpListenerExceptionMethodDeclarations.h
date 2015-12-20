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

// System.Net.HttpListenerException
struct HttpListenerException_t2_578;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpListenerException::.ctor()
extern "C" void HttpListenerException__ctor_m2_4351 (HttpListenerException_t2_578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerException::.ctor(System.Int32)
extern "C" void HttpListenerException__ctor_m2_4352 (HttpListenerException_t2_578 * __this, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerException::.ctor(System.Int32,System.String)
extern "C" void HttpListenerException__ctor_m2_4353 (HttpListenerException_t2_578 * __this, int32_t ___errorCode, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpListenerException__ctor_m2_4354 (HttpListenerException_t2_578 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpListenerException::get_ErrorCode()
extern "C" int32_t HttpListenerException_get_ErrorCode_m2_4355 (HttpListenerException_t2_578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
