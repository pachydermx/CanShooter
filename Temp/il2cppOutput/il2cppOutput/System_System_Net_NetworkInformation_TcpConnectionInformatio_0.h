#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPEndPoint
struct IPEndPoint_t2_430;

#include "System_System_Net_NetworkInformation_TcpConnectionInformatio.h"
#include "System_System_Net_NetworkInformation_TcpState.h"

// System.Net.NetworkInformation.TcpConnectionInformationImpl
struct  TcpConnectionInformationImpl_t2_429  : public TcpConnectionInformation_t2_428
{
	// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::local
	IPEndPoint_t2_430 * ___local_0;
	// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::remote
	IPEndPoint_t2_430 * ___remote_1;
	// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.TcpConnectionInformationImpl::state
	int32_t ___state_2;
};
