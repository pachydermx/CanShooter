#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress
struct IPAddress_t2_326;

#include "System_System_Net_NetworkInformation_MulticastIPAddressInfor.h"

// System.Net.NetworkInformation.MulticastIPAddressInformationImpl
struct  MulticastIPAddressInformationImpl_t2_400  : public MulticastIPAddressInformation_t2_399
{
	// System.Net.IPAddress System.Net.NetworkInformation.MulticastIPAddressInformationImpl::address
	IPAddress_t2_326 * ___address_0;
	// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImpl::is_dns_eligible
	bool ___is_dns_eligible_1;
	// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImpl::is_transient
	bool ___is_transient_2;
};
