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

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t2_662;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2_655;
// System.Security.Cryptography.Oid
struct Oid_t2_656;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
extern "C" void X509Extension__ctor_m2_5613 (X509Extension_t2_662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509Extension__ctor_m2_5614 (X509Extension_t2_662 * __this, AsnEncodedData_t2_655 * ___encodedExtension, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.Security.Cryptography.Oid,System.Byte[],System.Boolean)
extern "C" void X509Extension__ctor_m2_5615 (X509Extension_t2_662 * __this, Oid_t2_656 * ___oid, ByteU5BU5D_t1_72* ___rawData, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
extern "C" void X509Extension__ctor_m2_5616 (X509Extension_t2_662 * __this, String_t* ___oid, ByteU5BU5D_t1_72* ___rawData, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
extern "C" bool X509Extension_get_Critical_m2_5617 (X509Extension_t2_662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
extern "C" void X509Extension_set_Critical_m2_5618 (X509Extension_t2_662 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509Extension_CopyFrom_m2_5619 (X509Extension_t2_662 * __this, AsnEncodedData_t2_655 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
extern "C" String_t* X509Extension_FormatUnkownData_m2_5620 (X509Extension_t2_662 * __this, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
