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

// System.Net.NetworkInformation.Ping/IcmpMessage
struct IcmpMessage_t2_418;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_IPStatus.h"

// System.Void System.Net.NetworkInformation.Ping/IcmpMessage::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C" void IcmpMessage__ctor_m2_3002 (IcmpMessage_t2_418 * __this, ByteU5BU5D_t1_72* ___bytes, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping/IcmpMessage::.ctor(System.Byte,System.Byte,System.Int16,System.Int16,System.Byte[])
extern "C" void IcmpMessage__ctor_m2_3003 (IcmpMessage_t2_418 * __this, uint8_t ___type, uint8_t ___code, int16_t ___identifier, int16_t ___sequence, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.NetworkInformation.Ping/IcmpMessage::get_Type()
extern "C" uint8_t IcmpMessage_get_Type_m2_3004 (IcmpMessage_t2_418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.NetworkInformation.Ping/IcmpMessage::get_Code()
extern "C" uint8_t IcmpMessage_get_Code_m2_3005 (IcmpMessage_t2_418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.NetworkInformation.Ping/IcmpMessage::get_Identifier()
extern "C" uint8_t IcmpMessage_get_Identifier_m2_3006 (IcmpMessage_t2_418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Net.NetworkInformation.Ping/IcmpMessage::get_Sequence()
extern "C" uint8_t IcmpMessage_get_Sequence_m2_3007 (IcmpMessage_t2_418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.NetworkInformation.Ping/IcmpMessage::get_Data()
extern "C" ByteU5BU5D_t1_72* IcmpMessage_get_Data_m2_3008 (IcmpMessage_t2_418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.NetworkInformation.Ping/IcmpMessage::GetBytes()
extern "C" ByteU5BU5D_t1_72* IcmpMessage_GetBytes_m2_3009 (IcmpMessage_t2_418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Net.NetworkInformation.Ping/IcmpMessage::ComputeChecksum(System.Byte[])
extern "C" uint16_t IcmpMessage_ComputeChecksum_m2_3010 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPStatus System.Net.NetworkInformation.Ping/IcmpMessage::get_IPStatus()
extern "C" int32_t IcmpMessage_get_IPStatus_m2_3011 (IcmpMessage_t2_418 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
