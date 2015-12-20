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

// System.Net.NetworkInformation.Ping
struct Ping_t2_421;
// System.Net.NetworkInformation.PingCompletedEventHandler
struct PingCompletedEventHandler_t2_422;
// System.Net.NetworkInformation.PingCompletedEventArgs
struct PingCompletedEventArgs_t2_423;
// System.Net.NetworkInformation.PingReply
struct PingReply_t2_424;
// System.Net.IPAddress
struct IPAddress_t2_326;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.Net.NetworkInformation.PingOptions
struct PingOptions_t2_420;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Ping_cap_user_header_t.h"
#include "System_System_Net_NetworkInformation_Ping_cap_user_data_t.h"

// System.Void System.Net.NetworkInformation.Ping::.ctor()
extern "C" void Ping__ctor_m2_3015 (Ping_t2_421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::.cctor()
extern "C" void Ping__cctor_m2_3016 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::add_PingCompleted(System.Net.NetworkInformation.PingCompletedEventHandler)
extern "C" void Ping_add_PingCompleted_m2_3017 (Ping_t2_421 * __this, PingCompletedEventHandler_t2_422 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::remove_PingCompleted(System.Net.NetworkInformation.PingCompletedEventHandler)
extern "C" void Ping_remove_PingCompleted_m2_3018 (Ping_t2_421 * __this, PingCompletedEventHandler_t2_422 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::System.IDisposable.Dispose()
extern "C" void Ping_System_IDisposable_Dispose_m2_3019 (Ping_t2_421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Ping::capget(System.Net.NetworkInformation.Ping/cap_user_header_t&,System.Net.NetworkInformation.Ping/cap_user_data_t&)
extern "C" int32_t Ping_capget_m2_3020 (Object_t * __this /* static, unused */, cap_user_header_t_t2_416 * ___header, cap_user_data_t_t2_417 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::CheckLinuxCapabilities()
extern "C" void Ping_CheckLinuxCapabilities_m2_3021 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::OnPingCompleted(System.Net.NetworkInformation.PingCompletedEventArgs)
extern "C" void Ping_OnPingCompleted_m2_3022 (Ping_t2_421 * __this, PingCompletedEventArgs_t2_423 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.Net.IPAddress)
extern "C" PingReply_t2_424 * Ping_Send_m2_3023 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.Net.IPAddress,System.Int32)
extern "C" PingReply_t2_424 * Ping_Send_m2_3024 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, int32_t ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.Net.IPAddress,System.Int32,System.Byte[])
extern "C" PingReply_t2_424 * Ping_Send_m2_3025 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.String)
extern "C" PingReply_t2_424 * Ping_Send_m2_3026 (Ping_t2_421 * __this, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.String,System.Int32)
extern "C" PingReply_t2_424 * Ping_Send_m2_3027 (Ping_t2_421 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.String,System.Int32,System.Byte[])
extern "C" PingReply_t2_424 * Ping_Send_m2_3028 (Ping_t2_421 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.String,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions)
extern "C" PingReply_t2_424 * Ping_Send_m2_3029 (Ping_t2_421 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t2_420 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.Ping::GetNonLoopbackIP()
extern "C" IPAddress_t2_326 * Ping_GetNonLoopbackIP_m2_3030 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::Send(System.Net.IPAddress,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions)
extern "C" PingReply_t2_424 * Ping_Send_m2_3031 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t2_420 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::SendPrivileged(System.Net.IPAddress,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions)
extern "C" PingReply_t2_424 * Ping_SendPrivileged_m2_3032 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t2_420 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.Ping::SendUnprivileged(System.Net.IPAddress,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions)
extern "C" PingReply_t2_424 * Ping_SendUnprivileged_m2_3033 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t2_420 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.Net.IPAddress,System.Int32,System.Byte[],System.Object)
extern "C" void Ping_SendAsync_m2_3034 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.Net.IPAddress,System.Int32,System.Object)
extern "C" void Ping_SendAsync_m2_3035 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, int32_t ___timeout, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.Net.IPAddress,System.Object)
extern "C" void Ping_SendAsync_m2_3036 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.String,System.Int32,System.Byte[],System.Object)
extern "C" void Ping_SendAsync_m2_3037 (Ping_t2_421 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.String,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions,System.Object)
extern "C" void Ping_SendAsync_m2_3038 (Ping_t2_421 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t2_420 * ___options, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.String,System.Int32,System.Object)
extern "C" void Ping_SendAsync_m2_3039 (Ping_t2_421 * __this, String_t* ___hostNameOrAddress, int32_t ___timeout, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.String,System.Object)
extern "C" void Ping_SendAsync_m2_3040 (Ping_t2_421 * __this, String_t* ___hostNameOrAddress, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsync(System.Net.IPAddress,System.Int32,System.Byte[],System.Net.NetworkInformation.PingOptions,System.Object)
extern "C" void Ping_SendAsync_m2_3041 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, int32_t ___timeout, ByteU5BU5D_t1_72* ___buffer, PingOptions_t2_420 * ___options, Object_t * ___userToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Ping::SendAsyncCancel()
extern "C" void Ping_SendAsyncCancel_m2_3042 (Ping_t2_421 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Ping::BuildPingArgs(System.Net.IPAddress,System.Int32,System.Net.NetworkInformation.PingOptions)
extern "C" String_t* Ping_BuildPingArgs_m2_3043 (Ping_t2_421 * __this, IPAddress_t2_326 * ___address, int32_t ___timeout, PingOptions_t2_420 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
