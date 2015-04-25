#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t250;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t248;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t4;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t169;
// System.Collections.IEnumerator
struct IEnumerator_t51;

// System.Void UnityEngine.UI.Button::.ctor()
 void Button__ctor_m859 (Button_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
 ButtonClickedEvent_t248 * Button_get_onClick_m860 (Button_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
 void Button_set_onClick_m861 (Button_t250 * __this, ButtonClickedEvent_t248 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
 void Button_Press_m862 (Button_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
 void Button_OnPointerClick_m863 (Button_t250 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
 void Button_OnSubmit_m864 (Button_t250 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
 Object_t * Button_OnFinishSubmit_m865 (Button_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
