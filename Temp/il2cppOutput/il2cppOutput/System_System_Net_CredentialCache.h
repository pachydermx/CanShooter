﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkCredential
struct NetworkCredential_t2_525;
// System.Collections.Hashtable
struct Hashtable_t1_173;

#include "mscorlib_System_Object.h"

// System.Net.CredentialCache
struct  CredentialCache_t2_524  : public Object_t
{
	// System.Collections.Hashtable System.Net.CredentialCache::cache
	Hashtable_t1_173 * ___cache_1;
	// System.Collections.Hashtable System.Net.CredentialCache::cacheForHost
	Hashtable_t1_173 * ___cacheForHost_2;
};
struct CredentialCache_t2_524_StaticFields{
	// System.Net.NetworkCredential System.Net.CredentialCache::empty
	NetworkCredential_t2_525 * ___empty_0;
};
