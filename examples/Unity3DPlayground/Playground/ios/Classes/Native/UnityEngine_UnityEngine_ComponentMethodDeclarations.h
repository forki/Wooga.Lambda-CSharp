#pragma once

// UnityEngine.Component
struct Component_t124;
// UnityEngine.Transform
struct Transform_t49;
// UnityEngine.GameObject
struct GameObject_t38;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t383;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.Component::.ctor()
 void Component__ctor_m3657 (Component_t124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
 Transform_t49 * Component_get_transform_m336 (Component_t124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
 GameObject_t38 * Component_get_gameObject_m347 (Component_t124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
 Component_t124 * Component_GetComponent_m2392 (Component_t124 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
 void Component_GetComponentFastPath_m3658 (Component_t124 * __this, Type_t * ___type, IntPtr_t37 ___oneFurtherThanResultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
 void Component_GetComponentsForListInternal_m3659 (Component_t124 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
 void Component_GetComponents_m1987 (Component_t124 * __this, Type_t * ___type, List_1_t383 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void Component_SendMessage_m3660 (Component_t124 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String)
 void Component_SendMessage_m518 (Component_t124 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void Component_BroadcastMessage_m3661 (Component_t124 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
 void Component_BroadcastMessage_m530 (Component_t124 * __this, String_t* ___methodName, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
