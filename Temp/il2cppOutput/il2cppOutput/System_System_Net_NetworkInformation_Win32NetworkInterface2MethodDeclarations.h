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

// System.Net.NetworkInformation.Win32NetworkInterface2
struct Win32NetworkInterface2_t2_411;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t2_356;
struct Win32_IP_ADAPTER_ADDRESSES_t2_356_marshaled;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t2_827;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t2_363;
struct Win32_IP_ADAPTER_INFO_t2_363_marshaled;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO[]
struct Win32_IP_ADAPTER_INFOU5BU5D_t2_828;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[]
struct Win32_IP_ADAPTER_ADDRESSESU5BU5D_t2_829;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t2_348;
// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct IPv4InterfaceStatistics_t2_366;
// System.Net.NetworkInformation.PhysicalAddress
struct PhysicalAddress_t2_415;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"
#include "System_System_Net_NetworkInformation_NetworkInterfaceCompone.h"
#include "System_System_Net_NetworkInformation_NetworkInterfaceType.h"
#include "System_System_Net_NetworkInformation_OperationalStatus.h"

// System.Void System.Net.NetworkInformation.Win32NetworkInterface2::.ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES)
extern "C" void Win32NetworkInterface2__ctor_m2_2973 (Win32NetworkInterface2_t2_411 * __this, Win32_IP_ADAPTER_ADDRESSES_t2_356 * ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersInfo(System.Byte[],System.Int32&)
extern "C" int32_t Win32NetworkInterface2_GetAdaptersInfo_m2_2974 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___info, int32_t* ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersAddresses(System.UInt32,System.UInt32,System.IntPtr,System.Byte[],System.Int32&)
extern "C" int32_t Win32NetworkInterface2_GetAdaptersAddresses_m2_2975 (Object_t * __this /* static, unused */, uint32_t ___family, uint32_t ___flags, IntPtr_t ___reserved, ByteU5BU5D_t1_72* ___info, int32_t* ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32NetworkInterface2::GetIfEntry(System.Net.NetworkInformation.Win32_MIB_IFROW&)
extern "C" int32_t Win32NetworkInterface2_GetIfEntry_m2_2976 (Object_t * __this /* static, unused */, Win32_MIB_IFROW_t2_357 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.Win32NetworkInterface2::ImplGetAllNetworkInterfaces()
extern "C" NetworkInterfaceU5BU5D_t2_827* Win32NetworkInterface2_ImplGetAllNetworkInterfaces_m2_2977 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO System.Net.NetworkInformation.Win32NetworkInterface2::GetAdapterInfoByIndex(System.Int32)
extern "C" Win32_IP_ADAPTER_INFO_t2_363 * Win32NetworkInterface2_GetAdapterInfoByIndex_m2_2978 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO[] System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersInfo()
extern "C" Win32_IP_ADAPTER_INFOU5BU5D_t2_828* Win32NetworkInterface2_GetAdaptersInfo_m2_2979 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[] System.Net.NetworkInformation.Win32NetworkInterface2::GetAdaptersAddresses()
extern "C" Win32_IP_ADAPTER_ADDRESSESU5BU5D_t2_829* Win32NetworkInterface2_GetAdaptersAddresses_m2_2980 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::GetIPProperties()
extern "C" IPInterfaceProperties_t2_348 * Win32NetworkInterface2_GetIPProperties_m2_2981 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv4InterfaceStatistics System.Net.NetworkInformation.Win32NetworkInterface2::GetIPv4Statistics()
extern "C" IPv4InterfaceStatistics_t2_366 * Win32NetworkInterface2_GetIPv4Statistics_m2_2982 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.Win32NetworkInterface2::GetPhysicalAddress()
extern "C" PhysicalAddress_t2_415 * Win32NetworkInterface2_GetPhysicalAddress_m2_2983 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32NetworkInterface2::Supports(System.Net.NetworkInformation.NetworkInterfaceComponent)
extern "C" bool Win32NetworkInterface2_Supports_m2_2984 (Win32NetworkInterface2_t2_411 * __this, int32_t ___networkInterfaceComponent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32NetworkInterface2::get_Description()
extern "C" String_t* Win32NetworkInterface2_get_Description_m2_2985 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32NetworkInterface2::get_Id()
extern "C" String_t* Win32NetworkInterface2_get_Id_m2_2986 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32NetworkInterface2::get_IsReceiveOnly()
extern "C" bool Win32NetworkInterface2_get_IsReceiveOnly_m2_2987 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32NetworkInterface2::get_Name()
extern "C" String_t* Win32NetworkInterface2_get_Name_m2_2988 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32NetworkInterface2::get_NetworkInterfaceType()
extern "C" int32_t Win32NetworkInterface2_get_NetworkInterfaceType_m2_2989 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32NetworkInterface2::get_OperationalStatus()
extern "C" int32_t Win32NetworkInterface2_get_OperationalStatus_m2_2990 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32NetworkInterface2::get_Speed()
extern "C" int64_t Win32NetworkInterface2_get_Speed_m2_2991 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32NetworkInterface2::get_SupportsMulticast()
extern "C" bool Win32NetworkInterface2_get_SupportsMulticast_m2_2992 (Win32NetworkInterface2_t2_411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
