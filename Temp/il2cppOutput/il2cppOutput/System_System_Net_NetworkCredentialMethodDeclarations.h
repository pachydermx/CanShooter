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

// System.Net.NetworkCredential
struct NetworkCredential_t2_525;
// System.String
struct String_t;
// System.Uri
struct Uri_t2_284;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkCredential::.ctor()
extern "C" void NetworkCredential__ctor_m2_4717 (NetworkCredential_t2_525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::.ctor(System.String,System.String)
extern "C" void NetworkCredential__ctor_m2_4718 (NetworkCredential_t2_525 * __this, String_t* ___userName, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::.ctor(System.String,System.String,System.String)
extern "C" void NetworkCredential__ctor_m2_4719 (NetworkCredential_t2_525 * __this, String_t* ___userName, String_t* ___password, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m2_4720 (NetworkCredential_t2_525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::set_Domain(System.String)
extern "C" void NetworkCredential_set_Domain_m2_4721 (NetworkCredential_t2_525 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m2_4722 (NetworkCredential_t2_525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::set_UserName(System.String)
extern "C" void NetworkCredential_set_UserName_m2_4723 (NetworkCredential_t2_525 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m2_4724 (NetworkCredential_t2_525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::set_Password(System.String)
extern "C" void NetworkCredential_set_Password_m2_4725 (NetworkCredential_t2_525 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t2_525 * NetworkCredential_GetCredential_m2_4726 (NetworkCredential_t2_525 * __this, Uri_t2_284 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
