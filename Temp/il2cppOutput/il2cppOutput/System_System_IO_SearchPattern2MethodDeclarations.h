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

// System.IO.SearchPattern2
struct SearchPattern2_t2_248;
// System.String
struct String_t;
// System.IO.SearchPattern2/Op
struct Op_t2_273;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.SearchPattern2::.ctor(System.String)
extern "C" void SearchPattern2__ctor_m2_2175 (SearchPattern2_t2_248 * __this, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SearchPattern2::.ctor(System.String,System.Boolean)
extern "C" void SearchPattern2__ctor_m2_2176 (SearchPattern2_t2_248 * __this, String_t* ___pattern, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SearchPattern2::.cctor()
extern "C" void SearchPattern2__cctor_m2_2177 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.SearchPattern2::IsMatch(System.String,System.Boolean)
extern "C" bool SearchPattern2_IsMatch_m2_2178 (SearchPattern2_t2_248 * __this, String_t* ___text, bool ___ignorecase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.SearchPattern2::IsMatch(System.String)
extern "C" bool SearchPattern2_IsMatch_m2_2179 (SearchPattern2_t2_248 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.SearchPattern2::get_HasWildcard()
extern "C" bool SearchPattern2_get_HasWildcard_m2_2180 (SearchPattern2_t2_248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SearchPattern2::Compile(System.String)
extern "C" void SearchPattern2_Compile_m2_2181 (SearchPattern2_t2_248 * __this, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.SearchPattern2::Match(System.IO.SearchPattern2/Op,System.String,System.Int32)
extern "C" bool SearchPattern2_Match_m2_2182 (SearchPattern2_t2_248 * __this, Op_t2_273 * ___op, String_t* ___text, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
