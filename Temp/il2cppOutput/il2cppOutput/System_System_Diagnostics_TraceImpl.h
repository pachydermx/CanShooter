#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2_221;
// System.Diagnostics.CorrelationManager
struct CorrelationManager_t2_182;

#include "mscorlib_System_Object.h"

// System.Diagnostics.TraceImpl
struct  TraceImpl_t2_222  : public Object_t
{
};
struct TraceImpl_t2_222_StaticFields{
	// System.Object System.Diagnostics.TraceImpl::initLock
	Object_t * ___initLock_0;
	// System.Boolean System.Diagnostics.TraceImpl::autoFlush
	bool ___autoFlush_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImpl::listeners
	TraceListenerCollection_t2_221 * ___listeners_4;
	// System.Boolean System.Diagnostics.TraceImpl::use_global_lock
	bool ___use_global_lock_5;
	// System.Diagnostics.CorrelationManager System.Diagnostics.TraceImpl::correlation_manager
	CorrelationManager_t2_182 * ___correlation_manager_6;
};
struct TraceImpl_t2_222_ThreadStaticFields{
	// System.Int32 System.Diagnostics.TraceImpl::indentLevel
	int32_t ___indentLevel_2;
	// System.Int32 System.Diagnostics.TraceImpl::indentSize
	int32_t ___indentSize_3;
};
