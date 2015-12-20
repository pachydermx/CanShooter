﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.NetworkInformation.Win32IPGlobalProperties
struct Win32IPGlobalProperties_t2_343;
// System.Collections.Generic.List`1<System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW>
struct List_1_t1_962;
// System.Collections.Generic.List`1<System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW>
struct List_1_t1_963;
// System.Net.NetworkInformation.TcpConnectionInformation[]
struct TcpConnectionInformationU5BU5D_t2_825;
// System.Net.IPEndPoint[]
struct IPEndPointU5BU5D_t2_824;
// System.Net.NetworkInformation.IcmpV4Statistics
struct IcmpV4Statistics_t2_374;
// System.Net.NetworkInformation.IcmpV6Statistics
struct IcmpV6Statistics_t2_379;
// System.Net.NetworkInformation.IPGlobalStatistics
struct IPGlobalStatistics_t2_344;
// System.Net.NetworkInformation.TcpStatistics
struct TcpStatistics_t2_432;
// System.Net.NetworkInformation.UdpStatistics
struct UdpStatistics_t2_436;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_TcpState.h"
#include "System_System_Net_NetworkInformation_NetBiosNodeType.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_TCPSTATS.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_UDPSTATS.h"
#include "System_System_Net_NetworkInformation_Win32_MIBICMPINFO.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_ICMP_EX.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IPSTATS.h"

