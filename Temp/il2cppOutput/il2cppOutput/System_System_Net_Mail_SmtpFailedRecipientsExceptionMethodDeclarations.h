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

// System.Net.Mail.SmtpFailedRecipientsException
struct SmtpFailedRecipientsException_t2_314;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Net.Mail.SmtpFailedRecipientException[]
struct SmtpFailedRecipientExceptionU5BU5D_t2_315;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.Mail.SmtpFailedRecipientsException::.ctor()
extern "C" void SmtpFailedRecipientsException__ctor_m2_2440 (SmtpFailedRecipientsException_t2_314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientsException::.ctor(System.String)
extern "C" void SmtpFailedRecipientsException__ctor_m2_2441 (SmtpFailedRecipientsException_t2_314 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientsException::.ctor(System.String,System.Exception)
extern "C" void SmtpFailedRecipientsException__ctor_m2_2442 (SmtpFailedRecipientsException_t2_314 * __this, String_t* ___message, Exception_t1_33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientsException::.ctor(System.String,System.Net.Mail.SmtpFailedRecipientException[])
extern "C" void SmtpFailedRecipientsException__ctor_m2_2443 (SmtpFailedRecipientsException_t2_314 * __this, String_t* ___message, SmtpFailedRecipientExceptionU5BU5D_t2_315* ___innerExceptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SmtpFailedRecipientsException__ctor_m2_2444 (SmtpFailedRecipientsException_t2_314 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientsException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SmtpFailedRecipientsException_System_Runtime_Serialization_ISerializable_GetObjectData_m2_2445 (SmtpFailedRecipientsException_t2_314 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.SmtpFailedRecipientException[] System.Net.Mail.SmtpFailedRecipientsException::get_InnerExceptions()
extern "C" SmtpFailedRecipientExceptionU5BU5D_t2_315* SmtpFailedRecipientsException_get_InnerExceptions_m2_2446 (SmtpFailedRecipientsException_t2_314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpFailedRecipientsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SmtpFailedRecipientsException_GetObjectData_m2_2447 (SmtpFailedRecipientsException_t2_314 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
