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
#include "System_System_Collections_Specialized_BitVector32_Section.h"

// System.Void System.Collections.Specialized.BitVector32/Section::.ctor(System.Int16,System.Int16)
extern "C" void Section__ctor_m2_46 (Section_t2_14 * __this, int16_t ___mask, int16_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Collections.Specialized.BitVector32/Section::get_Mask()
extern "C" int16_t Section_get_Mask_m2_47 (Section_t2_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Collections.Specialized.BitVector32/Section::get_Offset()
extern "C" int16_t Section_get_Offset_m2_48 (Section_t2_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.BitVector32/Section::Equals(System.Collections.Specialized.BitVector32/Section)
extern "C" bool Section_Equals_m2_49 (Section_t2_14 * __this, Section_t2_14  ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.BitVector32/Section::Equals(System.Object)
extern "C" bool Section_Equals_m2_50 (Section_t2_14 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.BitVector32/Section::GetHashCode()
extern "C" int32_t Section_GetHashCode_m2_51 (Section_t2_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.BitVector32/Section::ToString()
extern "C" String_t* Section_ToString_m2_52 (Section_t2_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.BitVector32/Section::ToString(System.Collections.Specialized.BitVector32/Section)
extern "C" String_t* Section_ToString_m2_53 (Object_t * __this /* static, unused */, Section_t2_14  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.BitVector32/Section::op_Equality(System.Collections.Specialized.BitVector32/Section,System.Collections.Specialized.BitVector32/Section)
extern "C" bool Section_op_Equality_m2_54 (Object_t * __this /* static, unused */, Section_t2_14  ___v1, Section_t2_14  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.BitVector32/Section::op_Inequality(System.Collections.Specialized.BitVector32/Section,System.Collections.Specialized.BitVector32/Section)
extern "C" bool Section_op_Inequality_m2_55 (Object_t * __this /* static, unused */, Section_t2_14  ___v1, Section_t2_14  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