// System.Void System.Net.NetworkInformation.Win32IPGlobalProperties::.ctor()
extern "C" void Win32IPGlobalProperties__ctor_m2_2597 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Win32IPGlobalProperties::FillTcpTable(System.Collections.Generic.List`1<System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW>&,System.Collections.Generic.List`1<System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW>&)
extern "C" void Win32IPGlobalProperties_FillTcpTable_m2_2598 (Win32IPGlobalProperties_t2_343 * __this, List_1_t1_962 ** ___tab4, List_1_t1_963 ** ___tab6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPGlobalProperties::IsListenerState(System.Net.NetworkInformation.TcpState)
extern "C" bool Win32IPGlobalProperties_IsListenerState_m2_2599 (Win32IPGlobalProperties_t2_343 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpConnectionInformation[] System.Net.NetworkInformation.Win32IPGlobalProperties::GetActiveTcpConnections()
extern "C" TcpConnectionInformationU5BU5D_t2_825* Win32IPGlobalProperties_GetActiveTcpConnections_m2_2600 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint[] System.Net.NetworkInformation.Win32IPGlobalProperties::GetActiveTcpListeners()
extern "C" IPEndPointU5BU5D_t2_824* Win32IPGlobalProperties_GetActiveTcpListeners_m2_2601 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint[] System.Net.NetworkInformation.Win32IPGlobalProperties::GetActiveUdpListeners()
extern "C" IPEndPointU5BU5D_t2_824* Win32IPGlobalProperties_GetActiveUdpListeners_m2_2602 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IcmpV4Statistics System.Net.NetworkInformation.Win32IPGlobalProperties::GetIcmpV4Statistics()
extern "C" IcmpV4Statistics_t2_374 * Win32IPGlobalProperties_GetIcmpV4Statistics_m2_2603 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IcmpV6Statistics System.Net.NetworkInformation.Win32IPGlobalProperties::GetIcmpV6Statistics()
extern "C" IcmpV6Statistics_t2_379 * Win32IPGlobalProperties_GetIcmpV6Statistics_m2_2604 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPGlobalStatistics System.Net.NetworkInformation.Win32IPGlobalProperties::GetIPv4GlobalStatistics()
extern "C" IPGlobalStatistics_t2_344 * Win32IPGlobalProperties_GetIPv4GlobalStatistics_m2_2605 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPGlobalStatistics System.Net.NetworkInformation.Win32IPGlobalProperties::GetIPv6GlobalStatistics()
extern "C" IPGlobalStatistics_t2_344 * Win32IPGlobalProperties_GetIPv6GlobalStatistics_m2_2606 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpStatistics System.Net.NetworkInformation.Win32IPGlobalProperties::GetTcpIPv4Statistics()
extern "C" TcpStatistics_t2_432 * Win32IPGlobalProperties_GetTcpIPv4Statistics_m2_2607 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpStatistics System.Net.NetworkInformation.Win32IPGlobalProperties::GetTcpIPv6Statistics()
extern "C" TcpStatistics_t2_432 * Win32IPGlobalProperties_GetTcpIPv6Statistics_m2_2608 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UdpStatistics System.Net.NetworkInformation.Win32IPGlobalProperties::GetUdpIPv4Statistics()
extern "C" UdpStatistics_t2_436 * Win32IPGlobalProperties_GetUdpIPv4Statistics_m2_2609 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UdpStatistics System.Net.NetworkInformation.Win32IPGlobalProperties::GetUdpIPv6Statistics()
extern "C" UdpStatistics_t2_436 * Win32IPGlobalProperties_GetUdpIPv6Statistics_m2_2610 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32IPGlobalProperties::get_DhcpScopeName()
extern "C" String_t* Win32IPGlobalProperties_get_DhcpScopeName_m2_2611 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32IPGlobalProperties::get_DomainName()
extern "C" String_t* Win32IPGlobalProperties_get_DomainName_m2_2612 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32IPGlobalProperties::get_HostName()
extern "C" String_t* Win32IPGlobalProperties_get_HostName_m2_2613 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPGlobalProperties::get_IsWinsProxy()
extern "C" bool Win32IPGlobalProperties_get_IsWinsProxy_m2_2614 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.Win32IPGlobalProperties::get_NodeType()
extern "C" int32_t Win32IPGlobalProperties_get_NodeType_m2_2615 (Win32IPGlobalProperties_t2_343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties::GetTcpTable(System.Byte[],System.Int32&,System.Boolean)
extern "C" int32_t Win32IPGlobalProperties_GetTcpTable_m2_2616 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___pTcpTable, int32_t* ___pdwSize, bool ___bOrder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties::GetTcp6Table(System.Byte[],System.Int32&,System.Boolean)
extern "C" int32_t Win32IPGlobalProperties_GetTcp6Table_m2_2617 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___TcpTable, int32_t* ___SizePointer, bool ___Order, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties::GetUdpTable(System.Byte[],System.Int32&,System.Boolean)
extern "C" int32_t Win32IPGlobalProperties_GetUdpTable_m2_2618 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___pUdpTable, int32_t* ___pdwSize, bool ___bOrder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties::GetUdp6Table(System.Byte[],System.Int32&,System.Boolean)
extern "C" int32_t Win32IPGlobalProperties_GetUdp6Table_m2_2619 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___Udp6Table, int32_t* ___SizePointer, bool ___Order, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties::GetTcpStatisticsEx(System.Net.NetworkInformation.Win32_MIB_TCPSTATS&,System.Int32)
extern "C" int32_t Win32IPGlobalProperties_GetTcpStatisticsEx_m2_2620 (Object_t * __this /* static, unused */, Win32_MIB_TCPSTATS_t2_435 * ___pStats, int32_t ___dwFamily, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties::GetUdpStatisticsEx(System.Net.NetworkInformation.Win32_MIB_UDPSTATS&,System.Int32)
extern "C" int32_t Win32IPGlobalProperties_GetUdpStatisticsEx_m2_2621 (Object_t * __this /* static, unused */, Win32_MIB_UDPSTATS_t2_439 * ___pStats, int32_t ___dwFamily, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties::GetIcmpStatistics(System.Net.NetworkInformation.Win32_MIBICMPINFO&,System.Int32)
extern "C" int32_t Win32IPGlobalProperties_GetIcmpStatistics_m2_2622 (Object_t * __this /* static, unused */, Win32_MIBICMPINFO_t2_378 * ___pStats, int32_t ___dwFamily, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties::GetIcmpStatisticsEx(System.Net.NetworkInformation.Win32_MIB_ICMP_EX&,System.Int32)
extern "C" int32_t Win32IPGlobalProperties_GetIcmpStatisticsEx_m2_2623 (Object_t * __this /* static, unused */, Win32_MIB_ICMP_EX_t2_384 * ___pStats, int32_t ___dwFamily, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties::GetIPStatisticsEx(System.Net.NetworkInformation.Win32_MIB_IPSTATS&,System.Int32)
extern "C" int32_t Win32IPGlobalProperties_GetIPStatisticsEx_m2_2624 (Object_t * __this /* static, unused */, Win32_MIB_IPSTATS_t2_347 * ___pStats, int32_t ___dwFamily, const MethodInfo* method) IL2CPP_METHOD_ATTR;
