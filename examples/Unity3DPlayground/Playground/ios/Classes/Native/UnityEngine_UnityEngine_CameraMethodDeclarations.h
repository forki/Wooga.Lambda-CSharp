#pragma once

// UnityEngine.Camera
struct Camera_t48;
// UnityEngine.RenderTexture
struct RenderTexture_t1129;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1182;
// UnityEngine.GameObject
struct GameObject_t38;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
 float Camera_get_fieldOfView_m501 (Camera_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
 void Camera_set_fieldOfView_m502 (Camera_t48 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
 float Camera_get_nearClipPlane_m1909 (Camera_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
 float Camera_get_farClipPlane_m1908 (Camera_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
 float Camera_get_depth_m1772 (Camera_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
 int32_t Camera_get_cullingMask_m1920 (Camera_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
 int32_t Camera_get_eventMask_m3588 (Camera_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
 void Camera_INTERNAL_get_pixelRect_m3589 (Camera_t48 * __this, Rect_t281 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
 Rect_t281  Camera_get_pixelRect_m3590 (Camera_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
 RenderTexture_t1129 * Camera_get_targetTexture_m3591 (Camera_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
 int32_t Camera_get_clearFlags_m3592 (Camera_t48 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
 Vector3_t10  Camera_ScreenToViewportPoint_m2041 (Camera_t48 * __this, Vector3_t10  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t10  Camera_INTERNAL_CALL_ScreenToViewportPoint_m3593 (Object_t * __this/* static, unused */, Camera_t48 * ___self, Vector3_t10 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
 Ray_t55  Camera_ScreenPointToRay_m465 (Camera_t48 * __this, Vector3_t10  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
 Ray_t55  Camera_INTERNAL_CALL_ScreenPointToRay_m3594 (Object_t * __this/* static, unused */, Camera_t48 * ___self, Vector3_t10 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
 Camera_t48 * Camera_get_main_m489 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
 int32_t Camera_get_allCamerasCount_m3595 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
 int32_t Camera_GetAllCameras_m3596 (Object_t * __this/* static, unused */, CameraU5BU5D_t1182* ___cameras, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
 void Camera_FireOnPreCull_m3597 (Object_t * __this/* static, unused */, Camera_t48 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
 void Camera_FireOnPreRender_m3598 (Object_t * __this/* static, unused */, Camera_t48 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
 void Camera_FireOnPostRender_m3599 (Object_t * __this/* static, unused */, Camera_t48 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
 GameObject_t38 * Camera_RaycastTry_m3600 (Camera_t48 * __this, Ray_t55  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
 GameObject_t38 * Camera_INTERNAL_CALL_RaycastTry_m3601 (Object_t * __this/* static, unused */, Camera_t48 * ___self, Ray_t55 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
 GameObject_t38 * Camera_RaycastTry2D_m3602 (Camera_t48 * __this, Ray_t55  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
 GameObject_t38 * Camera_INTERNAL_CALL_RaycastTry2D_m3603 (Object_t * __this/* static, unused */, Camera_t48 * ___self, Ray_t55 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
