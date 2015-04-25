#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t133;
// UnityEngine.Collider
struct Collider_t34;
// UnityEngine.Rigidbody
struct Rigidbody_t67;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
 Vector3_t10  RaycastHit_get_point_m419 (RaycastHit_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
 Vector3_t10  RaycastHit_get_normal_m1920 (RaycastHit_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
 float RaycastHit_get_distance_m454 (RaycastHit_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
 Collider_t34 * RaycastHit_get_collider_m1921 (RaycastHit_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
 Rigidbody_t67 * RaycastHit_get_rigidbody_m444 (RaycastHit_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
