#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1_882;
// System.Net.HttpListener
struct HttpListener_t2_572;

#include "mscorlib_System_Object.h"

// System.Net.HttpListenerPrefixCollection
struct  HttpListenerPrefixCollection_t2_573  : public Object_t
{
	// System.Collections.Generic.List`1<System.String> System.Net.HttpListenerPrefixCollection::prefixes
	List_1_t1_882 * ___prefixes_0;
	// System.Net.HttpListener System.Net.HttpListenerPrefixCollection::listener
	HttpListener_t2_572 * ___listener_1;
};
