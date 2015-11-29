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

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2_305;
// System.Security.Cryptography.X509Certificates.X509Certificate[]
struct X509CertificateU5BU5D_t1_966;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_570;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t2_666;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
extern "C" void X509CertificateCollection__ctor_m2_5506 (X509CertificateCollection_t2_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate[])
extern "C" void X509CertificateCollection__ctor_m2_5507 (X509CertificateCollection_t2_305 * __this, X509CertificateU5BU5D_t1_966* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void X509CertificateCollection__ctor_m2_5508 (X509CertificateCollection_t2_305 * __this, X509CertificateCollection_t2_305 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
extern "C" X509Certificate_t1_570 * X509CertificateCollection_get_Item_m2_5509 (X509CertificateCollection_t2_305 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::set_Item(System.Int32,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void X509CertificateCollection_set_Item_m2_5510 (X509CertificateCollection_t2_305 * __this, int32_t ___index, X509Certificate_t1_570 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" int32_t X509CertificateCollection_Add_m2_5511 (X509CertificateCollection_t2_305 * __this, X509Certificate_t1_570 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate[])
extern "C" void X509CertificateCollection_AddRange_m2_5512 (X509CertificateCollection_t2_305 * __this, X509CertificateU5BU5D_t1_966* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void X509CertificateCollection_AddRange_m2_5513 (X509CertificateCollection_t2_305 * __this, X509CertificateCollection_t2_305 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" bool X509CertificateCollection_Contains_m2_5514 (X509CertificateCollection_t2_305 * __this, X509Certificate_t1_570 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::CopyTo(System.Security.Cryptography.X509Certificates.X509Certificate[],System.Int32)
extern "C" void X509CertificateCollection_CopyTo_m2_5515 (X509CertificateCollection_t2_305 * __this, X509CertificateU5BU5D_t1_966* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
extern "C" X509CertificateEnumerator_t2_666 * X509CertificateCollection_GetEnumerator_m2_5516 (X509CertificateCollection_t2_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
extern "C" int32_t X509CertificateCollection_GetHashCode_m2_5517 (X509CertificateCollection_t2_305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::IndexOf(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" int32_t X509CertificateCollection_IndexOf_m2_5518 (X509CertificateCollection_t2_305 * __this, X509Certificate_t1_570 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::Insert(System.Int32,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void X509CertificateCollection_Insert_m2_5519 (X509CertificateCollection_t2_305 * __this, int32_t ___index, X509Certificate_t1_570 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::Remove(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void X509CertificateCollection_Remove_m2_5520 (X509CertificateCollection_t2_305 * __this, X509Certificate_t1_570 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C" bool X509CertificateCollection_Compare_m2_5521 (X509CertificateCollection_t2_305 * __this, ByteU5BU5D_t1_72* ___array1, ByteU5BU5D_t1_72* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
