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

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW
struct Win32_MIB_UDPROW_t2_341;
struct Win32_MIB_UDPROW_t2_341_marshaled;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW::.ctor()
extern "C" void Win32_MIB_UDPROW__ctor_m2_2593 (Win32_MIB_UDPROW_t2_341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW::get_LocalEndPoint()
extern "C" IPEndPoint_t2_430 * Win32_MIB_UDPROW_get_LocalEndPoint_m2_2594 (Win32_MIB_UDPROW_t2_341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Win32_MIB_UDPROW_t2_341_marshal(const Win32_MIB_UDPROW_t2_341& unmarshaled, Win32_MIB_UDPROW_t2_341_marshaled& marshaled);
extern "C" void Win32_MIB_UDPROW_t2_341_marshal_back(const Win32_MIB_UDPROW_t2_341_marshaled& marshaled, Win32_MIB_UDPROW_t2_341& unmarshaled);
extern "C" void Win32_MIB_UDPROW_t2_341_marshal_cleanup(Win32_MIB_UDPROW_t2_341_marshaled& marshaled);
