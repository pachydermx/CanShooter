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

// System.Net.NetworkInformation.TcpConnectionInformationImpl
struct TcpConnectionInformationImpl_t2_429;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_TcpState.h"

// System.Void System.Net.NetworkInformation.TcpConnectionInformationImpl::.ctor(System.Net.IPEndPoint,System.Net.IPEndPoint,System.Net.NetworkInformation.TcpState)
extern "C" void TcpConnectionInformationImpl__ctor_m2_3062 (TcpConnectionInformationImpl_t2_429 * __this, IPEndPoint_t2_430 * ___local, IPEndPoint_t2_430 * ___remote, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::get_LocalEndPoint()
extern "C" IPEndPoint_t2_430 * TcpConnectionInformationImpl_get_LocalEndPoint_m2_3063 (TcpConnectionInformationImpl_t2_429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::get_RemoteEndPoint()
extern "C" IPEndPoint_t2_430 * TcpConnectionInformationImpl_get_RemoteEndPoint_m2_3064 (TcpConnectionInformationImpl_t2_429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.TcpConnectionInformationImpl::get_State()
extern "C" int32_t TcpConnectionInformationImpl_get_State_m2_3065 (TcpConnectionInformationImpl_t2_429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
