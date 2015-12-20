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

// UnityEngine.Rigidbody
struct Rigidbody_t5_110;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_ForceMode.h"

// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" void Rigidbody_AddForce_m5_949 (Rigidbody_t5_110 * __this, Vector3_t5_57  ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m5_950 (Object_t * __this /* static, unused */, Rigidbody_t5_110 * ___self, Vector3_t5_57 * ___force, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddExplosionForce(System.Single,UnityEngine.Vector3,System.Single)
extern "C" void Rigidbody_AddExplosionForce_m5_951 (Rigidbody_t5_110 * __this, float ___explosionForce, Vector3_t5_57  ___explosionPosition, float ___explosionRadius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddExplosionForce(UnityEngine.Rigidbody,System.Single,UnityEngine.Vector3&,System.Single,System.Single,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddExplosionForce_m5_952 (Object_t * __this /* static, unused */, Rigidbody_t5_110 * ___self, float ___explosionForce, Vector3_t5_57 * ___explosionPosition, float ___explosionRadius, float ___upwardsModifier, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
