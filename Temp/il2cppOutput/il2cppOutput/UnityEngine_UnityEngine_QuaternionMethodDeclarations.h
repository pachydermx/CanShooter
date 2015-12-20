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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m5_356 (Quaternion_t5_58 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t5_58  Quaternion_get_identity_m5_357 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m5_358 (Object_t * __this /* static, unused */, Quaternion_t5_58  ___a, Quaternion_t5_58  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" Quaternion_t5_58  Quaternion_AngleAxis_m5_359 (Object_t * __this /* static, unused */, float ___angle, Vector3_t5_57  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t5_58  Quaternion_INTERNAL_CALL_AngleAxis_m5_360 (Object_t * __this /* static, unused */, float ___angle, Vector3_t5_57 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
extern "C" void Quaternion_ToAngleAxis_m5_361 (Quaternion_t5_58 * __this, float* ___angle, Vector3_t5_57 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t5_58  Quaternion_LookRotation_m5_362 (Object_t * __this /* static, unused */, Vector3_t5_57  ___forward, Vector3_t5_57  ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t5_58  Quaternion_INTERNAL_CALL_LookRotation_m5_363 (Object_t * __this /* static, unused */, Vector3_t5_57 * ___forward, Vector3_t5_57 * ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t5_58  Quaternion_Inverse_m5_364 (Object_t * __this /* static, unused */, Quaternion_t5_58  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t5_58  Quaternion_INTERNAL_CALL_Inverse_m5_365 (Object_t * __this /* static, unused */, Quaternion_t5_58 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m5_366 (Quaternion_t5_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t5_57  Quaternion_get_eulerAngles_m5_367 (Quaternion_t5_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t5_58  Quaternion_Euler_m5_368 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t5_57  Quaternion_Internal_ToEulerRad_m5_369 (Object_t * __this /* static, unused */, Quaternion_t5_58  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t5_57  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5_370 (Object_t * __this /* static, unused */, Quaternion_t5_58 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t5_58  Quaternion_Internal_FromEulerRad_m5_371 (Object_t * __this /* static, unused */, Vector3_t5_57  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t5_58  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5_372 (Object_t * __this /* static, unused */, Vector3_t5_57 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
extern "C" void Quaternion_Internal_ToAxisAngleRad_m5_373 (Object_t * __this /* static, unused */, Quaternion_t5_58  ___q, Vector3_t5_57 * ___axis, float* ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToAxisAngleRad(UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single&)
extern "C" void Quaternion_INTERNAL_CALL_Internal_ToAxisAngleRad_m5_374 (Object_t * __this /* static, unused */, Quaternion_t5_58 * ___q, Vector3_t5_57 * ___axis, float* ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m5_375 (Quaternion_t5_58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m5_376 (Quaternion_t5_58 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t5_58  Quaternion_op_Multiply_m5_377 (Object_t * __this /* static, unused */, Quaternion_t5_58  ___lhs, Quaternion_t5_58  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t5_57  Quaternion_op_Multiply_m5_378 (Object_t * __this /* static, unused */, Quaternion_t5_58  ___rotation, Vector3_t5_57  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m5_379 (Object_t * __this /* static, unused */, Quaternion_t5_58  ___lhs, Quaternion_t5_58  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
