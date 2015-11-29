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

// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t2_752;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2_745;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2_841;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t2_762;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C" void Repetition__ctor_m2_6183 (Repetition_t2_752 * __this, int32_t ___min, int32_t ___max, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C" Expression_t2_745 * Repetition_get_Expression_m2_6184 (Repetition_t2_752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Repetition_set_Expression_m2_6185 (Repetition_t2_752 * __this, Expression_t2_745 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C" int32_t Repetition_get_Minimum_m2_6186 (Repetition_t2_752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Minimum(System.Int32)
extern "C" void Repetition_set_Minimum_m2_6187 (Repetition_t2_752 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Maximum()
extern "C" int32_t Repetition_get_Maximum_m2_6188 (Repetition_t2_752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Maximum(System.Int32)
extern "C" void Repetition_set_Maximum_m2_6189 (Repetition_t2_752 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Repetition::get_Lazy()
extern "C" bool Repetition_get_Lazy_m2_6190 (Repetition_t2_752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Lazy(System.Boolean)
extern "C" void Repetition_set_Lazy_m2_6191 (Repetition_t2_752 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Repetition_Compile_m2_6192 (Repetition_t2_752 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern "C" void Repetition_GetWidth_m2_6193 (Repetition_t2_752 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t2_762 * Repetition_GetAnchorInfo_m2_6194 (Repetition_t2_752 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
