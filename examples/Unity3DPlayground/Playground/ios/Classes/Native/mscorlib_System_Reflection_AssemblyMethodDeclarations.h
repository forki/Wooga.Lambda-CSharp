#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Assembly
struct Assembly_t1075;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Reflection.Module
struct Module_t3405;
// System.IO.Stream
struct Stream_t3308;
// System.Reflection.AssemblyName
struct AssemblyName_t3606;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Version
struct Version_t2996;
// System.Reflection.Module[]
struct ModuleU5BU5D_t3604;
// System.String[]
struct StringU5BU5D_t127;
// System.Reflection.ManifestResourceInfo
struct ManifestResourceInfo_t3605;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.Assembly::.ctor()
 void Assembly__ctor_m11287 (Assembly_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
 String_t* Assembly_get_code_base_m11288 (Assembly_t1075 * __this, bool ___escaped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
 String_t* Assembly_get_fullname_m11289 (Assembly_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
 String_t* Assembly_get_location_m11290 (Assembly_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
 String_t* Assembly_GetCodeBase_m11291 (Assembly_t1075 * __this, bool ___escaped, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
 String_t* Assembly_get_FullName_m11292 (Assembly_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
 String_t* Assembly_get_Location_m11293 (Assembly_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
 bool Assembly_IsDefined_m11294 (Assembly_t1075 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t126* Assembly_GetCustomAttributes_m11295 (Assembly_t1075 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
 IntPtr_t31 Assembly_GetManifestResourceInternal_m11296 (Assembly_t1075 * __this, String_t* ___name, int32_t* ___size, Module_t3405 ** ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String)
 Stream_t3308 * Assembly_GetManifestResourceStream_m11297 (Assembly_t1075 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.Type,System.String)
 Stream_t3308 * Assembly_GetManifestResourceStream_m11298 (Assembly_t1075 * __this, Type_t * ___type, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
 Type_t * Assembly_GetType_m11299 (Assembly_t1075 * __this, String_t* ___name, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
 Type_t * Assembly_GetType_m7718 (Assembly_t1075 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
 Type_t * Assembly_InternalGetType_m11300 (Assembly_t1075 * __this, Module_t3405 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
 Type_t * Assembly_GetType_m11301 (Assembly_t1075 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
 void Assembly_FillName_m11302 (Object_t * __this/* static, unused */, Assembly_t1075 * ___ass, AssemblyName_t3606 * ___aname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName(System.Boolean)
 AssemblyName_t3606 * Assembly_GetName_m11303 (Assembly_t1075 * __this, bool ___copiedName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName()
 AssemblyName_t3606 * Assembly_GetName_m11304 (Assembly_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
 AssemblyName_t3606 * Assembly_UnprotectedGetName_m11305 (Assembly_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
 String_t* Assembly_ToString_m11306 (Assembly_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetSatelliteAssemblyNoThrow(System.Globalization.CultureInfo,System.Version)
 Assembly_t1075 * Assembly_GetSatelliteAssemblyNoThrow_m11307 (Assembly_t1075 * __this, CultureInfo_t921 * ___culture, Version_t2996 * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetSatelliteAssembly(System.Globalization.CultureInfo,System.Version,System.Boolean)
 Assembly_t1075 * Assembly_GetSatelliteAssembly_m11308 (Assembly_t1075 * __this, CultureInfo_t921 * ___culture, Version_t2996 * ___version, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadFrom(System.String,System.Boolean)
 Assembly_t1075 * Assembly_LoadFrom_m11309 (Object_t * __this/* static, unused */, String_t* ___assemblyFile, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::LoadFrom(System.String)
 Assembly_t1075 * Assembly_LoadFrom_m11310 (Object_t * __this/* static, unused */, String_t* ___assemblyFile, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
 Assembly_t1075 * Assembly_Load_m11311 (Object_t * __this/* static, unused */, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
 Module_t3405 * Assembly_GetModule_m11312 (Assembly_t1075 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
 ModuleU5BU5D_t3604* Assembly_GetModulesInternal_m11313 (Assembly_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
 ModuleU5BU5D_t3604* Assembly_GetModules_m11314 (Assembly_t1075 * __this, bool ___getResourceModules, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Reflection.Assembly::GetManifestResourceNames()
 StringU5BU5D_t127* Assembly_GetManifestResourceNames_m11315 (Assembly_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
 Assembly_t1075 * Assembly_GetExecutingAssembly_m11316 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::GetManifestResourceInfoInternal(System.String,System.Reflection.ManifestResourceInfo)
 bool Assembly_GetManifestResourceInfoInternal_m11317 (Assembly_t1075 * __this, String_t* ___name, ManifestResourceInfo_t3605 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ManifestResourceInfo System.Reflection.Assembly::GetManifestResourceInfo(System.String)
 ManifestResourceInfo_t3605 * Assembly_GetManifestResourceInfo_m11318 (Assembly_t1075 * __this, String_t* ___resourceName, MethodInfo* method) IL2CPP_METHOD_ATTR;
