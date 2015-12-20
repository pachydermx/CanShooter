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

// System.Net.NetworkInformation.PingCompletedEventArgs
struct PingCompletedEventArgs_t2_423;
// System.Exception
struct Exception_t1_33;
// System.Object
struct Object_t;
// System.Net.NetworkInformation.PingReply
struct PingReply_t2_424;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.PingCompletedEventArgs::.ctor(System.Exception,System.Boolean,System.Object,System.Net.NetworkInformation.PingReply)
extern "C" void PingCompletedEventArgs__ctor_m2_3044 (PingCompletedEventArgs_t2_423 * __this, Exception_t1_33 * ___ex, bool ___cancelled, Object_t * ___userState, PingReply_t2_424 * ___reply, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.PingCompletedEventArgs::get_Reply()
extern "C" PingReply_t2_424 * PingCompletedEventArgs_get_Reply_m2_3045 (PingCompletedEventArgs_t2_423 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
