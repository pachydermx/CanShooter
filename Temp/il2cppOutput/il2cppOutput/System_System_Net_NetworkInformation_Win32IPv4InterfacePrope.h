#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t2_363;
struct Win32_IP_ADAPTER_INFO_t2_363_marshaled;
// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t2_364;
struct Win32_IP_PER_ADAPTER_INFO_t2_364_marshaled;

#include "System_System_Net_NetworkInformation_IPv4InterfaceProperties.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"

// System.Net.NetworkInformation.Win32IPv4InterfaceProperties
struct  Win32IPv4InterfaceProperties_t2_362  : public IPv4InterfaceProperties_t2_350
{
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO System.Net.NetworkInformation.Win32IPv4InterfaceProperties::ainfo
	Win32_IP_ADAPTER_INFO_t2_363 * ___ainfo_0;
	// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO System.Net.NetworkInformation.Win32IPv4InterfaceProperties::painfo
	Win32_IP_PER_ADAPTER_INFO_t2_364 * ___painfo_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv4InterfaceProperties::mib
	Win32_MIB_IFROW_t2_357  ___mib_2;
};
