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

// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_SocketInformation.h"
#include "System_System_Net_Sockets_SocketInformationOptions.h"

// System.Net.Sockets.SocketInformationOptions System.Net.Sockets.SocketInformation::get_Options()
extern "C" int32_t SocketInformation_get_Options_m2_3635 (SocketInformation_t2_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketInformation::set_Options(System.Net.Sockets.SocketInformationOptions)
extern "C" void SocketInformation_set_Options_m2_3636 (SocketInformation_t2_490 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.SocketInformation::get_ProtocolInformation()
extern "C" ByteU5BU5D_t1_72* SocketInformation_get_ProtocolInformation_m2_3637 (SocketInformation_t2_490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketInformation::set_ProtocolInformation(System.Byte[])
extern "C" void SocketInformation_set_ProtocolInformation_m2_3638 (SocketInformation_t2_490 * __this, ByteU5BU5D_t1_72* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void SocketInformation_t2_490_marshal(const SocketInformation_t2_490& unmarshaled, SocketInformation_t2_490_marshaled& marshaled);
extern "C" void SocketInformation_t2_490_marshal_back(const SocketInformation_t2_490_marshaled& marshaled, SocketInformation_t2_490& unmarshaled);
extern "C" void SocketInformation_t2_490_marshal_cleanup(SocketInformation_t2_490_marshaled& marshaled);
