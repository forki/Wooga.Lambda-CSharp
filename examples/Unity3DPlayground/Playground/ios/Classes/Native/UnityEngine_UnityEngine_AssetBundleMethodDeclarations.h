#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AssetBundle
struct AssetBundle_t2457;
// UnityEngine.Object
struct Object_t30;
struct Object_t30_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t98;

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
 Object_t30 * AssetBundle_LoadAsset_m5190 (AssetBundle_t2457 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
 Object_t30 * AssetBundle_LoadAsset_Internal_m5191 (AssetBundle_t2457 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
 ObjectU5BU5D_t98* AssetBundle_LoadAssetWithSubAssets_Internal_m5192 (AssetBundle_t2457 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
