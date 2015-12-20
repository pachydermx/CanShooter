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

// System.Net.NetworkInformation.Win32UdpStatistics
struct Win32UdpStatistics_t2_438;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_UDPSTATS.h"

// System.Void System.Net.NetworkInformation.Win32UdpStatistics::.ctor(System.Net.NetworkInformation.Win32_MIB_UDPSTATS)
extern "C" void Win32UdpStatistics__ctor_m2_3106 (Win32UdpStatistics_t2_438 * __this, Win32_MIB_UDPSTATS_t2_439  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UdpStatistics::get_DatagramsReceived()
extern "C" int64_t Win32UdpStatistics_get_DatagramsReceived_m2_3107 (Win32UdpStatistics_t2_438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UdpStatistics::get_DatagramsSent()
extern "C" int64_t Win32UdpStatistics_get_DatagramsSent_m2_3108 (Win32UdpStatistics_t2_438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UdpStatistics::get_IncomingDatagramsDiscarded()
extern "C" int64_t Win32UdpStatistics_get_IncomingDatagramsDiscarded_m2_3109 (Win32UdpStatistics_t2_438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UdpStatistics::get_IncomingDatagramsWithErrors()
extern "C" int64_t Win32UdpStatistics_get_IncomingDatagramsWithErrors_m2_3110 (Win32UdpStatistics_t2_438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32UdpStatistics::get_UdpListeners()
extern "C" int32_t Win32UdpStatistics_get_UdpListeners_m2_3111 (Win32UdpStatistics_t2_438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
