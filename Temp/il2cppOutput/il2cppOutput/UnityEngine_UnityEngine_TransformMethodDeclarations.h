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

// UnityEngine.Transform
struct Transform_t5_66;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Space.h"

// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t5_55  Transform_get_position_m5_671 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m5_672 (Transform_t5_66 * __this, Vector3_t5_55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m5_673 (Transform_t5_66 * __this, Vector3_t5_55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m5_674 (Transform_t5_66 * __this, Vector3_t5_55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t5_55  Transform_get_localPosition_m5_675 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m5_676 (Transform_t5_66 * __this, Vector3_t5_55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m5_677 (Transform_t5_66 * __this, Vector3_t5_55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m5_678 (Transform_t5_66 * __this, Vector3_t5_55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" Vector3_t5_55  Transform_get_eulerAngles_m5_679 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C" Vector3_t5_55  Transform_get_right_m5_680 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t5_55  Transform_get_forward_m5_681 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t5_56  Transform_get_rotation_m5_682 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m5_683 (Transform_t5_66 * __this, Quaternion_t5_56  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m5_684 (Transform_t5_66 * __this, Quaternion_t5_56 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m5_685 (Transform_t5_66 * __this, Quaternion_t5_56 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t5_56  Transform_get_localRotation_m5_686 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m5_687 (Transform_t5_66 * __this, Quaternion_t5_56  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m5_688 (Transform_t5_66 * __this, Quaternion_t5_56 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m5_689 (Transform_t5_66 * __this, Quaternion_t5_56 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t5_55  Transform_get_localScale_m5_690 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m5_691 (Transform_t5_66 * __this, Vector3_t5_55  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m5_692 (Transform_t5_66 * __this, Vector3_t5_55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m5_693 (Transform_t5_66 * __this, Vector3_t5_55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t5_66 * Transform_get_parent_m5_694 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" void Transform_set_parent_m5_695 (Transform_t5_66 * __this, Transform_t5_66 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t5_66 * Transform_get_parentInternal_m5_696 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m5_697 (Transform_t5_66 * __this, Transform_t5_66 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" Matrix4x4_t5_57  Transform_get_localToWorldMatrix_m5_698 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_localToWorldMatrix_m5_699 (Transform_t5_66 * __this, Matrix4x4_t5_57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C" void Transform_Rotate_m5_700 (Transform_t5_66 * __this, Vector3_t5_55  ___eulerAngles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m5_701 (Transform_t5_66 * __this, Vector3_t5_55  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAroundInternal(UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAroundInternal_m5_702 (Transform_t5_66 * __this, Vector3_t5_55  ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)
extern "C" void Transform_INTERNAL_CALL_RotateAroundInternal_m5_703 (Object_t * __this /* static, unused */, Transform_t5_66 * ___self, Vector3_t5_55 * ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAround_m5_704 (Transform_t5_66 * __this, Vector3_t5_55  ___point, Vector3_t5_55  ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_55  Transform_TransformPoint_m5_705 (Transform_t5_66 * __this, Vector3_t5_55  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5_55  Transform_INTERNAL_CALL_TransformPoint_m5_706 (Object_t * __this /* static, unused */, Transform_t5_66 * ___self, Vector3_t5_55 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_55  Transform_InverseTransformPoint_m5_707 (Transform_t5_66 * __this, Vector3_t5_55  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5_55  Transform_INTERNAL_CALL_InverseTransformPoint_m5_708 (Object_t * __this /* static, unused */, Transform_t5_66 * ___self, Vector3_t5_55 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern "C" Transform_t5_66 * Transform_get_root_m5_709 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m5_710 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" Transform_t5_66 * Transform_Find_m5_711 (Transform_t5_66 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" Vector3_t5_55  Transform_get_lossyScale_m5_712 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_lossyScale_m5_713 (Transform_t5_66 * __this, Vector3_t5_55 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::FindChild(System.String)
extern "C" Transform_t5_66 * Transform_FindChild_m5_714 (Transform_t5_66 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m5_715 (Transform_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t5_66 * Transform_GetChild_m5_716 (Transform_t5_66 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
