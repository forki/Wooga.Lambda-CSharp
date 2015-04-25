#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t235;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t4;
// System.String
struct String_t;

// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
 void TouchInputModule__ctor_m798 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
 bool TouchInputModule_get_allowActivationOnStandalone_m799 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
 void TouchInputModule_set_allowActivationOnStandalone_m800 (TouchInputModule_t235 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
 void TouchInputModule_UpdateModule_m801 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
 bool TouchInputModule_IsModuleSupported_m802 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
 bool TouchInputModule_ShouldActivateModule_m803 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
 bool TouchInputModule_UseFakeInput_m804 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
 void TouchInputModule_Process_m805 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
 void TouchInputModule_FakeTouches_m806 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
 void TouchInputModule_ProcessTouchEvents_m807 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
 void TouchInputModule_ProcessTouchPress_m808 (TouchInputModule_t235 * __this, PointerEventData_t4 * ___pointerEvent, bool ___pressed, bool ___released, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
 void TouchInputModule_DeactivateModule_m809 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
 String_t* TouchInputModule_ToString_m810 (TouchInputModule_t235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
