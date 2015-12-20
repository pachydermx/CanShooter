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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mail_SmtpClient_SmtpResponse.h"

// System.Net.Mail.SmtpClient/SmtpResponse System.Net.Mail.SmtpClient/SmtpResponse::Parse(System.String)
extern "C" SmtpResponse_t2_302  SmtpResponse_Parse_m2_2343 (Object_t * __this /* static, unused */, String_t* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void SmtpResponse_t2_302_marshal(const SmtpResponse_t2_302& unmarshaled, SmtpResponse_t2_302_marshaled& marshaled);
extern "C" void SmtpResponse_t2_302_marshal_back(const SmtpResponse_t2_302_marshaled& marshaled, SmtpResponse_t2_302& unmarshaled);
extern "C" void SmtpResponse_t2_302_marshal_cleanup(SmtpResponse_t2_302_marshaled& marshaled);
