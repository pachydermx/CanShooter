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

// System.Net.NetworkInformation.Win32IPGlobalStatistics
struct Win32IPGlobalStatistics_t2_346;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IPSTATS.h"

// System.Void System.Net.NetworkInformation.Win32IPGlobalStatistics::.ctor(System.Net.NetworkInformation.Win32_MIB_IPSTATS)
extern "C" void Win32IPGlobalStatistics__ctor_m2_2650 (Win32IPGlobalStatistics_t2_346 * __this, Win32_MIB_IPSTATS_t2_347  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_DefaultTtl()
extern "C" int32_t Win32IPGlobalStatistics_get_DefaultTtl_m2_2651 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ForwardingEnabled()
extern "C" bool Win32IPGlobalStatistics_get_ForwardingEnabled_m2_2652 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_NumberOfInterfaces()
extern "C" int32_t Win32IPGlobalStatistics_get_NumberOfInterfaces_m2_2653 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_NumberOfIPAddresses()
extern "C" int32_t Win32IPGlobalStatistics_get_NumberOfIPAddresses_m2_2654 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_NumberOfRoutes()
extern "C" int32_t Win32IPGlobalStatistics_get_NumberOfRoutes_m2_2655 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_OutputPacketRequests()
extern "C" int64_t Win32IPGlobalStatistics_get_OutputPacketRequests_m2_2656 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_OutputPacketRoutingDiscards()
extern "C" int64_t Win32IPGlobalStatistics_get_OutputPacketRoutingDiscards_m2_2657 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_OutputPacketsDiscarded()
extern "C" int64_t Win32IPGlobalStatistics_get_OutputPacketsDiscarded_m2_2658 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_OutputPacketsWithNoRoute()
extern "C" int64_t Win32IPGlobalStatistics_get_OutputPacketsWithNoRoute_m2_2659 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketFragmentFailures()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketFragmentFailures_m2_2660 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketReassembliesRequired()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketReassembliesRequired_m2_2661 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketReassemblyFailures()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketReassemblyFailures_m2_2662 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketReassemblyTimeout()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketReassemblyTimeout_m2_2663 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketsFragmented()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketsFragmented_m2_2664 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_PacketsReassembled()
extern "C" int64_t Win32IPGlobalStatistics_get_PacketsReassembled_m2_2665 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPackets()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPackets_m2_2666 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsDelivered()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsDelivered_m2_2667 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsDiscarded()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsDiscarded_m2_2668 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsForwarded()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsForwarded_m2_2669 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsWithAddressErrors()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsWithAddressErrors_m2_2670 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsWithHeadersErrors()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsWithHeadersErrors_m2_2671 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32IPGlobalStatistics::get_ReceivedPacketsWithUnknownProtocol()
extern "C" int64_t Win32IPGlobalStatistics_get_ReceivedPacketsWithUnknownProtocol_m2_2672 (Win32IPGlobalStatistics_t2_346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
