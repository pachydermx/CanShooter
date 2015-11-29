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

// System.Security.Authentication.AuthenticationException
struct AuthenticationException_t2_645;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Authentication.AuthenticationException::.ctor()
extern "C" void AuthenticationException__ctor_m2_5367 (AuthenticationException_t2_645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Authentication.AuthenticationException::.ctor(System.String)
extern "C" void AuthenticationException__ctor_m2_5368 (AuthenticationException_t2_645 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Authentication.AuthenticationException::.ctor(System.String,System.Exception)
extern "C" void AuthenticationException__ctor_m2_5369 (AuthenticationException_t2_645 * __this, String_t* ___message, Exception_t1_33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Authentication.AuthenticationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AuthenticationException__ctor_m2_5370 (AuthenticationException_t2_645 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
