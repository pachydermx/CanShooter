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

// System.Net.NetworkInformation.PingOptions
struct PingOptions_t2_420;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.PingOptions::.ctor()
extern "C" void PingOptions__ctor_m2_3049 (PingOptions_t2_420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.PingOptions::.ctor(System.Int32,System.Boolean)
extern "C" void PingOptions__ctor_m2_3050 (PingOptions_t2_420 * __this, int32_t ___ttl, bool ___dontFragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.PingOptions::get_DontFragment()
extern "C" bool PingOptions_get_DontFragment_m2_3051 (PingOptions_t2_420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.PingOptions::set_DontFragment(System.Boolean)
extern "C" void PingOptions_set_DontFragment_m2_3052 (PingOptions_t2_420 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.PingOptions::get_Ttl()
extern "C" int32_t PingOptions_get_Ttl_m2_3053 (PingOptions_t2_420 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.PingOptions::set_Ttl(System.Int32)
extern "C" void PingOptions_set_Ttl_m2_3054 (PingOptions_t2_420 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
