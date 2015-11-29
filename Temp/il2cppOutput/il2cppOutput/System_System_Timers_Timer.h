#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Timer
struct Timer_t1_446;
// System.Object
struct Object_t;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t2_199;
// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_t2_768;

#include "System_System_ComponentModel_Component.h"

// System.Timers.Timer
struct  Timer_t2_767  : public Component_t2_77
{
	// System.Double System.Timers.Timer::interval
	double ___interval_4;
	// System.Boolean System.Timers.Timer::autoReset
	bool ___autoReset_5;
	// System.Threading.Timer System.Timers.Timer::timer
	Timer_t1_446 * ___timer_6;
	// System.Object System.Timers.Timer::_lock
	Object_t * ____lock_7;
	// System.ComponentModel.ISynchronizeInvoke System.Timers.Timer::so
	Object_t * ___so_8;
	// System.Timers.ElapsedEventHandler System.Timers.Timer::Elapsed
	ElapsedEventHandler_t2_768 * ___Elapsed_9;
};
