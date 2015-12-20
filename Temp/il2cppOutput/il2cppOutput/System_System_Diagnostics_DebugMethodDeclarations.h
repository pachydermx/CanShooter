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

// System.Diagnostics.Debug
struct Debug_t2_184;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.Debug::.ctor()
extern "C" void Debug__ctor_m2_1398 (Debug_t2_184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debug::Assert(System.Boolean)
extern "C" void Debug_Assert_m2_1399 (Object_t * __this /* static, unused */, bool ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debug::Assert(System.Boolean,System.String)
extern "C" void Debug_Assert_m2_1400 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debug::Assert(System.Boolean,System.String,System.String)
extern "C" void Debug_Assert_m2_1401 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___details, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debug::Assert(System.Boolean,System.String,System.String,System.Object[])
extern "C" void Debug_Assert_m2_1402 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___details, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debug::WriteLine(System.Object)
extern "C" void Debug_WriteLine_m2_1403 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debug::WriteLine(System.String)
extern "C" void Debug_WriteLine_m2_1404 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Debug::WriteLine(System.String,System.Object[])
extern "C" void Debug_WriteLine_m2_1405 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
