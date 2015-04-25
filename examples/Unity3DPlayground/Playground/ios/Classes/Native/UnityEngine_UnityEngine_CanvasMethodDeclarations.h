#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Canvas
struct Canvas_t269;
// UnityEngine.Camera
struct Camera_t42;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t433;
// UnityEngine.Material
struct Material_t125;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"

// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
 void Canvas_add_willRenderCanvases_m1953 (Object_t * __this/* static, unused */, WillRenderCanvases_t433 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
 void Canvas_remove_willRenderCanvases_m5958 (Object_t * __this/* static, unused */, WillRenderCanvases_t433 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
 int32_t Canvas_get_renderMode_m2029 (Canvas_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
 bool Canvas_get_isRootCanvas_m2346 (Canvas_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
 Camera_t42 * Canvas_get_worldCamera_m2033 (Canvas_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
 float Canvas_get_scaleFactor_m2317 (Canvas_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
 void Canvas_set_scaleFactor_m2350 (Canvas_t269 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
 float Canvas_get_referencePixelsPerUnit_m2066 (Canvas_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
 void Canvas_set_referencePixelsPerUnit_m2351 (Canvas_t269 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
 bool Canvas_get_pixelPerfect_m2013 (Canvas_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_renderOrder()
 int32_t Canvas_get_renderOrder_m2031 (Canvas_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
 int32_t Canvas_get_sortingOrder_m2030 (Canvas_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
 int32_t Canvas_get_sortingLayerID_m2041 (Canvas_t269 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
 Material_t125 * Canvas_GetDefaultCanvasMaterial_m1977 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
 Material_t125 * Canvas_GetDefaultCanvasTextMaterial_m2313 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
 void Canvas_SendWillRenderCanvases_m5959 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
 void Canvas_ForceUpdateCanvases_m2251 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
