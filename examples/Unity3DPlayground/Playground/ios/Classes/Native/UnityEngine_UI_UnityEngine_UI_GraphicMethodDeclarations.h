#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Graphic
struct Graphic_t273;
// UnityEngine.Material
struct Material_t125;
// UnityEngine.RectTransform
struct RectTransform_t267;
// UnityEngine.Canvas
struct Canvas_t269;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t268;
// UnityEngine.Texture
struct Texture_t274;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t275;
// UnityEngine.Camera
struct Camera_t42;
// UnityEngine.Events.UnityAction
struct UnityAction_t270;
// UnityEngine.Transform
struct Transform_t43;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
 void Graphic__ctor_m927 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
 void Graphic__cctor_m928 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
 Material_t125 * Graphic_get_defaultGraphicMaterial_m929 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
 Color_t145  Graphic_get_color_m930 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
 void Graphic_set_color_m931 (Graphic_t273 * __this, Color_t145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
 void Graphic_SetAllDirty_m932 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
 void Graphic_SetLayoutDirty_m933 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
 void Graphic_SetVerticesDirty_m934 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
 void Graphic_SetMaterialDirty_m935 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
 void Graphic_OnRectTransformDimensionsChange_m936 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
 void Graphic_OnBeforeTransformParentChanged_m937 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
 void Graphic_OnTransformParentChanged_m938 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
 int32_t Graphic_get_depth_m939 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
 RectTransform_t267 * Graphic_get_rectTransform_m940 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
 Canvas_t269 * Graphic_get_canvas_m941 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
 void Graphic_CacheCanvas_m942 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
 CanvasRenderer_t268 * Graphic_get_canvasRenderer_m943 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
 Material_t125 * Graphic_get_defaultMaterial_m944 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
 Material_t125 * Graphic_get_material_m945 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
 void Graphic_set_material_m946 (Graphic_t273 * __this, Material_t125 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
 Material_t125 * Graphic_get_materialForRendering_m947 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
 Texture_t274 * Graphic_get_mainTexture_m948 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
 void Graphic_OnEnable_m949 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
 void Graphic_OnDisable_m950 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SendGraphicEnabledDisabled()
 void Graphic_SendGraphicEnabledDisabled_m951 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Graphic_Rebuild_m952 (Graphic_t273 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
 void Graphic_UpdateGeometry_m953 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
 void Graphic_UpdateMaterial_m954 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_OnFillVBO_m955 (Graphic_t273 * __this, List_1_t275 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
 void Graphic_OnDidApplyAnimationProperties_m956 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
 void Graphic_SetNativeSize_m957 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
 bool Graphic_Raycast_m958 (Graphic_t273 * __this, Vector2_t25  ___sp, Camera_t42 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
 Vector2_t25  Graphic_PixelAdjustPoint_m959 (Graphic_t273 * __this, Vector2_t25  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
 Rect_t276  Graphic_GetPixelAdjustedRect_m960 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
 void Graphic_CrossFadeColor_m961 (Graphic_t273 * __this, Color_t145  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
 void Graphic_CrossFadeColor_m962 (Graphic_t273 * __this, Color_t145  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, bool ___useRGB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
 Color_t145  Graphic_CreateColorFromAlpha_m963 (Object_t * __this/* static, unused */, float ___alpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
 void Graphic_CrossFadeAlpha_m964 (Graphic_t273 * __this, float ___alpha, float ___duration, bool ___ignoreTimeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyLayoutCallback_m965 (Graphic_t273 * __this, UnityAction_t270 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyLayoutCallback_m966 (Graphic_t273 * __this, UnityAction_t270 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyVerticesCallback_m967 (Graphic_t273 * __this, UnityAction_t270 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyVerticesCallback_m968 (Graphic_t273 * __this, UnityAction_t270 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyMaterialCallback_m969 (Graphic_t273 * __this, UnityAction_t270 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyMaterialCallback_m970 (Graphic_t273 * __this, UnityAction_t270 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__4(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_U3Cs_VboPoolU3Em__4_m971 (Object_t * __this/* static, unused */, List_1_t275 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__5(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_U3Cs_VboPoolU3Em__5_m972 (Object_t * __this/* static, unused */, List_1_t275 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m973 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t43 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m974 (Graphic_t273 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
