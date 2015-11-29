#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_InotifyEvent.h"

// System.Void System.IO.InotifyEvent::.cctor()
extern "C" void InotifyEvent__cctor_m2_2098 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.InotifyEvent::ToString()
extern "C" String_t* InotifyEvent_ToString_m2_2099 (InotifyEvent_t2_255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void InotifyEvent_t2_255_marshal(const InotifyEvent_t2_255& unmarshaled, InotifyEvent_t2_255_marshaled& marshaled);
extern "C" void InotifyEvent_t2_255_marshal_back(const InotifyEvent_t2_255_marshaled& marshaled, InotifyEvent_t2_255& unmarshaled);
extern "C" void InotifyEvent_t2_255_marshal_cleanup(InotifyEvent_t2_255_marshaled& marshaled);
