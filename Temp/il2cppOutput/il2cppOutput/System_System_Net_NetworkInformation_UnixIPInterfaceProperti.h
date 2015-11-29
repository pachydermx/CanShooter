#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.NetworkInformation.IPv4InterfaceProperties
struct IPv4InterfaceProperties_t2_350;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t2_351;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1_945;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t2_330;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t2_352;

#include "System_System_Net_NetworkInformation_IPInterfaceProperties.h"
#include "mscorlib_System_DateTime.h"

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct  UnixIPInterfaceProperties_t2_349  : public IPInterfaceProperties_t2_348
{
	// System.Net.NetworkInformation.IPv4InterfaceProperties System.Net.NetworkInformation.UnixIPInterfaceProperties::ipv4iface_properties
	IPv4InterfaceProperties_t2_350 * ___ipv4iface_properties_0;
	// System.Net.NetworkInformation.UnixNetworkInterface System.Net.NetworkInformation.UnixIPInterfaceProperties::iface
	UnixNetworkInterface_t2_351 * ___iface_1;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixIPInterfaceProperties::addresses
	List_1_t1_945 * ___addresses_2;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_servers
	IPAddressCollection_t2_330 * ___dns_servers_3;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::gateways
	IPAddressCollection_t2_330 * ___gateways_4;
	// System.String System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_suffix
	String_t* ___dns_suffix_5;
	// System.DateTime System.Net.NetworkInformation.UnixIPInterfaceProperties::last_parse
	DateTime_t1_128  ___last_parse_6;
};
struct UnixIPInterfaceProperties_t2_349_StaticFields{
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::ns
	Regex_t2_352 * ___ns_7;
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::search
	Regex_t2_352 * ___search_8;
};
