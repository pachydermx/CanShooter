#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mail.SmtpFailedRecipientException[]
struct SmtpFailedRecipientExceptionU5BU5D_t2_315;

#include "System_System_Net_Mail_SmtpFailedRecipientException.h"

// System.Net.Mail.SmtpFailedRecipientsException
struct  SmtpFailedRecipientsException_t2_314  : public SmtpFailedRecipientException_t2_313
{
	// System.Net.Mail.SmtpFailedRecipientException[] System.Net.Mail.SmtpFailedRecipientsException::innerExceptions
	SmtpFailedRecipientExceptionU5BU5D_t2_315* ___innerExceptions_13;
};
