#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Plane
struct Plane_t468;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Plane__ctor_m2156 (Plane_t468 * __this, Vector3_t10  ___inNormal, Vector3_t10  ___inPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
 Vector3_t10  Plane_get_normal_m5633 (Plane_t468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
 float Plane_get_distance_m5634 (Plane_t468 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
 bool Plane_Raycast_m2157 (Plane_t468 * __this, Ray_t49  ___ray, float* ___enter, MethodInfo* method) IL2CPP_METHOD_ATTR;
