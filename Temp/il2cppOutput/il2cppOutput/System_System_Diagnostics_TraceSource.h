#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.SourceSwitch
struct SourceSwitch_t2_210;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2_221;

#include "mscorlib_System_Object.h"

// System.Diagnostics.TraceSource
struct  TraceSource_t2_225  : public Object_t
{
	// System.Diagnostics.SourceSwitch System.Diagnostics.TraceSource::source_switch
	SourceSwitch_t2_210 * ___source_switch_0;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSource::listeners
	TraceListenerCollection_t2_221 * ___listeners_1;
};
