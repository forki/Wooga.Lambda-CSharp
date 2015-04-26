#pragma once

// UnityEngine.Physics
struct Physics_t1196;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t434;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Internal_Raycast_m3711 (Object_t * __this/* static, unused */, Vector3_t10  ___origin, Vector3_t10  ___direction, RaycastHit_t156 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_INTERNAL_CALL_Internal_Raycast_m3712 (Object_t * __this/* static, unused */, Vector3_t10 * ___origin, Vector3_t10 * ___direction, RaycastHit_t156 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
 bool Physics_Raycast_m450 (Object_t * __this/* static, unused */, Vector3_t10  ___origin, Vector3_t10  ___direction, RaycastHit_t156 * ___hitInfo, float ___maxDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Raycast_m475 (Object_t * __this/* static, unused */, Vector3_t10  ___origin, Vector3_t10  ___direction, RaycastHit_t156 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
 bool Physics_Raycast_m494 (Object_t * __this/* static, unused */, Ray_t55  ___ray, RaycastHit_t156 * ___hitInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
 bool Physics_Raycast_m2042 (Object_t * __this/* static, unused */, Ray_t55  ___ray, RaycastHit_t156 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
 RaycastHitU5BU5D_t434* Physics_RaycastAll_m1923 (Object_t * __this/* static, unused */, Ray_t55  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
 RaycastHitU5BU5D_t434* Physics_RaycastAll_m3713 (Object_t * __this/* static, unused */, Vector3_t10  ___origin, Vector3_t10  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
 RaycastHitU5BU5D_t434* Physics_INTERNAL_CALL_RaycastAll_m3714 (Object_t * __this/* static, unused */, Vector3_t10 * ___origin, Vector3_t10 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method) IL2CPP_METHOD_ATTR;
