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

// System.Text.RegularExpressions.Regex
struct Regex_t2_352;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Text.RegularExpressions.RegexCompilationInfo[]
struct RegexCompilationInfoU5BU5D_t2_840;
// System.Reflection.AssemblyName
struct AssemblyName_t1_329;
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t1_969;
// System.Text.RegularExpressions.Match
struct Match_t2_694;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t2_704;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t2_706;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t2_708;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2_702;
// System.Collections.IDictionary
struct IDictionary_t1_35;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RegexOptions.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
extern "C" void Regex__ctor_m2_5819 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" void Regex__ctor_m2_5820 (Regex_t2_352 * __this, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" void Regex__ctor_m2_5821 (Regex_t2_352 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Regex__ctor_m2_5822 (Regex_t2_352 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
extern "C" void Regex__cctor_m2_5823 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m2_5824 (Regex_t2_352 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::CompileToAssembly(System.Text.RegularExpressions.RegexCompilationInfo[],System.Reflection.AssemblyName)
extern "C" void Regex_CompileToAssembly_m2_5825 (Object_t * __this /* static, unused */, RegexCompilationInfoU5BU5D_t2_840* ___regexes, AssemblyName_t1_329 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::CompileToAssembly(System.Text.RegularExpressions.RegexCompilationInfo[],System.Reflection.AssemblyName,System.Reflection.Emit.CustomAttributeBuilder[])
extern "C" void Regex_CompileToAssembly_m2_5826 (Object_t * __this /* static, unused */, RegexCompilationInfoU5BU5D_t2_840* ___regexes, AssemblyName_t1_329 * ___aname, CustomAttributeBuilderU5BU5D_t1_969* ___attribs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::CompileToAssembly(System.Text.RegularExpressions.RegexCompilationInfo[],System.Reflection.AssemblyName,System.Reflection.Emit.CustomAttributeBuilder[],System.String)
extern "C" void Regex_CompileToAssembly_m2_5827 (Object_t * __this /* static, unused */, RegexCompilationInfoU5BU5D_t2_840* ___regexes, AssemblyName_t1_329 * ___aname, CustomAttributeBuilderU5BU5D_t1_969* ___attribs, String_t* ___resourceFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Escape(System.String)
extern "C" String_t* Regex_Escape_m2_5828 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Unescape(System.String)
extern "C" String_t* Regex_Unescape_m2_5829 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
extern "C" bool Regex_IsMatch_m2_5830 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" bool Regex_IsMatch_m2_5831 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String)
extern "C" Match_t2_694 * Regex_Match_m2_5832 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" Match_t2_694 * Regex_Match_m2_5833 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String)
extern "C" MatchCollection_t2_704 * Regex_Matches_m2_5834 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" MatchCollection_t2_704 * Regex_Matches_m2_5835 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Text.RegularExpressions.MatchEvaluator)
extern "C" String_t* Regex_Replace_m2_5836 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, MatchEvaluator_t2_706 * ___evaluator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Text.RegularExpressions.RegexOptions)
extern "C" String_t* Regex_Replace_m2_5837 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, MatchEvaluator_t2_706 * ___evaluator, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
extern "C" String_t* Regex_Replace_m2_5838 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" String_t* Regex_Replace_m2_5839 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, String_t* ___replacement, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String)
extern "C" StringU5BU5D_t1_206* Regex_Split_m2_5840 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" StringU5BU5D_t1_206* Regex_Split_m2_5841 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_CacheSize()
extern "C" int32_t Regex_get_CacheSize_m2_5842 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::set_CacheSize(System.Int32)
extern "C" void Regex_set_CacheSize_m2_5843 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
extern "C" void Regex_validate_options_m2_5844 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
extern "C" void Regex_Init_m2_5845 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
extern "C" void Regex_InitNewRegex_m2_5846 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" Object_t * Regex_CreateMachineFactory_m2_5847 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern "C" int32_t Regex_get_Options_m2_5848 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern "C" bool Regex_get_RightToLeft_m2_5849 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNames()
extern "C" StringU5BU5D_t1_206* Regex_GetGroupNames_m2_5850 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::GetGroupNumbers()
extern "C" Int32U5BU5D_t1_161* Regex_GetGroupNumbers_m2_5851 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::GroupNameFromNumber(System.Int32)
extern "C" String_t* Regex_GroupNameFromNumber_m2_5852 (Regex_t2_352 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GroupNumberFromName(System.String)
extern "C" int32_t Regex_GroupNumberFromName_m2_5853 (Regex_t2_352 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
extern "C" int32_t Regex_GetGroupIndex_m2_5854 (Regex_t2_352 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
extern "C" int32_t Regex_default_startat_m2_5855 (Regex_t2_352 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C" bool Regex_IsMatch_m2_5856 (Regex_t2_352 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern "C" bool Regex_IsMatch_m2_5857 (Regex_t2_352 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
extern "C" Match_t2_694 * Regex_Match_m2_5858 (Regex_t2_352 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern "C" Match_t2_694 * Regex_Match_m2_5859 (Regex_t2_352 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32,System.Int32)
extern "C" Match_t2_694 * Regex_Match_m2_5860 (Regex_t2_352 * __this, String_t* ___input, int32_t ___startat, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern "C" MatchCollection_t2_704 * Regex_Matches_m2_5861 (Regex_t2_352 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern "C" MatchCollection_t2_704 * Regex_Matches_m2_5862 (Regex_t2_352 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.Text.RegularExpressions.MatchEvaluator)
extern "C" String_t* Regex_Replace_m2_5863 (Regex_t2_352 * __this, String_t* ___input, MatchEvaluator_t2_706 * ___evaluator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32)
extern "C" String_t* Regex_Replace_m2_5864 (Regex_t2_352 * __this, String_t* ___input, MatchEvaluator_t2_706 * ___evaluator, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C" String_t* Regex_Replace_m2_5865 (Regex_t2_352 * __this, String_t* ___input, MatchEvaluator_t2_706 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
extern "C" String_t* Regex_Replace_m2_5866 (Regex_t2_352 * __this, String_t* ___input, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32)
extern "C" String_t* Regex_Replace_m2_5867 (Regex_t2_352 * __this, String_t* ___input, String_t* ___replacement, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* Regex_Replace_m2_5868 (Regex_t2_352 * __this, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String)
extern "C" StringU5BU5D_t1_206* Regex_Split_m2_5869 (Regex_t2_352 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.Int32)
extern "C" StringU5BU5D_t1_206* Regex_Split_m2_5870 (Regex_t2_352 * __this, String_t* ___input, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.Int32,System.Int32)
extern "C" StringU5BU5D_t1_206* Regex_Split_m2_5871 (Regex_t2_352 * __this, String_t* ___input, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitializeReferences()
extern "C" void Regex_InitializeReferences_m2_5872 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::UseOptionR()
extern "C" bool Regex_UseOptionR_m2_5873 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
extern "C" String_t* Regex_ToString_m2_5874 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_GroupCount()
extern "C" int32_t Regex_get_GroupCount_m2_5875 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
extern "C" int32_t Regex_get_Gap_m2_5876 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
extern "C" Object_t * Regex_CreateMachine_m2_5877 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
extern "C" StringU5BU5D_t1_206* Regex_GetGroupNamesArray_m2_5878 (Object_t * __this /* static, unused */, int32_t ___groupCount, Object_t * ___mapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
extern "C" Int32U5BU5D_t1_161* Regex_get_GroupNumbers_m2_5879 (Regex_t2_352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
