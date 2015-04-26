#pragma once

// UnityEngine.Material
struct Material_t148;
// UnityEngine.Shader
struct Shader_t41;
// UnityEngine.Texture
struct Texture_t279;
// System.String
struct String_t;

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
 void Material__ctor_m2313 (Material_t148 * __this, Material_t148 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
 Shader_t41 * Material_get_shader_m430 (Material_t148 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
 void Material_set_shader_m435 (Material_t148 * __this, Shader_t41 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
 Texture_t279 * Material_get_mainTexture_m2321 (Material_t148 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
 Texture_t279 * Material_GetTexture_m3548 (Material_t148 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
 Texture_t279 * Material_GetTexture_m3549 (Material_t148 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
 void Material_SetFloat_m3550 (Material_t148 * __this, String_t* ___propertyName, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
 void Material_SetFloat_m3551 (Material_t148 * __this, int32_t ___nameID, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
 void Material_SetInt_m2315 (Material_t148 * __this, String_t* ___propertyName, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
 bool Material_HasProperty_m2309 (Material_t148 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
 bool Material_HasProperty_m3552 (Material_t148 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
 void Material_Internal_CreateWithMaterial_m3553 (Object_t * __this/* static, unused */, Material_t148 * ___mono, Material_t148 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
