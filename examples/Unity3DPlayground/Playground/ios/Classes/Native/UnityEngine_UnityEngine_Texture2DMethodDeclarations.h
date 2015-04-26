#pragma once

// UnityEngine.Texture2D
struct Texture2D_t270;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
 void Texture2D__ctor_m3195 (Texture2D_t270 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
 void Texture2D_Internal_Create_m3196 (Object_t * __this/* static, unused */, Texture2D_t270 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t37 ___nativeTex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
 Texture2D_t270 * Texture2D_get_whiteTexture_m2000 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
 Color_t168  Texture2D_GetPixelBilinear_m2105 (Texture2D_t270 * __this, float ___u, float ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
