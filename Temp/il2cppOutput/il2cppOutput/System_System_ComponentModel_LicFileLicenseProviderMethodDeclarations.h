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

// System.ComponentModel.LicFileLicenseProvider
struct LicFileLicenseProvider_t2_118;
// System.ComponentModel.License
struct License_t2_121;
// System.ComponentModel.LicenseContext
struct LicenseContext_t2_50;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.LicFileLicenseProvider::.ctor()
extern "C" void LicFileLicenseProvider__ctor_m2_817 (LicFileLicenseProvider_t2_118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.License System.ComponentModel.LicFileLicenseProvider::GetLicense(System.ComponentModel.LicenseContext,System.Type,System.Object,System.Boolean)
extern "C" License_t2_121 * LicFileLicenseProvider_GetLicense_m2_818 (LicFileLicenseProvider_t2_118 * __this, LicenseContext_t2_50 * ___context, Type_t * ___type, Object_t * ___instance, bool ___allowExceptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.LicFileLicenseProvider::GetKey(System.Type)
extern "C" String_t* LicFileLicenseProvider_GetKey_m2_819 (LicFileLicenseProvider_t2_118 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicFileLicenseProvider::IsKeyValid(System.String,System.Type)
extern "C" bool LicFileLicenseProvider_IsKeyValid_m2_820 (LicFileLicenseProvider_t2_118 * __this, String_t* ___key, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
