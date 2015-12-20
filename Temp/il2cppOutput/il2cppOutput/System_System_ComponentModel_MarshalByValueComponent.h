#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t2_78;
// System.ComponentModel.ISite
struct ISite_t2_79;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t2_133  : public Object_t
{
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t2_78 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	Object_t * ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	Object_t * ___disposedEvent_2;
};
