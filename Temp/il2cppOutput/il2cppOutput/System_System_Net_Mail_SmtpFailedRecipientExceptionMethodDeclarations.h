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

// System.Net.Mail.SmtpFailedRecipientException
struct SmtpFailedRecipientException_t2_313;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Net_Mail_SmtpStatusCode.h"

// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor()
extern "C" void SmtpFailedRecipientException__ctor_m2_2430 (SmtpFailedRecipientException_t2_313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.String)
extern "C" void SmtpFailedRecipientException__ctor_m2_2431 (SmtpFailedRecipientException_t2_313 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SmtpFailedRecipientException__ctor_m2_2432 (SmtpFailedRecipientException_t2_313 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.Net.Mail.SmtpStatusCode,System.String)
extern "C" void SmtpFailedRecipientException__ctor_m2_2433 (SmtpFailedRecipientException_t2_313 * __this, int32_t ___statusCode, String_t* ___failedRecipient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.String,System.Exception)
extern "C" void SmtpFailedRecipientException__ctor_m2_2434 (SmtpFailedRecipientException_t2_313 * __this, String_t* ___message, Exception_t1_33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.String,System.String,System.Exception)
extern "C" void SmtpFailedRecipientException__ctor_m2_2435 (SmtpFailedRecipientException_t2_313 * __this, String_t* ___message, String_t* ___failedRecipient, Exception_t1_33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::.ctor(System.Net.Mail.SmtpStatusCode,System.String,System.String)
extern "C" void SmtpFailedRecipientException__ctor_m2_2436 (SmtpFailedRecipientException_t2_313 * __this, int32_t ___statusCode, String_t* ___failedRecipient, String_t* ___serverResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SmtpFailedRecipientException_System_Runtime_Serialization_ISerializable_GetObjectData_m2_2437 (SmtpFailedRecipientException_t2_313 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.SmtpFailedRecipientException::get_FailedRecipient()
extern "C" String_t* SmtpFailedRecipientException_get_FailedRecipient_m2_2438 (SmtpFailedRecipientException_t2_313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SmtpFailedRecipientException_GetObjectData_m2_2439 (SmtpFailedRecipientException_t2_313 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
