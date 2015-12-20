#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t2_284;
// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t2_285;

#include "System_System_Net_Mail_AttachmentBase.h"

// System.Net.Mail.AlternateView
struct  AlternateView_t2_282  : public AttachmentBase_t2_283
{
	// System.Uri System.Net.Mail.AlternateView::baseUri
	Uri_t2_284 * ___baseUri_4;
	// System.Net.Mail.LinkedResourceCollection System.Net.Mail.AlternateView::linkedResources
	LinkedResourceCollection_t2_285 * ___linkedResources_5;
};
