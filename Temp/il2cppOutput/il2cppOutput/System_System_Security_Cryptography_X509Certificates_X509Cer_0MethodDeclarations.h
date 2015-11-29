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

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t2_664;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2_542;
// System.Security.Cryptography.X509Certificates.X509Certificate2[]
struct X509Certificate2U5BU5D_t2_835;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t2_665;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C_0.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Fin.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor()
extern "C" void X509Certificate2Collection__ctor_m2_5470 (X509Certificate2Collection_t2_664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Collection__ctor_m2_5471 (X509Certificate2Collection_t2_664 * __this, X509Certificate2Collection_t2_664 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509Certificate2Collection__ctor_m2_5472 (X509Certificate2Collection_t2_664 * __this, X509Certificate2_t2_542 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2[])
extern "C" void X509Certificate2Collection__ctor_m2_5473 (X509Certificate2Collection_t2_664 * __this, X509Certificate2U5BU5D_t2_835* ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::get_Item(System.Int32)
extern "C" X509Certificate2_t2_542 * X509Certificate2Collection_get_Item_m2_5474 (X509Certificate2Collection_t2_664 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::set_Item(System.Int32,System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509Certificate2Collection_set_Item_m2_5475 (X509Certificate2Collection_t2_664 * __this, int32_t ___index, X509Certificate2_t2_542 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" int32_t X509Certificate2Collection_Add_m2_5476 (X509Certificate2Collection_t2_664 * __this, X509Certificate2_t2_542 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2[])
extern "C" void X509Certificate2Collection_AddRange_m2_5477 (X509Certificate2Collection_t2_664 * __this, X509Certificate2U5BU5D_t2_835* ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Collection_AddRange_m2_5478 (X509Certificate2Collection_t2_664 * __this, X509Certificate2Collection_t2_664 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Certificate2Collection_Contains_m2_5479 (X509Certificate2Collection_t2_664 * __this, X509Certificate2_t2_542 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Export(System.Security.Cryptography.X509Certificates.X509ContentType)
extern "C" ByteU5BU5D_t1_72* X509Certificate2Collection_Export_m2_5480 (X509Certificate2Collection_t2_664 * __this, int32_t ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Export(System.Security.Cryptography.X509Certificates.X509ContentType,System.String)
extern "C" ByteU5BU5D_t1_72* X509Certificate2Collection_Export_m2_5481 (X509Certificate2Collection_t2_664 * __this, int32_t ___contentType, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Find(System.Security.Cryptography.X509Certificates.X509FindType,System.Object,System.Boolean)
extern "C" X509Certificate2Collection_t2_664 * X509Certificate2Collection_Find_m2_5482 (X509Certificate2Collection_t2_664 * __this, int32_t ___findType, Object_t * ___findValue, bool ___validOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator System.Security.Cryptography.X509Certificates.X509Certificate2Collection::GetEnumerator()
extern "C" X509Certificate2Enumerator_t2_665 * X509Certificate2Collection_GetEnumerator_m2_5483 (X509Certificate2Collection_t2_664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Import(System.Byte[])
extern "C" void X509Certificate2Collection_Import_m2_5484 (X509Certificate2Collection_t2_664 * __this, ByteU5BU5D_t1_72* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2Collection_Import_m2_5485 (X509Certificate2Collection_t2_664 * __this, ByteU5BU5D_t1_72* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Import(System.String)
extern "C" void X509Certificate2Collection_Import_m2_5486 (X509Certificate2Collection_t2_664 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Import(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2Collection_Import_m2_5487 (X509Certificate2Collection_t2_664 * __this, String_t* ___fileName, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Insert(System.Int32,System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509Certificate2Collection_Insert_m2_5488 (X509Certificate2Collection_t2_664 * __this, int32_t ___index, X509Certificate2_t2_542 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Remove(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509Certificate2Collection_Remove_m2_5489 (X509Certificate2Collection_t2_664 * __this, X509Certificate2_t2_542 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::RemoveRange(System.Security.Cryptography.X509Certificates.X509Certificate2[])
extern "C" void X509Certificate2Collection_RemoveRange_m2_5490 (X509Certificate2Collection_t2_664 * __this, X509Certificate2U5BU5D_t2_835* ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::RemoveRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Collection_RemoveRange_m2_5491 (X509Certificate2Collection_t2_664 * __this, X509Certificate2Collection_t2_664 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
