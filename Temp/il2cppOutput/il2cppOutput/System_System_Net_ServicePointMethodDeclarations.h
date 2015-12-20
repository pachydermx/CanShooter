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

// System.Net.ServicePoint
struct ServicePoint_t2_564;
// System.Uri
struct Uri_t2_284;
// System.Exception
struct Exception_t1_33;
// System.Net.BindIPEndPoint
struct BindIPEndPoint_t2_601;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// System.String
struct String_t;
// System.Version
struct Version_t1_331;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Net.IPHostEntry
struct IPHostEntry_t2_532;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t2_628;
// System.EventHandler
struct EventHandler_t1_275;
// System.Net.HttpWebRequest
struct HttpWebRequest_t2_585;
// System.Net.Sockets.Socket
struct Socket_t2_471;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C" void ServicePoint__ctor_m2_4776 (ServicePoint_t2_564 * __this, Uri_t2_284 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C" Uri_t2_284 * ServicePoint_get_Address_m2_4777 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.ServicePoint::GetMustImplement()
extern "C" Exception_t1_33 * ServicePoint_GetMustImplement_m2_4778 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.BindIPEndPoint System.Net.ServicePoint::get_BindIPEndPointDelegate()
extern "C" BindIPEndPoint_t2_601 * ServicePoint_get_BindIPEndPointDelegate_m2_4779 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_BindIPEndPointDelegate(System.Net.BindIPEndPoint)
extern "C" void ServicePoint_set_BindIPEndPointDelegate_m2_4780 (ServicePoint_t2_564 * __this, BindIPEndPoint_t2_601 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.ServicePoint::get_Certificate()
extern "C" X509Certificate_t1_572 * ServicePoint_get_Certificate_m2_4781 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.ServicePoint::get_ClientCertificate()
extern "C" X509Certificate_t1_572 * ServicePoint_get_ClientCertificate_m2_4782 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLeaseTimeout()
extern "C" int32_t ServicePoint_get_ConnectionLeaseTimeout_m2_4783 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_ConnectionLeaseTimeout(System.Int32)
extern "C" void ServicePoint_set_ConnectionLeaseTimeout_m2_4784 (ServicePoint_t2_564 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
extern "C" int32_t ServicePoint_get_ConnectionLimit_m2_4785 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_ConnectionLimit(System.Int32)
extern "C" void ServicePoint_set_ConnectionLimit_m2_4786 (ServicePoint_t2_564 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePoint::get_ConnectionName()
extern "C" String_t* ServicePoint_get_ConnectionName_m2_4787 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C" int32_t ServicePoint_get_CurrentConnections_m2_4788 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C" DateTime_t1_128  ServicePoint_get_IdleSince_m2_4789 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C" void ServicePoint_set_IdleSince_m2_4790 (ServicePoint_t2_564 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_MaxIdleTime()
extern "C" int32_t ServicePoint_get_MaxIdleTime_m2_4791 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_MaxIdleTime(System.Int32)
extern "C" void ServicePoint_set_MaxIdleTime_m2_4792 (ServicePoint_t2_564 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
extern "C" Version_t1_331 * ServicePoint_get_ProtocolVersion_m2_4793 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ReceiveBufferSize()
extern "C" int32_t ServicePoint_get_ReceiveBufferSize_m2_4794 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_ReceiveBufferSize(System.Int32)
extern "C" void ServicePoint_set_ReceiveBufferSize_m2_4795 (ServicePoint_t2_564 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SupportsPipelining()
extern "C" bool ServicePoint_get_SupportsPipelining_m2_4796 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_Expect100Continue()
extern "C" bool ServicePoint_get_Expect100Continue_m2_4797 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C" void ServicePoint_set_Expect100Continue_m2_4798 (ServicePoint_t2_564 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
extern "C" bool ServicePoint_get_UseNagleAlgorithm_m2_4799 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C" void ServicePoint_set_UseNagleAlgorithm_m2_4800 (ServicePoint_t2_564 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
extern "C" bool ServicePoint_get_SendContinue_m2_4801 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C" void ServicePoint_set_SendContinue_m2_4802 (ServicePoint_t2_564 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
extern "C" bool ServicePoint_get_UsesProxy_m2_4803 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C" void ServicePoint_set_UsesProxy_m2_4804 (ServicePoint_t2_564 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
extern "C" bool ServicePoint_get_UseConnect_m2_4805 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C" void ServicePoint_set_UseConnect_m2_4806 (ServicePoint_t2_564 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C" bool ServicePoint_get_AvailableForRecycling_m2_4807 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
extern "C" Hashtable_t1_173 * ServicePoint_get_Groups_m2_4808 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
extern "C" IPHostEntry_t2_532 * ServicePoint_get_HostEntry_m2_4809 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
extern "C" void ServicePoint_SetVersion_m2_4810 (ServicePoint_t2_564 * __this, Version_t1_331 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
extern "C" WebConnectionGroup_t2_628 * ServicePoint_GetConnectionGroup_m2_4811 (ServicePoint_t2_564 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
extern "C" EventHandler_t1_275 * ServicePoint_SendRequest_m2_4812 (ServicePoint_t2_564 * __this, HttpWebRequest_t2_585 * ___request, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CloseConnectionGroup(System.String)
extern "C" bool ServicePoint_CloseConnectionGroup_m2_4813 (ServicePoint_t2_564 * __this, String_t* ___connectionGroupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::IncrementConnection()
extern "C" void ServicePoint_IncrementConnection_m2_4814 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::DecrementConnection()
extern "C" void ServicePoint_DecrementConnection_m2_4815 (ServicePoint_t2_564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void ServicePoint_SetCertificates_m2_4816 (ServicePoint_t2_564 * __this, X509Certificate_t1_572 * ___client, X509Certificate_t1_572 * ___server, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C" bool ServicePoint_CallEndPointDelegate_m2_4817 (ServicePoint_t2_564 * __this, Socket_t2_471 * ___sock, IPEndPoint_t2_430 * ___remote, const MethodInfo* method) IL2CPP_METHOD_ATTR;
