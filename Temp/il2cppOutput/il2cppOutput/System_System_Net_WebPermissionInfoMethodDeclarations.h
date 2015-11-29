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

// System.Net.WebPermissionInfo
struct WebPermissionInfo_t2_632;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t2_352;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_WebPermissionInfoType.h"

// System.Void System.Net.WebPermissionInfo::.ctor(System.Net.WebPermissionInfoType,System.String)
extern "C" void WebPermissionInfo__ctor_m2_5207 (WebPermissionInfo_t2_632 * __this, int32_t ___type, String_t* ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionInfo::.ctor(System.Text.RegularExpressions.Regex)
extern "C" void WebPermissionInfo__ctor_m2_5208 (WebPermissionInfo_t2_632 * __this, Regex_t2_352 * ___regex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebPermissionInfo::get_Info()
extern "C" String_t* WebPermissionInfo_get_Info_m2_5209 (WebPermissionInfo_t2_632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
