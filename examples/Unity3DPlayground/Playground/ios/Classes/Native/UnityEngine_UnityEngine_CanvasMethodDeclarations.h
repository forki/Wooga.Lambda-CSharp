#pragma once

// UnityEngine.Canvas
struct Canvas_t274;
// UnityEngine.Camera
struct Camera_t48;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t438;
// UnityEngine.Material
struct Material_t148;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"

// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
 void Canvas_add_willRenderCanvases_m1959 (Object_t * __this/* static, unused */, WillRenderCanvases_t438 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
 void Canvas_remove_willRenderCanvases_m3844 (Object_t * __this/* static, unused */, WillRenderCanvases_t438 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
 int32_t Canvas_get_renderMode_m2035 (Canvas_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
 bool Canvas_get_isRootCanvas_m2352 (Canvas_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
 Camera_t48 * Canvas_get_worldCamera_m2039 (Canvas_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
 float Canvas_get_scaleFactor_m2323 (Canvas_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
 void Canvas_set_scaleFactor_m2356 (Canvas_t274 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
 float Canvas_get_referencePixelsPerUnit_m2072 (Canvas_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
 void Canvas_set_referencePixelsPerUnit_m2357 (Canvas_t274 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
 bool Canvas_get_pixelPerfect_m2019 (Canvas_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_renderOrder()
 int32_t Canvas_get_renderOrder_m2037 (Canvas_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
 int32_t Canvas_get_sortingOrder_m2036 (Canvas_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
 int32_t Canvas_get_sortingLayerID_m2047 (Canvas_t274 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
 Material_t148 * Canvas_GetDefaultCanvasMaterial_m1983 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
 Material_t148 * Canvas_GetDefaultCanvasTextMaterial_m2319 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
 void Canvas_SendWillRenderCanvases_m3845 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
 void Canvas_ForceUpdateCanvases_m2257 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
