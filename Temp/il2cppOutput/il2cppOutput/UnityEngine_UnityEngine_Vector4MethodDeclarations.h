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
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Vector4__ctor_m5_422 (Vector4_t5_59 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" int32_t Vector4_GetHashCode_m5_423 (Vector4_t5_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" bool Vector4_Equals_m5_424 (Vector4_t5_59 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
extern "C" String_t* Vector4_ToString_m5_425 (Vector4_t5_59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" float Vector4_Dot_m5_426 (Object_t * __this /* static, unused */, Vector4_t5_59  ___a, Vector4_t5_59  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Distance(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" float Vector4_Distance_m5_427 (Object_t * __this /* static, unused */, Vector4_t5_59  ___a, Vector4_t5_59  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Magnitude(UnityEngine.Vector4)
extern "C" float Vector4_Magnitude_m5_428 (Object_t * __this /* static, unused */, Vector4_t5_59  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" float Vector4_SqrMagnitude_m5_429 (Object_t * __this /* static, unused */, Vector4_t5_59  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t5_59  Vector4_op_Subtraction_m5_430 (Object_t * __this /* static, unused */, Vector4_t5_59  ___a, Vector4_t5_59  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m5_431 (Object_t * __this /* static, unused */, Vector4_t5_59  ___lhs, Vector4_t5_59  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C" Vector4_t5_59  Vector4_op_Implicit_m5_432 (Object_t * __this /* static, unused */, Vector3_t5_55  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
