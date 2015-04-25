#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Ray
struct Ray_t49;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Ray__ctor_m461 (Ray_t49 * __this, Vector3_t10  ___origin, Vector3_t10  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
 Vector3_t10  Ray_get_origin_m441 (Ray_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
 Vector3_t10  Ray_get_direction_m442 (Ray_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
 Vector3_t10  Ray_GetPoint_m434 (Ray_t49 * __this, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
 String_t* Ray_ToString_m5632 (Ray_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
