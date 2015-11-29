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

// System.Net.Sockets.MulticastOption
struct MulticastOption_t2_468;
// System.Net.IPAddress
struct IPAddress_t2_326;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Sockets.MulticastOption::.ctor(System.Net.IPAddress)
extern "C" void MulticastOption__ctor_m2_3287 (MulticastOption_t2_468 * __this, IPAddress_t2_326 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.MulticastOption::.ctor(System.Net.IPAddress,System.Int32)
extern "C" void MulticastOption__ctor_m2_3288 (MulticastOption_t2_468 * __this, IPAddress_t2_326 * ___group, int32_t ___interfaceIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.MulticastOption::.ctor(System.Net.IPAddress,System.Net.IPAddress)
extern "C" void MulticastOption__ctor_m2_3289 (MulticastOption_t2_468 * __this, IPAddress_t2_326 * ___group, IPAddress_t2_326 * ___mcint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.Sockets.MulticastOption::get_Group()
extern "C" IPAddress_t2_326 * MulticastOption_get_Group_m2_3290 (MulticastOption_t2_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.MulticastOption::set_Group(System.Net.IPAddress)
extern "C" void MulticastOption_set_Group_m2_3291 (MulticastOption_t2_468 * __this, IPAddress_t2_326 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.Sockets.MulticastOption::get_LocalAddress()
extern "C" IPAddress_t2_326 * MulticastOption_get_LocalAddress_m2_3292 (MulticastOption_t2_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.MulticastOption::set_LocalAddress(System.Net.IPAddress)
extern "C" void MulticastOption_set_LocalAddress_m2_3293 (MulticastOption_t2_468 * __this, IPAddress_t2_326 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.MulticastOption::get_InterfaceIndex()
extern "C" int32_t MulticastOption_get_InterfaceIndex_m2_3294 (MulticastOption_t2_468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.MulticastOption::set_InterfaceIndex(System.Int32)
extern "C" void MulticastOption_set_InterfaceIndex_m2_3295 (MulticastOption_t2_468 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
