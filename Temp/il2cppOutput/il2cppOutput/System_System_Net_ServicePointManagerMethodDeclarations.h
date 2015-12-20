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

// System.Net.ServicePointManager
struct ServicePointManager_t2_604;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t2_605;
// System.Exception
struct Exception_t1_33;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2_307;
// System.Net.ServicePoint
struct ServicePoint_t2_564;
// System.Uri
struct Uri_t2_284;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t2_552;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_SecurityProtocolType.h"

// System.Void System.Net.ServicePointManager::.ctor()
extern "C" void ServicePointManager__ctor_m2_4834 (ServicePointManager_t2_604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::.cctor()
extern "C" void ServicePointManager__cctor_m2_4835 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
extern "C" Object_t * ServicePointManager_get_CertificatePolicy_m2_4836 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_CertificatePolicy(System.Net.ICertificatePolicy)
extern "C" void ServicePointManager_set_CertificatePolicy_m2_4837 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C" bool ServicePointManager_get_CheckCertificateRevocationList_m2_4838 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_CheckCertificateRevocationList(System.Boolean)
extern "C" void ServicePointManager_set_CheckCertificateRevocationList_m2_4839 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager::get_DefaultConnectionLimit()
extern "C" int32_t ServicePointManager_get_DefaultConnectionLimit_m2_4840 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_DefaultConnectionLimit(System.Int32)
extern "C" void ServicePointManager_set_DefaultConnectionLimit_m2_4841 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.ServicePointManager::GetMustImplement()
extern "C" Exception_t1_33 * ServicePointManager_GetMustImplement_m2_4842 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager::get_DnsRefreshTimeout()
extern "C" int32_t ServicePointManager_get_DnsRefreshTimeout_m2_4843 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_DnsRefreshTimeout(System.Int32)
extern "C" void ServicePointManager_set_DnsRefreshTimeout_m2_4844 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_EnableDnsRoundRobin()
extern "C" bool ServicePointManager_get_EnableDnsRoundRobin_m2_4845 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_EnableDnsRoundRobin(System.Boolean)
extern "C" void ServicePointManager_set_EnableDnsRoundRobin_m2_4846 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager::get_MaxServicePointIdleTime()
extern "C" int32_t ServicePointManager_get_MaxServicePointIdleTime_m2_4847 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_MaxServicePointIdleTime(System.Int32)
extern "C" void ServicePointManager_set_MaxServicePointIdleTime_m2_4848 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager::get_MaxServicePoints()
extern "C" int32_t ServicePointManager_get_MaxServicePoints_m2_4849 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_MaxServicePoints(System.Int32)
extern "C" void ServicePointManager_set_MaxServicePoints_m2_4850 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern "C" int32_t ServicePointManager_get_SecurityProtocol_m2_4851 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_SecurityProtocol(System.Net.SecurityProtocolType)
extern "C" void ServicePointManager_set_SecurityProtocol_m2_4852 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
extern "C" RemoteCertificateValidationCallback_t2_307 * ServicePointManager_get_ServerCertificateValidationCallback_m2_4853 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_ServerCertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
extern "C" void ServicePointManager_set_ServerCertificateValidationCallback_m2_4854 (Object_t * __this /* static, unused */, RemoteCertificateValidationCallback_t2_307 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_Expect100Continue()
extern "C" bool ServicePointManager_get_Expect100Continue_m2_4855 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_Expect100Continue(System.Boolean)
extern "C" void ServicePointManager_set_Expect100Continue_m2_4856 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_UseNagleAlgorithm()
extern "C" bool ServicePointManager_get_UseNagleAlgorithm_m2_4857 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePointManager_set_UseNagleAlgorithm_m2_4858 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri)
extern "C" ServicePoint_t2_564 * ServicePointManager_FindServicePoint_m2_4859 (Object_t * __this /* static, unused */, Uri_t2_284 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.String,System.Net.IWebProxy)
extern "C" ServicePoint_t2_564 * ServicePointManager_FindServicePoint_m2_4860 (Object_t * __this /* static, unused */, String_t* ___uriString, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern "C" ServicePoint_t2_564 * ServicePointManager_FindServicePoint_m2_4861 (Object_t * __this /* static, unused */, Uri_t2_284 * ___address, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
extern "C" void ServicePointManager_RecycleServicePoints_m2_4862 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
