#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.LicenseContext
struct LicenseContext_t2_50;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"

// System.ComponentModel.LicenseManager
struct  LicenseManager_t2_123  : public Object_t
{
};
struct LicenseManager_t2_123_StaticFields{
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::mycontext
	LicenseContext_t2_50 * ___mycontext_0;
	// System.Object System.ComponentModel.LicenseManager::contextLockUser
	Object_t * ___contextLockUser_1;
	// System.Object System.ComponentModel.LicenseManager::lockObject
	Object_t * ___lockObject_2;
};
