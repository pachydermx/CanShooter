﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.Design.RuntimeLicenseContext
struct RuntimeLicenseContext_t2_49;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Reflection.Assembly
struct Assembly_t1_277;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.RuntimeLicenseContext::.ctor()
extern "C" void RuntimeLicenseContext__ctor_m2_411 (RuntimeLicenseContext_t2_49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.RuntimeLicenseContext::LoadKeys()
extern "C" void RuntimeLicenseContext_LoadKeys_m2_412 (RuntimeLicenseContext_t2_49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.RuntimeLicenseContext::LoadAssemblyLicenses(System.Collections.Hashtable,System.Reflection.Assembly)
extern "C" void RuntimeLicenseContext_LoadAssemblyLicenses_m2_413 (RuntimeLicenseContext_t2_49 * __this, Hashtable_t1_173 * ___targetkeys, Assembly_t1_277 * ___asm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.RuntimeLicenseContext::GetSavedLicenseKey(System.Type,System.Reflection.Assembly)
extern "C" String_t* RuntimeLicenseContext_GetSavedLicenseKey_m2_414 (RuntimeLicenseContext_t2_49 * __this, Type_t * ___type, Assembly_t1_277 * ___resourceAssembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.RuntimeLicenseContext::SetSavedLicenseKey(System.Type,System.String)
extern "C" void RuntimeLicenseContext_SetSavedLicenseKey_m2_415 (RuntimeLicenseContext_t2_49 * __this, Type_t * ___type, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
