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

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW
struct Win32_MIB_TCP6ROW_t2_340;
struct Win32_MIB_TCP6ROW_t2_340_marshaled;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;
// System.Net.NetworkInformation.TcpConnectionInformation
struct TcpConnectionInformation_t2_428;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::.ctor()
extern "C" void Win32_MIB_TCP6ROW__ctor_m2_2589 (Win32_MIB_TCP6ROW_t2_340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::get_LocalEndPoint()
extern "C" IPEndPoint_t2_430 * Win32_MIB_TCP6ROW_get_LocalEndPoint_m2_2590 (Win32_MIB_TCP6ROW_t2_340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::get_RemoteEndPoint()
extern "C" IPEndPoint_t2_430 * Win32_MIB_TCP6ROW_get_RemoteEndPoint_m2_2591 (Win32_MIB_TCP6ROW_t2_340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpConnectionInformation System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::get_TcpInfo()
extern "C" TcpConnectionInformation_t2_428 * Win32_MIB_TCP6ROW_get_TcpInfo_m2_2592 (Win32_MIB_TCP6ROW_t2_340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Win32_MIB_TCP6ROW_t2_340_marshal(const Win32_MIB_TCP6ROW_t2_340& unmarshaled, Win32_MIB_TCP6ROW_t2_340_marshaled& marshaled);
extern "C" void Win32_MIB_TCP6ROW_t2_340_marshal_back(const Win32_MIB_TCP6ROW_t2_340_marshaled& marshaled, Win32_MIB_TCP6ROW_t2_340& unmarshaled);
extern "C" void Win32_MIB_TCP6ROW_t2_340_marshal_cleanup(Win32_MIB_TCP6ROW_t2_340_marshaled& marshaled);
