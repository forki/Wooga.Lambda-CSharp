#pragma once

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t242;
// UnityEngine.Camera
struct Camera_t48;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t178;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
 void PhysicsRaycaster__ctor_m827 (PhysicsRaycaster_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
 Camera_t48 * PhysicsRaycaster_get_eventCamera_m828 (PhysicsRaycaster_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
 int32_t PhysicsRaycaster_get_depth_m829 (PhysicsRaycaster_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
 int32_t PhysicsRaycaster_get_finalEventMask_m830 (PhysicsRaycaster_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
 LayerMask_t244  PhysicsRaycaster_get_eventMask_m831 (PhysicsRaycaster_t242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
 void PhysicsRaycaster_set_eventMask_m832 (PhysicsRaycaster_t242 * __this, LayerMask_t244  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void PhysicsRaycaster_Raycast_m833 (PhysicsRaycaster_t242 * __this, PointerEventData_t4 * ___eventData, List_1_t178 * ___resultAppendList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::<Raycast>m__1(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
 int32_t PhysicsRaycaster_U3CRaycastU3Em__1_m834 (Object_t * __this/* static, unused */, RaycastHit_t156  ___r1, RaycastHit_t156  ___r2, MethodInfo* method) IL2CPP_METHOD_ATTR;
