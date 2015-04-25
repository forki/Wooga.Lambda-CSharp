#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t268;
// UnityEngine.Material
struct Material_t125;
// UnityEngine.Texture
struct Texture_t274;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t275;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t312;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
 void CanvasRenderer_SetColor_m2018 (CanvasRenderer_t268 * __this, Color_t145  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
 void CanvasRenderer_INTERNAL_CALL_SetColor_m5963 (Object_t * __this/* static, unused */, CanvasRenderer_t268 * ___self, Color_t145 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
 Color_t145  CanvasRenderer_GetColor_m2016 (CanvasRenderer_t268 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
 void CanvasRenderer_set_isMask_m2404 (CanvasRenderer_t268 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
 void CanvasRenderer_SetMaterial_m2004 (CanvasRenderer_t268 * __this, Material_t125 * ___material, Texture_t274 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void CanvasRenderer_SetVertices_m2002 (CanvasRenderer_t268 * __this, List_1_t275 * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
 void CanvasRenderer_SetVerticesInternal_m5964 (CanvasRenderer_t268 * __this, Object_t * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
 void CanvasRenderer_SetVertices_m2148 (CanvasRenderer_t268 * __this, UIVertexU5BU5D_t312* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
 void CanvasRenderer_SetVerticesInternalArray_m5965 (CanvasRenderer_t268 * __this, UIVertexU5BU5D_t312* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
 void CanvasRenderer_Clear_m1995 (CanvasRenderer_t268 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
 int32_t CanvasRenderer_get_absoluteDepth_m1978 (CanvasRenderer_t268 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
