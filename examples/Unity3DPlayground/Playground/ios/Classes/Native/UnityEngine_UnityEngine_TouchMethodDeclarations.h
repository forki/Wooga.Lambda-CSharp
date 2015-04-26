#pragma once

// UnityEngine.Touch
struct Touch_t126;
struct Touch_t126_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
 int32_t Touch_get_fingerId_m1867 (Touch_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
 Vector2_t25  Touch_get_position_m374 (Touch_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
 int32_t Touch_get_phase_m1868 (Touch_t126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t126_marshal(const Touch_t126& unmarshaled, Touch_t126_marshaled& marshaled);
void Touch_t126_marshal_back(const Touch_t126_marshaled& marshaled, Touch_t126& unmarshaled);
void Touch_t126_marshal_cleanup(Touch_t126_marshaled& marshaled);
