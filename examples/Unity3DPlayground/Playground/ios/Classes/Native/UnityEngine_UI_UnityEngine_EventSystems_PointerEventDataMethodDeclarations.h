#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t4;
// UnityEngine.GameObject
struct GameObject_t32;
// UnityEngine.Camera
struct Camera_t42;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t171;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void PointerEventData__ctor_m681 (PointerEventData_t4 * __this, EventSystem_t171 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
 GameObject_t32 * PointerEventData_get_pointerEnter_m682 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
 void PointerEventData_set_pointerEnter_m683 (PointerEventData_t4 * __this, GameObject_t32 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
 GameObject_t32 * PointerEventData_get_lastPress_m684 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
 void PointerEventData_set_lastPress_m685 (PointerEventData_t4 * __this, GameObject_t32 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
 GameObject_t32 * PointerEventData_get_rawPointerPress_m686 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
 void PointerEventData_set_rawPointerPress_m687 (PointerEventData_t4 * __this, GameObject_t32 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
 GameObject_t32 * PointerEventData_get_pointerDrag_m688 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
 void PointerEventData_set_pointerDrag_m689 (PointerEventData_t4 * __this, GameObject_t32 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
 RaycastResult_t174  PointerEventData_get_pointerCurrentRaycast_m690 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
 void PointerEventData_set_pointerCurrentRaycast_m691 (PointerEventData_t4 * __this, RaycastResult_t174  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
 RaycastResult_t174  PointerEventData_get_pointerPressRaycast_m692 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
 void PointerEventData_set_pointerPressRaycast_m693 (PointerEventData_t4 * __this, RaycastResult_t174  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
 bool PointerEventData_get_eligibleForClick_m694 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
 void PointerEventData_set_eligibleForClick_m695 (PointerEventData_t4 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
 int32_t PointerEventData_get_pointerId_m365 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
 void PointerEventData_set_pointerId_m696 (PointerEventData_t4 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
 Vector2_t25  PointerEventData_get_position_m336 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
 void PointerEventData_set_position_m697 (PointerEventData_t4 * __this, Vector2_t25  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
 Vector2_t25  PointerEventData_get_delta_m698 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
 void PointerEventData_set_delta_m699 (PointerEventData_t4 * __this, Vector2_t25  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
 Vector2_t25  PointerEventData_get_pressPosition_m700 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
 void PointerEventData_set_pressPosition_m701 (PointerEventData_t4 * __this, Vector2_t25  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
 Vector3_t10  PointerEventData_get_worldPosition_m702 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
 void PointerEventData_set_worldPosition_m703 (PointerEventData_t4 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
 Vector3_t10  PointerEventData_get_worldNormal_m704 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
 void PointerEventData_set_worldNormal_m705 (PointerEventData_t4 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
 float PointerEventData_get_clickTime_m706 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
 void PointerEventData_set_clickTime_m707 (PointerEventData_t4 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
 int32_t PointerEventData_get_clickCount_m708 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
 void PointerEventData_set_clickCount_m709 (PointerEventData_t4 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
 Vector2_t25  PointerEventData_get_scrollDelta_m710 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
 void PointerEventData_set_scrollDelta_m711 (PointerEventData_t4 * __this, Vector2_t25  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
 bool PointerEventData_get_useDragThreshold_m712 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
 void PointerEventData_set_useDragThreshold_m713 (PointerEventData_t4 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
 bool PointerEventData_get_dragging_m714 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
 void PointerEventData_set_dragging_m715 (PointerEventData_t4 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
 int32_t PointerEventData_get_button_m716 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
 void PointerEventData_set_button_m717 (PointerEventData_t4 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
 bool PointerEventData_IsPointerMoving_m718 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
 bool PointerEventData_IsScrolling_m719 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
 Camera_t42 * PointerEventData_get_enterEventCamera_m720 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
 Camera_t42 * PointerEventData_get_pressEventCamera_m721 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
 GameObject_t32 * PointerEventData_get_pointerPress_m722 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
 void PointerEventData_set_pointerPress_m723 (PointerEventData_t4 * __this, GameObject_t32 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
 String_t* PointerEventData_ToString_m724 (PointerEventData_t4 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
