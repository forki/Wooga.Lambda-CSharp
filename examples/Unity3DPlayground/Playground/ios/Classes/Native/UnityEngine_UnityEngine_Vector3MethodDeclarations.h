#pragma once

// UnityEngine.Vector3
struct Vector3_t10;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
 void Vector3__ctor_m343 (Vector3_t10 * __this, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
 void Vector3__ctor_m532 (Vector3_t10 * __this, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t10  Vector3_Lerp_m555 (Object_t * __this/* static, unused */, Vector3_t10  ___from, Vector3_t10  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
 Vector3_t10  Vector3_SmoothDamp_m538 (Object_t * __this/* static, unused */, Vector3_t10  ___current, Vector3_t10  ___target, Vector3_t10 * ___currentVelocity, float ___smoothTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
 Vector3_t10  Vector3_SmoothDamp_m3418 (Object_t * __this/* static, unused */, Vector3_t10  ___current, Vector3_t10  ___target, Vector3_t10 * ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
 float Vector3_get_Item_m2262 (Vector3_t10 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
 void Vector3_set_Item_m2263 (Vector3_t10 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
 int32_t Vector3_GetHashCode_m3419 (Vector3_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
 bool Vector3_Equals_m3420 (Vector3_t10 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
 Vector3_t10  Vector3_Normalize_m3421 (Object_t * __this/* static, unused */, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
 Vector3_t10  Vector3_get_normalized_m369 (Vector3_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
 String_t* Vector3_ToString_m3422 (Vector3_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString(System.String)
 String_t* Vector3_ToString_m3423 (Vector3_t10 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
 float Vector3_Dot_m563 (Object_t * __this/* static, unused */, Vector3_t10  ___lhs, Vector3_t10  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
 float Vector3_Distance_m1916 (Object_t * __this/* static, unused */, Vector3_t10  ___a, Vector3_t10  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
 Vector3_t10  Vector3_ClampMagnitude_m3424 (Object_t * __this/* static, unused */, Vector3_t10  ___vector, float ___maxLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
 float Vector3_Magnitude_m3425 (Object_t * __this/* static, unused */, Vector3_t10  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
 float Vector3_get_magnitude_m557 (Vector3_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
 float Vector3_SqrMagnitude_m3426 (Object_t * __this/* static, unused */, Vector3_t10  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
 float Vector3_get_sqrMagnitude_m2296 (Vector3_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t10  Vector3_Min_m2272 (Object_t * __this/* static, unused */, Vector3_t10  ___lhs, Vector3_t10  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t10  Vector3_Max_m2273 (Object_t * __this/* static, unused */, Vector3_t10  ___lhs, Vector3_t10  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
 Vector3_t10  Vector3_get_zero_m340 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
 Vector3_t10  Vector3_get_forward_m543 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
 Vector3_t10  Vector3_get_back_m3427 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
 Vector3_t10  Vector3_get_up_m491 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
 Vector3_t10  Vector3_get_down_m2300 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
 Vector3_t10  Vector3_get_left_m2298 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
 Vector3_t10  Vector3_get_right_m2299 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t10  Vector3_op_Addition_m448 (Object_t * __this/* static, unused */, Vector3_t10  ___a, Vector3_t10  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t10  Vector3_op_Subtraction_m338 (Object_t * __this/* static, unused */, Vector3_t10  ___a, Vector3_t10  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
 Vector3_t10  Vector3_op_UnaryNegation_m492 (Object_t * __this/* static, unused */, Vector3_t10  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
 Vector3_t10  Vector3_op_Multiply_m445 (Object_t * __this/* static, unused */, Vector3_t10  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
 Vector3_t10  Vector3_op_Multiply_m556 (Object_t * __this/* static, unused */, float ___d, Vector3_t10  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
 Vector3_t10  Vector3_op_Division_m339 (Object_t * __this/* static, unused */, Vector3_t10  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
 bool Vector3_op_Equality_m3428 (Object_t * __this/* static, unused */, Vector3_t10  ___lhs, Vector3_t10  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
 bool Vector3_op_Inequality_m364 (Object_t * __this/* static, unused */, Vector3_t10  ___lhs, Vector3_t10  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
