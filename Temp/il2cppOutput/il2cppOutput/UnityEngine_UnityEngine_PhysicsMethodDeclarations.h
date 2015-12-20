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

// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t5_290;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Raycast_m5_953 (Object_t * __this /* static, unused */, Vector3_t5_57  ___origin, Vector3_t5_57  ___direction, RaycastHit_t5_119 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m5_954 (Object_t * __this /* static, unused */, Ray_t5_62  ___ray, RaycastHit_t5_119 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Raycast_m5_955 (Object_t * __this /* static, unused */, Ray_t5_62  ___ray, RaycastHit_t5_119 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t5_290* Physics_RaycastAll_m5_956 (Object_t * __this /* static, unused */, Ray_t5_62  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t5_290* Physics_RaycastAll_m5_957 (Object_t * __this /* static, unused */, Ray_t5_62  ___ray, float ___maxDistance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t5_290* Physics_RaycastAll_m5_958 (Object_t * __this /* static, unused */, Vector3_t5_57  ___origin, Vector3_t5_57  ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" RaycastHitU5BU5D_t5_290* Physics_INTERNAL_CALL_RaycastAll_m5_959 (Object_t * __this /* static, unused */, Vector3_t5_57 * ___origin, Vector3_t5_57 * ___direction, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_Internal_Raycast_m5_960 (Object_t * __this /* static, unused */, Vector3_t5_57  ___origin, Vector3_t5_57  ___direction, RaycastHit_t5_119 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m5_961 (Object_t * __this /* static, unused */, Vector3_t5_57 * ___origin, Vector3_t5_57 * ___direction, RaycastHit_t5_119 * ___hitInfo, float ___maxDistance, int32_t ___layermask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
