#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t196;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_t213;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t169;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_17MethodDeclarations.h"
#define EventFunction_1__ctor_m1808(__this, ___object, ___method, method) (void)EventFunction_1__ctor_m16907_gshared((EventFunction_1_t4797 *)__this, (Object_t *)___object, (IntPtr_t31)___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m17871(__this, ___handler, ___eventData, method) (void)EventFunction_1_Invoke_m16909_gshared((EventFunction_1_t4797 *)__this, (Object_t *)___handler, (BaseEventData_t169 *)___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m17872(__this, ___handler, ___eventData, ___callback, ___object, method) (Object_t *)EventFunction_1_BeginInvoke_m16911_gshared((EventFunction_1_t4797 *)__this, (Object_t *)___handler, (BaseEventData_t169 *)___eventData, (AsyncCallback_t184 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m17873(__this, ___result, method) (void)EventFunction_1_EndInvoke_m16913_gshared((EventFunction_1_t4797 *)__this, (Object_t *)___result, method)
