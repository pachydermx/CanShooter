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

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2_462;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_570;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2_305;
// System.String[]
struct StringU5BU5D_t1_206;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LocalCertificateSelectionCallback__ctor_m2_6578 (LocalCertificateSelectionCallback_t2_462 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C" X509Certificate_t1_570 * LocalCertificateSelectionCallback_Invoke_m2_6579 (LocalCertificateSelectionCallback_t2_462 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___localCertificates, X509Certificate_t1_570 * ___remoteCertificate, StringU5BU5D_t1_206* ___acceptableIssuers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" X509Certificate_t1_570 * pinvoke_delegate_wrapper_LocalCertificateSelectionCallback_t2_462(Il2CppObject* delegate, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___localCertificates, X509Certificate_t1_570 * ___remoteCertificate, StringU5BU5D_t1_206* ___acceptableIssuers);
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * LocalCertificateSelectionCallback_BeginInvoke_m2_6580 (LocalCertificateSelectionCallback_t2_462 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___localCertificates, X509Certificate_t1_570 * ___remoteCertificate, StringU5BU5D_t1_206* ___acceptableIssuers, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t1_570 * LocalCertificateSelectionCallback_EndInvoke_m2_6581 (LocalCertificateSelectionCallback_t2_462 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
