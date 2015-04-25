#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t281;
// UnityEngine.Canvas
struct Canvas_t269;
// UnityEngine.UI.Graphic
struct Graphic_t273;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t283;

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
 void GraphicRegistry__ctor_m988 (GraphicRegistry_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
 void GraphicRegistry__cctor_m989 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
 GraphicRegistry_t281 * GraphicRegistry_get_instance_m990 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
 void GraphicRegistry_RegisterGraphicForCanvas_m991 (Object_t * __this/* static, unused */, Canvas_t269 * ___c, Graphic_t273 * ___graphic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
 void GraphicRegistry_UnregisterGraphicForCanvas_m992 (Object_t * __this/* static, unused */, Canvas_t269 * ___c, Graphic_t273 * ___graphic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
 Object_t* GraphicRegistry_GetGraphicsForCanvas_m993 (Object_t * __this/* static, unused */, Canvas_t269 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
