#pragma once

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t173;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t176;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t178;
// UnityEngine.GameObject
struct GameObject_t38;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t4;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t185;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t174;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
 void BaseInputModule__ctor_m733 (BaseInputModule_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
 EventSystem_t176 * BaseInputModule_get_eventSystem_m734 (BaseInputModule_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
 void BaseInputModule_OnEnable_m735 (BaseInputModule_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
 void BaseInputModule_OnDisable_m736 (BaseInputModule_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::Process()
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 RaycastResult_t179  BaseInputModule_FindFirstRaycast_m737 (Object_t * __this/* static, unused */, List_1_t178 * ___candidates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
 int32_t BaseInputModule_DetermineMoveDirection_m738 (Object_t * __this/* static, unused */, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
 int32_t BaseInputModule_DetermineMoveDirection_m739 (Object_t * __this/* static, unused */, float ___x, float ___y, float ___deadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
 GameObject_t38 * BaseInputModule_FindCommonRoot_m740 (Object_t * __this/* static, unused */, GameObject_t38 * ___g1, GameObject_t38 * ___g2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
 void BaseInputModule_HandlePointerExitAndEnter_m741 (BaseInputModule_t173 * __this, PointerEventData_t4 * ___currentPointerData, GameObject_t38 * ___newEnterTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
 AxisEventData_t185 * BaseInputModule_GetAxisEventData_m742 (BaseInputModule_t173 * __this, float ___x, float ___y, float ___moveDeadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
 BaseEventData_t174 * BaseInputModule_GetBaseEventData_m743 (BaseInputModule_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
 bool BaseInputModule_IsPointerOverGameObject_m744 (BaseInputModule_t173 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
 bool BaseInputModule_ShouldActivateModule_m745 (BaseInputModule_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
 void BaseInputModule_DeactivateModule_m746 (BaseInputModule_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
 void BaseInputModule_ActivateModule_m747 (BaseInputModule_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
 void BaseInputModule_UpdateModule_m748 (BaseInputModule_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
 bool BaseInputModule_IsModuleSupported_m749 (BaseInputModule_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
