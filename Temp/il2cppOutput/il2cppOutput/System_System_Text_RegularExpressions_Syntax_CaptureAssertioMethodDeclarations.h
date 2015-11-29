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

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t2_754;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2_756;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t2_749;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2_841;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t2_755;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m2_6201 (CaptureAssertion_t2_754 * __this, Literal_t2_756 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::get_CapturingGroup()
extern "C" CapturingGroup_t2_749 * CaptureAssertion_get_CapturingGroup_m2_6202 (CaptureAssertion_t2_754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m2_6203 (CaptureAssertion_t2_754 * __this, CapturingGroup_t2_749 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m2_6204 (CaptureAssertion_t2_754 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m2_6205 (CaptureAssertion_t2_754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t2_755 * CaptureAssertion_get_Alternate_m2_6206 (CaptureAssertion_t2_754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
