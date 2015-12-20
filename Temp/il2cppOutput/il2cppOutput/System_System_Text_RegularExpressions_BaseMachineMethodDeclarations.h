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

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t2_695;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t2_352;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Text.RegularExpressions.Match
struct Match_t2_694;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t2_693;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t2_706;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C" void BaseMachine__ctor_m2_5752 (BaseMachine_t2_695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_Replace_m2_5753 (BaseMachine_t2_695 * __this, Regex_t2_352 * ___regex, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.BaseMachine::Split(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" StringU5BU5D_t1_206* BaseMachine_Split_m2_5754 (BaseMachine_t2_695 * __this, Regex_t2_352 * ___regex, String_t* ___input, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t2_694 * BaseMachine_Scan_m2_5755 (BaseMachine_t2_695 * __this, Regex_t2_352 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Result(System.String,System.Text.RegularExpressions.Match)
extern "C" String_t* BaseMachine_Result_m2_5756 (BaseMachine_t2_695 * __this, String_t* ___replacement, Match_t2_694 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_LTRReplace_m2_5757 (BaseMachine_t2_695 * __this, Regex_t2_352 * ___regex, String_t* ___input, MatchAppendEvaluator_t2_693 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C" String_t* BaseMachine_LTRReplace_m2_5758 (BaseMachine_t2_695 * __this, Regex_t2_352 * ___regex, String_t* ___input, MatchAppendEvaluator_t2_693 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C" String_t* BaseMachine_RTLReplace_m2_5759 (BaseMachine_t2_695 * __this, Regex_t2_352 * ___regex, String_t* ___input, MatchEvaluator_t2_706 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
