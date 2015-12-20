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

// System.Text.RegularExpressions.Match
struct Match_t2_694;
// System.Text.RegularExpressions.Regex
struct Regex_t2_352;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2_702;
// System.String
struct String_t;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t2_700;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Match::.ctor()
extern "C" void Match__ctor_m2_5793 (Match_t2_694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Match__ctor_m2_5794 (Match_t2_694 * __this, Regex_t2_352 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Match__ctor_m2_5795 (Match_t2_694 * __this, Regex_t2_352 * ___regex, Object_t * ___machine, String_t* ___text, int32_t ___text_length, int32_t ___n_groups, int32_t ___index, int32_t ___length, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.cctor()
extern "C" void Match__cctor_m2_5796 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern "C" Match_t2_694 * Match_get_Empty_m2_5797 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::Synchronized(System.Text.RegularExpressions.Match)
extern "C" Match_t2_694 * Match_Synchronized_m2_5798 (Object_t * __this /* static, unused */, Match_t2_694 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
extern "C" GroupCollection_t2_700 * Match_get_Groups_m2_5799 (Match_t2_694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
extern "C" Match_t2_694 * Match_NextMatch_m2_5800 (Match_t2_694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Match::Result(System.String)
extern "C" String_t* Match_Result_m2_5801 (Match_t2_694 * __this, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::get_Regex()
extern "C" Regex_t2_352 * Match_get_Regex_m2_5802 (Match_t2_694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
