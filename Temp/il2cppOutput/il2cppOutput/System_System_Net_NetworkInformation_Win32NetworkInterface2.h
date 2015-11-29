#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t2_356;
struct Win32_IP_ADAPTER_ADDRESSES_t2_356_marshaled;
// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct Win32IPv4InterfaceStatistics_t2_367;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t2_348;

#include "System_System_Net_NetworkInformation_NetworkInterface.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"

// System.Net.NetworkInformation.Win32NetworkInterface2
struct  Win32NetworkInterface2_t2_411  : public NetworkInterface_t2_410
{
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32NetworkInterface2::addr
	Win32_IP_ADAPTER_ADDRESSES_t2_356 * ___addr_2;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib4
	Win32_MIB_IFROW_t2_357  ___mib4_3;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib6
	Win32_MIB_IFROW_t2_357  ___mib6_4;
	// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics System.Net.NetworkInformation.Win32NetworkInterface2::ip4stats
	Win32IPv4InterfaceStatistics_t2_367 * ___ip4stats_5;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::ip_if_props
	IPInterfaceProperties_t2_348 * ___ip_if_props_6;
};
