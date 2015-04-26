#pragma once

// UnityEngine.Event
struct Event_t320;
struct Event_t320_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Event::.ctor()
 void Event__ctor_m2152 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
 void Event_Init_m3394 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
 void Event_Finalize_m3395 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
 void Event_Cleanup_m3396 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
 int32_t Event_get_rawType_m2175 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
 int32_t Event_get_type_m3397 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
 Vector2_t25  Event_get_mousePosition_m3398 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
 void Event_Internal_GetMousePosition_m3399 (Event_t320 * __this, Vector2_t25 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
 int32_t Event_get_modifiers_m2171 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
 uint16_t Event_get_character_m2173 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
 String_t* Event_get_commandName_m3400 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
 int32_t Event_get_keyCode_m2172 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
 Event_t320 * Event_get_current_m3401 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
 void Event_Internal_SetNativeEvent_m3402 (Object_t * __this/* static, unused */, IntPtr_t37 ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
 void Event_Internal_MakeMasterEventCurrent_m3403 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
 bool Event_PopEvent_m2176 (Object_t * __this/* static, unused */, Event_t320 * ___outEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
 bool Event_get_isKey_m3404 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
 bool Event_get_isMouse_m3405 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
 int32_t Event_GetHashCode_m3406 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
 bool Event_Equals_m3407 (Event_t320 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
 String_t* Event_ToString_m3408 (Event_t320 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Event_t320_marshal(const Event_t320& unmarshaled, Event_t320_marshaled& marshaled);
void Event_t320_marshal_back(const Event_t320_marshaled& marshaled, Event_t320& unmarshaled);
void Event_t320_marshal_cleanup(Event_t320_marshaled& marshaled);
