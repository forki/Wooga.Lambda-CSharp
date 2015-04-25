#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Joint
struct Joint_t2556;
// UnityEngine.Rigidbody
struct Rigidbody_t67;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
 Rigidbody_t67 * Joint_get_connectedBody_m428 (Joint_t2556 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
 void Joint_set_connectedBody_m437 (Joint_t2556 * __this, Rigidbody_t67 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::INTERNAL_set_anchor(UnityEngine.Vector3&)
 void Joint_INTERNAL_set_anchor_m5830 (Joint_t2556 * __this, Vector3_t10 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
 void Joint_set_anchor_m450 (Joint_t2556 * __this, Vector3_t10  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
