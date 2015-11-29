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

// Vuforia.WebCamProfile
struct WebCamProfile_t6_172;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C" ProfileData_t6_170  WebCamProfile_get_Default_m6_1727 (WebCamProfile_t6_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C" void WebCamProfile__ctor_m6_1728 (WebCamProfile_t6_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C" ProfileData_t6_170  WebCamProfile_GetProfile_m6_1729 (WebCamProfile_t6_172 * __this, String_t* ___webcamName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamProfile::ProfileAvailable(System.String)
extern "C" bool WebCamProfile_ProfileAvailable_m6_1730 (WebCamProfile_t6_172 * __this, String_t* ___webcamName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
