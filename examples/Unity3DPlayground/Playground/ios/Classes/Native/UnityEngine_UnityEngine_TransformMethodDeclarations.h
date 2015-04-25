#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform
struct Transform_t43;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"

// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_position_m5786 (Transform_t43 * __this, Vector3_t10 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_position_m5787 (Transform_t43 * __this, Vector3_t10 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
 Vector3_t10  Transform_get_position_m332 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
 void Transform_set_position_m339 (Transform_t43 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localPosition_m5788 (Transform_t43 * __this, Vector3_t10 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localPosition_m5789 (Transform_t43 * __this, Vector3_t10 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
 Vector3_t10  Transform_get_localPosition_m423 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
 void Transform_set_localPosition_m2202 (Transform_t43 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
 Vector3_t10  Transform_get_eulerAngles_m509 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
 Vector3_t10  Transform_get_forward_m417 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_rotation_m5790 (Transform_t43 * __this, Quaternion_t68 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_set_rotation_m5791 (Transform_t43 * __this, Quaternion_t68 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
 Quaternion_t68  Transform_get_rotation_m386 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
 void Transform_set_rotation_m483 (Transform_t43 * __this, Quaternion_t68  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_localRotation_m5792 (Transform_t43 * __this, Quaternion_t68 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_set_localRotation_m5793 (Transform_t43 * __this, Quaternion_t68 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
 Quaternion_t68  Transform_get_localRotation_m502 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
 void Transform_set_localRotation_m503 (Transform_t43 * __this, Quaternion_t68  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localScale_m5794 (Transform_t43 * __this, Vector3_t10 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localScale_m5795 (Transform_t43 * __this, Vector3_t10 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
 Vector3_t10  Transform_get_localScale_m2197 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
 void Transform_set_localScale_m2203 (Transform_t43 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
 Transform_t43 * Transform_get_parent_m1821 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
 void Transform_set_parent_m482 (Transform_t43 * __this, Transform_t43 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
 Transform_t43 * Transform_get_parentInternal_m5796 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
 void Transform_set_parentInternal_m5797 (Transform_t43 * __this, Transform_t43 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
 void Transform_SetParent_m2187 (Transform_t43 * __this, Transform_t43 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
 void Transform_SetParent_m5798 (Transform_t43 * __this, Transform_t43 * ___parent, bool ___worldPositionStays, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
 void Transform_INTERNAL_get_worldToLocalMatrix_m5799 (Transform_t43 * __this, Matrix4x4_t473 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
 Matrix4x4_t473  Transform_get_worldToLocalMatrix_m2263 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
 void Transform_Translate_m414 (Transform_t43 * __this, Vector3_t10  ___translation, int32_t ___relativeTo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
 void Transform_Rotate_m415 (Transform_t43 * __this, Vector3_t10  ___eulerAngles, int32_t ___relativeTo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
 void Transform_LookAt_m513 (Transform_t43 * __this, Transform_t43 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
 void Transform_LookAt_m5800 (Transform_t43 * __this, Transform_t43 * ___target, Vector3_t10  ___worldUp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
 void Transform_LookAt_m5801 (Transform_t43 * __this, Vector3_t10  ___worldPosition, Vector3_t10  ___worldUp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
 void Transform_LookAt_m420 (Transform_t43 * __this, Vector3_t10  ___worldPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
 void Transform_INTERNAL_CALL_LookAt_m5802 (Object_t * __this/* static, unused */, Transform_t43 * ___self, Vector3_t10 * ___worldPosition, Vector3_t10 * ___worldUp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
 Vector3_t10  Transform_TransformDirection_m5803 (Transform_t43 * __this, Vector3_t10  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t10  Transform_INTERNAL_CALL_TransformDirection_m5804 (Object_t * __this/* static, unused */, Transform_t43 * ___self, Vector3_t10 * ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
 Vector3_t10  Transform_TransformPoint_m2288 (Transform_t43 * __this, Vector3_t10  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t10  Transform_INTERNAL_CALL_TransformPoint_m5805 (Object_t * __this/* static, unused */, Transform_t43 * ___self, Vector3_t10 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
 Vector3_t10  Transform_InverseTransformPoint_m2155 (Transform_t43 * __this, Vector3_t10  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t10  Transform_INTERNAL_CALL_InverseTransformPoint_m5806 (Object_t * __this/* static, unused */, Transform_t43 * ___self, Vector3_t10 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
 int32_t Transform_get_childCount_m2392 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::DetachChildren()
 void Transform_DetachChildren_m518 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
 void Transform_SetAsFirstSibling_m2188 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
 Object_t * Transform_GetEnumerator_m340 (Transform_t43 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
 Transform_t43 * Transform_GetChild_m2390 (Transform_t43 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
