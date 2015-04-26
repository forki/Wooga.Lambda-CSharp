#pragma once

// UnityEngine.Bounds
struct Bounds_t337;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Bounds__ctor_m2265 (Bounds_t337 * __this, Vector3_t10  ___center, Vector3_t10  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
 int32_t Bounds_GetHashCode_m3486 (Bounds_t337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
 bool Bounds_Equals_m3487 (Bounds_t337 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
 Vector3_t10  Bounds_get_center_m2266 (Bounds_t337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
 void Bounds_set_center_m2268 (Bounds_t337 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
 Vector3_t10  Bounds_get_size_m2255 (Bounds_t337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
 void Bounds_set_size_m2267 (Bounds_t337 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
 Vector3_t10  Bounds_get_extents_m3488 (Bounds_t337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
 void Bounds_set_extents_m3489 (Bounds_t337 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
 Vector3_t10  Bounds_get_min_m2256 (Bounds_t337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
 void Bounds_set_min_m3490 (Bounds_t337 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
 Vector3_t10  Bounds_get_max_m2275 (Bounds_t337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
 void Bounds_set_max_m3491 (Bounds_t337 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
 void Bounds_SetMinMax_m3492 (Bounds_t337 * __this, Vector3_t10  ___min, Vector3_t10  ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
 void Bounds_Encapsulate_m2274 (Bounds_t337 * __this, Vector3_t10  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
 void Bounds_Encapsulate_m3493 (Bounds_t337 * __this, Bounds_t337  ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(System.Single)
 void Bounds_Expand_m3494 (Bounds_t337 * __this, float ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
 void Bounds_Expand_m3495 (Bounds_t337 * __this, Vector3_t10  ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
 bool Bounds_Intersects_m3496 (Bounds_t337 * __this, Bounds_t337  ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
 bool Bounds_Internal_Contains_m3497 (Object_t * __this/* static, unused */, Bounds_t337  ___m, Vector3_t10  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
 bool Bounds_INTERNAL_CALL_Internal_Contains_m3498 (Object_t * __this/* static, unused */, Bounds_t337 * ___m, Vector3_t10 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
 bool Bounds_Contains_m3499 (Bounds_t337 * __this, Vector3_t10  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
 float Bounds_Internal_SqrDistance_m3500 (Object_t * __this/* static, unused */, Bounds_t337  ___m, Vector3_t10  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
 float Bounds_INTERNAL_CALL_Internal_SqrDistance_m3501 (Object_t * __this/* static, unused */, Bounds_t337 * ___m, Vector3_t10 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
 float Bounds_SqrDistance_m3502 (Bounds_t337 * __this, Vector3_t10  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
 bool Bounds_Internal_IntersectRay_m3503 (Object_t * __this/* static, unused */, Ray_t55 * ___ray, Bounds_t337 * ___bounds, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
 bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m3504 (Object_t * __this/* static, unused */, Ray_t55 * ___ray, Bounds_t337 * ___bounds, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
 bool Bounds_IntersectRay_m3505 (Bounds_t337 * __this, Ray_t55  ___ray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
 bool Bounds_IntersectRay_m3506 (Bounds_t337 * __this, Ray_t55  ___ray, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
 Vector3_t10  Bounds_Internal_GetClosestPoint_m3507 (Object_t * __this/* static, unused */, Bounds_t337 * ___bounds, Vector3_t10 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
 Vector3_t10  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m3508 (Object_t * __this/* static, unused */, Bounds_t337 * ___bounds, Vector3_t10 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
 Vector3_t10  Bounds_ClosestPoint_m3509 (Bounds_t337 * __this, Vector3_t10  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
 String_t* Bounds_ToString_m3510 (Bounds_t337 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString(System.String)
 String_t* Bounds_ToString_m3511 (Bounds_t337 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
 bool Bounds_op_Equality_m3512 (Object_t * __this/* static, unused */, Bounds_t337  ___lhs, Bounds_t337  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
 bool Bounds_op_Inequality_m2260 (Object_t * __this/* static, unused */, Bounds_t337  ___lhs, Bounds_t337  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
