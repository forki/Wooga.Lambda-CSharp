#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Resources.ResourceManager
struct ResourceManager_t920;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1075;
// System.Collections.Hashtable
struct Hashtable_t2960;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.IO.Stream
struct Stream_t3308;
// System.Resources.ResourceSet
struct ResourceSet_t3666;
// System.Version
struct Version_t2996;
// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t3665;

// System.Void System.Resources.ResourceManager::.ctor()
 void ResourceManager__ctor_m11580 (ResourceManager_t920 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceManager::.ctor(System.String,System.Reflection.Assembly)
 void ResourceManager__ctor_m2928 (ResourceManager_t920 * __this, String_t* ___baseName, Assembly_t1075 * ___assembly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceManager::.cctor()
 void ResourceManager__cctor_m11581 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Resources.ResourceManager::GetResourceSets(System.Reflection.Assembly,System.String)
 Hashtable_t2960 * ResourceManager_GetResourceSets_m11582 (Object_t * __this/* static, unused */, Assembly_t1075 * ___assembly, String_t* ___basename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetString(System.String,System.Globalization.CultureInfo)
 String_t* ResourceManager_GetString_m2929 (ResourceManager_t920 * __this, String_t* ___name, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetResourceFileName(System.Globalization.CultureInfo)
 String_t* ResourceManager_GetResourceFileName_m11583 (ResourceManager_t920 * __this, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetResourceFilePath(System.Globalization.CultureInfo)
 String_t* ResourceManager_GetResourceFilePath_m11584 (ResourceManager_t920 * __this, CultureInfo_t921 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Resources.ResourceManager::GetManifestResourceStreamNoCase(System.Reflection.Assembly,System.String)
 Stream_t3308 * ResourceManager_GetManifestResourceStreamNoCase_m11585 (ResourceManager_t920 * __this, Assembly_t1075 * ___ass, String_t* ___fn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Resources.ResourceSet System.Resources.ResourceManager::InternalGetResourceSet(System.Globalization.CultureInfo,System.Boolean,System.Boolean)
 ResourceSet_t3666 * ResourceManager_InternalGetResourceSet_m11586 (ResourceManager_t920 * __this, CultureInfo_t921 * ___culture, bool ___createIfNotExists, bool ___tryParents, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Resources.ResourceManager::GetNeutralResourcesLanguage(System.Reflection.Assembly)
 CultureInfo_t921 * ResourceManager_GetNeutralResourcesLanguage_m11587 (Object_t * __this/* static, unused */, Assembly_t1075 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Resources.ResourceManager::GetSatelliteContractVersion(System.Reflection.Assembly)
 Version_t2996 * ResourceManager_GetSatelliteContractVersion_m11588 (Object_t * __this/* static, unused */, Assembly_t1075 * ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Resources.MissingManifestResourceException System.Resources.ResourceManager::AssemblyResourceMissing(System.String)
 MissingManifestResourceException_t3665 * ResourceManager_AssemblyResourceMissing_m11589 (ResourceManager_t920 * __this, String_t* ___fileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Resources.ResourceManager::GetManifestResourceName(System.String)
 String_t* ResourceManager_GetManifestResourceName_m11590 (ResourceManager_t920 * __this, String_t* ___fn, MethodInfo* method) IL2CPP_METHOD_ATTR;
