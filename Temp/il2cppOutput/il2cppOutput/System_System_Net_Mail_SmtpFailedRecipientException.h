#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "System_System_Net_Mail_SmtpException.h"

// System.Net.Mail.SmtpFailedRecipientException
struct  SmtpFailedRecipientException_t2_313  : public SmtpException_t2_312
{
	// System.String System.Net.Mail.SmtpFailedRecipientException::failedRecipient
	String_t* ___failedRecipient_12;
};
