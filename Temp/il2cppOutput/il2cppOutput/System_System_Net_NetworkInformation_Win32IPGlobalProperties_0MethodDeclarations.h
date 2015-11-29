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

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW
struct Win32_MIB_TCPROW_t2_339;
struct Win32_MIB_TCPROW_t2_339_marshaled;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;
// System.Net.NetworkInformation.TcpConnectionInformation
struct TcpConnectionInformation_t2_428;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::.ctor()
extern "C" void Win32_MIB_TCPROW__ctor_m2_2585 (Win32_MIB_TCPROW_t2_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::get_LocalEndPoint()
extern "C" IPEndPoint_t2_430 * Win32_MIB_TCPROW_get_LocalEndPoint_m2_2586 (Win32_MIB_TCPROW_t2_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::get_RemoteEndPoint()
extern "C" IPEndPoint_t2_430 * Win32_MIB_TCPROW_get_RemoteEndPoint_m2_2587 (Win32_MIB_TCPROW_t2_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpConnectionInformation System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::get_TcpInfo()
extern "C" TcpConnectionInformation_t2_428 * Win32_MIB_TCPROW_get_TcpInfo_m2_2588 (Win32_MIB_TCPROW_t2_339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Win32_MIB_TCPROW_t2_339_marshal(const Win32_MIB_TCPROW_t2_339& unmarshaled, Win32_MIB_TCPROW_t2_339_marshaled& marshaled);
extern "C" void Win32_MIB_TCPROW_t2_339_marshal_back(const Win32_MIB_TCPROW_t2_339_marshaled& marshaled, Win32_MIB_TCPROW_t2_339& unmarshaled);
extern "C" void Win32_MIB_TCPROW_t2_339_marshal_cleanup(Win32_MIB_TCPROW_t2_339_marshaled& marshaled);
