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

// System.Net.NetworkInformation.Win32IPv4InterfaceProperties
struct Win32IPv4InterfaceProperties_t2_362;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t2_363;
struct Win32_IP_ADAPTER_INFO_t2_363_marshaled;
// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t2_364;
struct Win32_IP_PER_ADAPTER_INFO_t2_364_marshaled;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"

// System.Void System.Net.NetworkInformation.Win32IPv4InterfaceProperties::.ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO,System.Net.NetworkInformation.Win32_MIB_IFROW)
extern "C" void Win32IPv4InterfaceProperties__ctor_m2_2719 (Win32IPv4InterfaceProperties_t2_362 * __this, Win32_IP_ADAPTER_INFO_t2_363 * ___ainfo, Win32_MIB_IFROW_t2_357  ___mib, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPv4InterfaceProperties::GetPerAdapterInfo(System.Int32,System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO,System.Int32&)
extern "C" int32_t Win32IPv4InterfaceProperties_GetPerAdapterInfo_m2_2720 (Object_t * __this /* static, unused */, int32_t ___IfIndex, Win32_IP_PER_ADAPTER_INFO_t2_364 * ___pPerAdapterInfo, int32_t* ___pOutBufLen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_Index()
extern "C" int32_t Win32IPv4InterfaceProperties_get_Index_m2_2721 (Win32IPv4InterfaceProperties_t2_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_IsAutomaticPrivateAddressingActive()
extern "C" bool Win32IPv4InterfaceProperties_get_IsAutomaticPrivateAddressingActive_m2_2722 (Win32IPv4InterfaceProperties_t2_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_IsAutomaticPrivateAddressingEnabled()
extern "C" bool Win32IPv4InterfaceProperties_get_IsAutomaticPrivateAddressingEnabled_m2_2723 (Win32IPv4InterfaceProperties_t2_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_IsDhcpEnabled()
extern "C" bool Win32IPv4InterfaceProperties_get_IsDhcpEnabled_m2_2724 (Win32IPv4InterfaceProperties_t2_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_IsForwardingEnabled()
extern "C" bool Win32IPv4InterfaceProperties_get_IsForwardingEnabled_m2_2725 (Win32IPv4InterfaceProperties_t2_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_Mtu()
extern "C" int32_t Win32IPv4InterfaceProperties_get_Mtu_m2_2726 (Win32IPv4InterfaceProperties_t2_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPv4InterfaceProperties::get_UsesWins()
extern "C" bool Win32IPv4InterfaceProperties_get_UsesWins_m2_2727 (Win32IPv4InterfaceProperties_t2_362 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
