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

// System.Net.NetworkInformation.MibUdpStatistics
struct MibUdpStatistics_t2_437;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t2_33;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.MibUdpStatistics::.ctor(System.Collections.Specialized.StringDictionary)
extern "C" void MibUdpStatistics__ctor_m2_3099 (MibUdpStatistics_t2_437 * __this, StringDictionary_t2_33 * ___dic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MibUdpStatistics::Get(System.String)
extern "C" int64_t MibUdpStatistics_Get_m2_3100 (MibUdpStatistics_t2_437 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MibUdpStatistics::get_DatagramsReceived()
extern "C" int64_t MibUdpStatistics_get_DatagramsReceived_m2_3101 (MibUdpStatistics_t2_437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MibUdpStatistics::get_DatagramsSent()
extern "C" int64_t MibUdpStatistics_get_DatagramsSent_m2_3102 (MibUdpStatistics_t2_437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MibUdpStatistics::get_IncomingDatagramsDiscarded()
extern "C" int64_t MibUdpStatistics_get_IncomingDatagramsDiscarded_m2_3103 (MibUdpStatistics_t2_437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.MibUdpStatistics::get_IncomingDatagramsWithErrors()
extern "C" int64_t MibUdpStatistics_get_IncomingDatagramsWithErrors_m2_3104 (MibUdpStatistics_t2_437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.MibUdpStatistics::get_UdpListeners()
extern "C" int32_t MibUdpStatistics_get_UdpListeners_m2_3105 (MibUdpStatistics_t2_437 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
