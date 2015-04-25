#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t3603;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t3604;
// System.Reflection.ManifestResourceInfo
struct ManifestResourceInfo_t3605;
// System.String[]
struct StringU5BU5D_t127;
// System.IO.Stream
struct Stream_t3308;
// System.Type
struct Type_t;
// System.Exception
struct Exception_t115;
// System.Reflection.AssemblyName
struct AssemblyName_t3606;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
 String_t* AssemblyBuilder_get_Location_m11085 (AssemblyBuilder_t3603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
 ModuleU5BU5D_t3604* AssemblyBuilder_GetModulesInternal_m11086 (AssemblyBuilder_t3603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ManifestResourceInfo System.Reflection.Emit.AssemblyBuilder::GetManifestResourceInfo(System.String)
 ManifestResourceInfo_t3605 * AssemblyBuilder_GetManifestResourceInfo_m11087 (AssemblyBuilder_t3603 * __this, String_t* ___resourceName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Reflection.Emit.AssemblyBuilder::GetManifestResourceNames()
 StringU5BU5D_t127* AssemblyBuilder_GetManifestResourceNames_m11088 (AssemblyBuilder_t3603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Emit.AssemblyBuilder::GetManifestResourceStream(System.String)
 Stream_t3308 * AssemblyBuilder_GetManifestResourceStream_m11089 (AssemblyBuilder_t3603 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Emit.AssemblyBuilder::GetManifestResourceStream(System.Type,System.String)
 Stream_t3308 * AssemblyBuilder_GetManifestResourceStream_m11090 (AssemblyBuilder_t3603 * __this, Type_t * ___type, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
 bool AssemblyBuilder_get_IsCompilerContext_m11091 (AssemblyBuilder_t3603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
 Exception_t115 * AssemblyBuilder_not_supported_m11092 (AssemblyBuilder_t3603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
 AssemblyName_t3606 * AssemblyBuilder_UnprotectedGetName_m11093 (AssemblyBuilder_t3603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
