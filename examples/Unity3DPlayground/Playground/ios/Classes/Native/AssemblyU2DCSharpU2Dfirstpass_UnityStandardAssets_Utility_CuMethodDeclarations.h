#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.CurveControlledBob
struct CurveControlledBob_t46;
// UnityEngine.Camera
struct Camera_t42;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.CurveControlledBob::.ctor()
 void CurveControlledBob__ctor_m144 (CurveControlledBob_t46 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CurveControlledBob::Setup(UnityEngine.Camera,System.Single)
 void CurveControlledBob_Setup_m145 (CurveControlledBob_t46 * __this, Camera_t42 * ___camera, float ___bobBaseInterval, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::DoHeadBob(System.Single)
 Vector3_t10  CurveControlledBob_DoHeadBob_m146 (CurveControlledBob_t46 * __this, float ___speed, MethodInfo* method) IL2CPP_METHOD_ATTR;
