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
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
extern "C" void Interval__ctor_m2_6051 (Interval_t2_738 * __this, int32_t ___low, int32_t ___high, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
extern "C" Interval_t2_738  Interval_get_Empty_m2_6052 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Entire()
extern "C" Interval_t2_738  Interval_get_Entire_m2_6053 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
extern "C" bool Interval_get_IsDiscontiguous_m2_6054 (Interval_t2_738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
extern "C" bool Interval_get_IsSingleton_m2_6055 (Interval_t2_738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsRange()
extern "C" bool Interval_get_IsRange_m2_6056 (Interval_t2_738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
extern "C" bool Interval_get_IsEmpty_m2_6057 (Interval_t2_738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
extern "C" int32_t Interval_get_Size_m2_6058 (Interval_t2_738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_IsDisjoint_m2_6059 (Interval_t2_738 * __this, Interval_t2_738  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_IsAdjacent_m2_6060 (Interval_t2_738 * __this, Interval_t2_738  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_Contains_m2_6061 (Interval_t2_738 * __this, Interval_t2_738  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
extern "C" bool Interval_Contains_m2_6062 (Interval_t2_738 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
extern "C" bool Interval_Intersects_m2_6063 (Interval_t2_738 * __this, Interval_t2_738  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
extern "C" void Interval_Merge_m2_6064 (Interval_t2_738 * __this, Interval_t2_738  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interval::Intersect(System.Text.RegularExpressions.Interval)
extern "C" void Interval_Intersect_m2_6065 (Interval_t2_738 * __this, Interval_t2_738  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
extern "C" int32_t Interval_CompareTo_m2_6066 (Interval_t2_738 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Interval::ToString()
extern "C" String_t* Interval_ToString_m2_6067 (Interval_t2_738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Interval_t2_738_marshal(const Interval_t2_738& unmarshaled, Interval_t2_738_marshaled& marshaled);
extern "C" void Interval_t2_738_marshal_back(const Interval_t2_738_marshaled& marshaled, Interval_t2_738& unmarshaled);
extern "C" void Interval_t2_738_marshal_cleanup(Interval_t2_738_marshaled& marshaled);
