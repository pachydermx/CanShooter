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

// System.Text.RegularExpressions.RxInterpreter
struct RxInterpreter_t2_713;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t2_714;
// System.Text.RegularExpressions.Match
struct Match_t2_694;
// System.Text.RegularExpressions.Regex
struct Regex_t2_352;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t2_699;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.RxInterpreter::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C" void RxInterpreter__ctor_m2_5906 (RxInterpreter_t2_713 * __this, ByteU5BU5D_t1_72* ___program, EvalDelegate_t2_714 * ___eval_del, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::.cctor()
extern "C" void RxInterpreter__cctor_m2_5907 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::ReadInt(System.Byte[],System.Int32)
extern "C" int32_t RxInterpreter_ReadInt_m2_5908 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___code, int32_t ___pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C" Match_t2_694 * RxInterpreter_Scan_m2_5909 (RxInterpreter_t2_713 * __this, Regex_t2_352 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Open(System.Int32,System.Int32)
extern "C" void RxInterpreter_Open_m2_5910 (RxInterpreter_t2_713 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Close(System.Int32,System.Int32)
extern "C" void RxInterpreter_Close_m2_5911 (RxInterpreter_t2_713 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" bool RxInterpreter_Balance_m2_5912 (RxInterpreter_t2_713 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::Checkpoint()
extern "C" int32_t RxInterpreter_Checkpoint_m2_5913 (RxInterpreter_t2_713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::Backtrack(System.Int32)
extern "C" void RxInterpreter_Backtrack_m2_5914 (RxInterpreter_t2_713 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::ResetGroups()
extern "C" void RxInterpreter_ResetGroups_m2_5915 (RxInterpreter_t2_713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::GetLastDefined(System.Int32)
extern "C" int32_t RxInterpreter_GetLastDefined_m2_5916 (RxInterpreter_t2_713 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.RxInterpreter::CreateMark(System.Int32)
extern "C" int32_t RxInterpreter_CreateMark_m2_5917 (RxInterpreter_t2_713 * __this, int32_t ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C" void RxInterpreter_GetGroupInfo_m2_5918 (RxInterpreter_t2_713 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern "C" void RxInterpreter_PopulateGroup_m2_5919 (RxInterpreter_t2_713 * __this, Group_t2_699 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern "C" Match_t2_694 * RxInterpreter_GenerateMatch_m2_5920 (RxInterpreter_t2_713 * __this, Regex_t2_352 * ___regex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.RxInterpreter::SetStartOfMatch(System.Int32)
extern "C" void RxInterpreter_SetStartOfMatch_m2_5921 (RxInterpreter_t2_713 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::IsWordChar(System.Char)
extern "C" bool RxInterpreter_IsWordChar_m2_5922 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.RxInterpreter::EvalByteCode(System.Int32,System.Int32,System.Int32&)
extern "C" bool RxInterpreter_EvalByteCode_m2_5923 (RxInterpreter_t2_713 * __this, int32_t ___pc, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
