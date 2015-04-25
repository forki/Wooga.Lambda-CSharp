#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t169;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t168;
// UnityEngine.GameObject
struct GameObject_t32;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t171;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void BaseEventData__ctor_m674 (BaseEventData_t169 * __this, EventSystem_t171 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
 void BaseEventData_Reset_m675 (BaseEventData_t169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
 void BaseEventData_Use_m676 (BaseEventData_t169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
 bool BaseEventData_get_used_m677 (BaseEventData_t169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
 BaseInputModule_t168 * BaseEventData_get_currentInputModule_m678 (BaseEventData_t169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
 GameObject_t32 * BaseEventData_get_selectedObject_m679 (BaseEventData_t169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
 void BaseEventData_set_selectedObject_m680 (BaseEventData_t169 * __this, GameObject_t32 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
