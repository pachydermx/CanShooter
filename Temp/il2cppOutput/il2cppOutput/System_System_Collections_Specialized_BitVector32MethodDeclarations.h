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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Specialized_BitVector32.h"
#include "System_System_Collections_Specialized_BitVector32_Section.h"

// System.Void System.Collections.Specialized.BitVector32::.ctor(System.Collections.Specialized.BitVector32)
extern "C" void BitVector32__ctor_m2_56 (BitVector32_t2_15 * __this, BitVector32_t2_15  ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.BitVector32::.ctor(System.Int32)
extern "C" void BitVector32__ctor_m2_57 (BitVector32_t2_15 * __this, int32_t ___init, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::get_Data()
extern "C" int32_t BitVector32_get_Data_m2_58 (BitVector32_t2_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::get_Item(System.Collections.Specialized.BitVector32/Section)
extern "C" int32_t BitVector32_get_Item_m2_59 (BitVector32_t2_15 * __this, Section_t2_14  ___section, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.BitVector32::set_Item(System.Collections.Specialized.BitVector32/Section,System.Int32)
extern "C" void BitVector32_set_Item_m2_60 (BitVector32_t2_15 * __this, Section_t2_14  ___section, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.BitVector32::get_Item(System.Int32)
extern "C" bool BitVector32_get_Item_m2_61 (BitVector32_t2_15 * __this, int32_t ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.BitVector32::set_Item(System.Int32,System.Boolean)
extern "C" void BitVector32_set_Item_m2_62 (BitVector32_t2_15 * __this, int32_t ___mask, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::CreateMask()
extern "C" int32_t BitVector32_CreateMask_m2_63 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::CreateMask(System.Int32)
extern "C" int32_t BitVector32_CreateMask_m2_64 (Object_t * __this /* static, unused */, int32_t ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.BitVector32/Section System.Collections.Specialized.BitVector32::CreateSection(System.Int16)
extern "C" Section_t2_14  BitVector32_CreateSection_m2_65 (Object_t * __this /* static, unused */, int16_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.BitVector32/Section System.Collections.Specialized.BitVector32::CreateSection(System.Int16,System.Collections.Specialized.BitVector32/Section)
extern "C" Section_t2_14  BitVector32_CreateSection_m2_66 (Object_t * __this /* static, unused */, int16_t ___maxValue, Section_t2_14  ___previous, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.BitVector32::Equals(System.Object)
extern "C" bool BitVector32_Equals_m2_67 (BitVector32_t2_15 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::GetHashCode()
extern "C" int32_t BitVector32_GetHashCode_m2_68 (BitVector32_t2_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.BitVector32::ToString()
extern "C" String_t* BitVector32_ToString_m2_69 (BitVector32_t2_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.BitVector32::ToString(System.Collections.Specialized.BitVector32)
extern "C" String_t* BitVector32_ToString_m2_70 (Object_t * __this /* static, unused */, BitVector32_t2_15  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32::HighestSetBit(System.Int32)
extern "C" int32_t BitVector32_HighestSetBit_m2_71 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
