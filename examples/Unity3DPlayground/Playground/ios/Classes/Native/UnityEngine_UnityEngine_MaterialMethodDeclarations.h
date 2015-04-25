#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material
struct Material_t125;
// UnityEngine.Shader
struct Shader_t35;
// UnityEngine.Texture
struct Texture_t274;
// System.String
struct String_t;

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
 void Material__ctor_m2307 (Material_t125 * __this, Material_t125 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
 Shader_t35 * Material_get_shader_m398 (Material_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
 void Material_set_shader_m403 (Material_t125 * __this, Shader_t35 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
 Texture_t274 * Material_get_mainTexture_m2315 (Material_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
 Texture_t274 * Material_GetTexture_m5660 (Material_t125 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
 Texture_t274 * Material_GetTexture_m5661 (Material_t125 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
 void Material_SetFloat_m5662 (Material_t125 * __this, String_t* ___propertyName, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
 void Material_SetFloat_m5663 (Material_t125 * __this, int32_t ___nameID, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
 void Material_SetInt_m2309 (Material_t125 * __this, String_t* ___propertyName, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
 bool Material_HasProperty_m2303 (Material_t125 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
 bool Material_HasProperty_m5664 (Material_t125 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
 void Material_Internal_CreateWithMaterial_m5665 (Object_t * __this/* static, unused */, Material_t125 * ___mono, Material_t125 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
