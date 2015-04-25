#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera
struct Camera_t42;
// UnityEngine.RenderTexture
struct RenderTexture_t2489;
// UnityEngine.Camera[]
struct CameraU5BU5D_t2541;
// UnityEngine.GameObject
struct GameObject_t32;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Single UnityEngine.Camera::get_fieldOfView()
 float Camera_get_fieldOfView_m469 (Camera_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
 void Camera_set_fieldOfView_m470 (Camera_t42 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
 float Camera_get_nearClipPlane_m1903 (Camera_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
 float Camera_get_farClipPlane_m1902 (Camera_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
 float Camera_get_depth_m1765 (Camera_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
 int32_t Camera_get_cullingMask_m1914 (Camera_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
 int32_t Camera_get_eventMask_m5700 (Camera_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
 void Camera_INTERNAL_get_pixelRect_m5701 (Camera_t42 * __this, Rect_t276 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
 Rect_t276  Camera_get_pixelRect_m5702 (Camera_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
 RenderTexture_t2489 * Camera_get_targetTexture_m5703 (Camera_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
 int32_t Camera_get_clearFlags_m5704 (Camera_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
 Vector3_t10  Camera_ScreenToViewportPoint_m2035 (Camera_t42 * __this, Vector3_t10  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t10  Camera_INTERNAL_CALL_ScreenToViewportPoint_m5705 (Object_t * __this/* static, unused */, Camera_t42 * ___self, Vector3_t10 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
 Ray_t49  Camera_ScreenPointToRay_m433 (Camera_t42 * __this, Vector3_t10  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
 Ray_t49  Camera_INTERNAL_CALL_ScreenPointToRay_m5706 (Object_t * __this/* static, unused */, Camera_t42 * ___self, Vector3_t10 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
 Camera_t42 * Camera_get_main_m457 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
 int32_t Camera_get_allCamerasCount_m5707 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
 int32_t Camera_GetAllCameras_m5708 (Object_t * __this/* static, unused */, CameraU5BU5D_t2541* ___cameras, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
 void Camera_FireOnPreCull_m5709 (Object_t * __this/* static, unused */, Camera_t42 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
 void Camera_FireOnPreRender_m5710 (Object_t * __this/* static, unused */, Camera_t42 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
 void Camera_FireOnPostRender_m5711 (Object_t * __this/* static, unused */, Camera_t42 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
 GameObject_t32 * Camera_RaycastTry_m5712 (Camera_t42 * __this, Ray_t49  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
 GameObject_t32 * Camera_INTERNAL_CALL_RaycastTry_m5713 (Object_t * __this/* static, unused */, Camera_t42 * ___self, Ray_t49 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
 GameObject_t32 * Camera_RaycastTry2D_m5714 (Camera_t42 * __this, Ray_t49  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
 GameObject_t32 * Camera_INTERNAL_CALL_RaycastTry2D_m5715 (Object_t * __this/* static, unused */, Camera_t42 * ___self, Ray_t49 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
