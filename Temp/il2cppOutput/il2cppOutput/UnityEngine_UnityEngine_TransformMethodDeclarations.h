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
struct Transform_t5_72;
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
extern "C" Vector3_t5_57  Transform_get_position_m5_853 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m5_854 (Transform_t5_72 * __this, Vector3_t5_57  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m5_855 (Transform_t5_72 * __this, Vector3_t5_57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m5_856 (Transform_t5_72 * __this, Vector3_t5_57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t5_57  Transform_get_localPosition_m5_857 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m5_858 (Transform_t5_72 * __this, Vector3_t5_57  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m5_859 (Transform_t5_72 * __this, Vector3_t5_57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m5_860 (Transform_t5_72 * __this, Vector3_t5_57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" Vector3_t5_57  Transform_get_eulerAngles_m5_861 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t5_57  Transform_get_forward_m5_862 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t5_58  Transform_get_rotation_m5_863 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m5_864 (Transform_t5_72 * __this, Quaternion_t5_58  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m5_865 (Transform_t5_72 * __this, Quaternion_t5_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m5_866 (Transform_t5_72 * __this, Quaternion_t5_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t5_58  Transform_get_localRotation_m5_867 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m5_868 (Transform_t5_72 * __this, Quaternion_t5_58  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m5_869 (Transform_t5_72 * __this, Quaternion_t5_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m5_870 (Transform_t5_72 * __this, Quaternion_t5_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t5_57  Transform_get_localScale_m5_871 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m5_872 (Transform_t5_72 * __this, Vector3_t5_57  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m5_873 (Transform_t5_72 * __this, Vector3_t5_57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m5_874 (Transform_t5_72 * __this, Vector3_t5_57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t5_72 * Transform_get_parent_m5_875 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" void Transform_set_parent_m5_876 (Transform_t5_72 * __this, Transform_t5_72 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t5_72 * Transform_get_parentInternal_m5_877 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m5_878 (Transform_t5_72 * __this, Transform_t5_72 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m5_879 (Transform_t5_72 * __this, Transform_t5_72 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m5_880 (Transform_t5_72 * __this, Transform_t5_72 * ___parent, bool ___worldPositionStays, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t5_59  Transform_get_worldToLocalMatrix_m5_881 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m5_882 (Transform_t5_72 * __this, Matrix4x4_t5_59 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" Matrix4x4_t5_59  Transform_get_localToWorldMatrix_m5_883 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_localToWorldMatrix_m5_884 (Transform_t5_72 * __this, Matrix4x4_t5_59 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C" void Transform_Rotate_m5_885 (Transform_t5_72 * __this, Vector3_t5_57  ___eulerAngles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m5_886 (Transform_t5_72 * __this, Vector3_t5_57  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAroundInternal(UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAroundInternal_m5_887 (Transform_t5_72 * __this, Vector3_t5_57  ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)
extern "C" void Transform_INTERNAL_CALL_RotateAroundInternal_m5_888 (Object_t * __this /* static, unused */, Transform_t5_72 * ___self, Vector3_t5_57 * ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAround_m5_889 (Transform_t5_72 * __this, Vector3_t5_57  ___point, Vector3_t5_57  ___axis, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_57  Transform_TransformPoint_m5_890 (Transform_t5_72 * __this, Vector3_t5_57  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5_57  Transform_INTERNAL_CALL_TransformPoint_m5_891 (Object_t * __this /* static, unused */, Transform_t5_72 * ___self, Vector3_t5_57 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_57  Transform_InverseTransformPoint_m5_892 (Transform_t5_72 * __this, Vector3_t5_57  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5_57  Transform_INTERNAL_CALL_InverseTransformPoint_m5_893 (Object_t * __this /* static, unused */, Transform_t5_72 * ___self, Vector3_t5_57 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern "C" Transform_t5_72 * Transform_get_root_m5_894 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m5_895 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m5_896 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" Transform_t5_72 * Transform_Find_m5_897 (Transform_t5_72 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" Vector3_t5_57  Transform_get_lossyScale_m5_898 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_lossyScale_m5_899 (Transform_t5_72 * __this, Vector3_t5_57 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C" bool Transform_IsChildOf_m5_900 (Transform_t5_72 * __this, Transform_t5_72 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::FindChild(System.String)
extern "C" Transform_t5_72 * Transform_FindChild_m5_901 (Transform_t5_72 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m5_902 (Transform_t5_72 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t5_72 * Transform_GetChild_m5_903 (Transform_t5_72 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
