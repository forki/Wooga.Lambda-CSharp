#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityStandardAssets.Utility.CameraRefocus
struct CameraRefocus_t44;
// UnityEngine.Camera
struct Camera_t42;
// UnityEngine.Transform
struct Transform_t43;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityStandardAssets.Utility.CameraRefocus::.ctor(UnityEngine.Camera,UnityEngine.Transform,UnityEngine.Vector3)
 void CameraRefocus__ctor_m139 (CameraRefocus_t44 * __this, Camera_t42 * ___camera, Transform_t43 * ___parent, Vector3_t10  ___origCameraPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeCamera(UnityEngine.Camera)
 void CameraRefocus_ChangeCamera_m140 (CameraRefocus_t44 * __this, Camera_t42 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::ChangeParent(UnityEngine.Transform)
 void CameraRefocus_ChangeParent_m141 (CameraRefocus_t44 * __this, Transform_t43 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::GetFocusPoint()
 void CameraRefocus_GetFocusPoint_m142 (CameraRefocus_t44 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.CameraRefocus::SetFocusPoint()
 void CameraRefocus_SetFocusPoint_m143 (CameraRefocus_t44 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
