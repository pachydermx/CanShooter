#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.CorrelationManager
struct CorrelationManager_t2_182;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"

// System.Diagnostics.TraceEventCache
struct  TraceEventCache_t2_218  : public Object_t
{
	// System.DateTime System.Diagnostics.TraceEventCache::started
	DateTime_t1_128  ___started_0;
	// System.Diagnostics.CorrelationManager System.Diagnostics.TraceEventCache::manager
	CorrelationManager_t2_182 * ___manager_1;
	// System.String System.Diagnostics.TraceEventCache::callstack
	String_t* ___callstack_2;
	// System.String System.Diagnostics.TraceEventCache::thread
	String_t* ___thread_3;
	// System.Int32 System.Diagnostics.TraceEventCache::process
	int32_t ___process_4;
	// System.Int64 System.Diagnostics.TraceEventCache::timestamp
	int64_t ___timestamp_5;
};
