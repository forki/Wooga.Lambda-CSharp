#pragma once

// System.Reflection.Assembly
struct Assembly_t1874;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Reflection.Module
struct Module_t2046;
// System.Reflection.AssemblyName
struct AssemblyName_t2241;
// System.Reflection.Module[]
struct ModuleU5BU5D_t2240;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.Assembly::.ctor()
 void Assembly__ctor_m9765 (Assembly_t1874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
 String_t* Assembly_get_fullname_m9766 (Assembly_t1874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
 String_t* Assembly_get_location_m9767 (Assembly_t1874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
 String_t* Assembly_get_FullName_m9768 (Assembly_t1874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
 String_t* Assembly_get_Location_m9769 (Assembly_t1874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
 bool Assembly_IsDefined_m9770 (Assembly_t1874 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t149* Assembly_GetCustomAttributes_m9771 (Assembly_t1874 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
 IntPtr_t37 Assembly_GetManifestResourceInternal_m9772 (Assembly_t1874 * __this, String_t* ___name, int32_t* ___size, Module_t2046 ** ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
 Type_t * Assembly_GetType_m9773 (Assembly_t1874 * __this, String_t* ___name, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
 Type_t * Assembly_GetType_m6455 (Assembly_t1874 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
 Type_t * Assembly_InternalGetType_m9774 (Assembly_t1874 * __this, Module_t2046 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
 Type_t * Assembly_GetType_m9775 (Assembly_t1874 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
 void Assembly_FillName_m9776 (Object_t * __this/* static, unused */, Assembly_t1874 * ___ass, AssemblyName_t2241 * ___aname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
 AssemblyName_t2241 * Assembly_UnprotectedGetName_m9777 (Assembly_t1874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
 String_t* Assembly_ToString_m9778 (Assembly_t1874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
 Assembly_t1874 * Assembly_Load_m9779 (Object_t * __this/* static, unused */, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
 Module_t2046 * Assembly_GetModule_m9780 (Assembly_t1874 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
 ModuleU5BU5D_t2240* Assembly_GetModulesInternal_m9781 (Assembly_t1874 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
 ModuleU5BU5D_t2240* Assembly_GetModules_m9782 (Assembly_t1874 * __this, bool ___getResourceModules, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
 Assembly_t1874 * Assembly_GetExecutingAssembly_m9783 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
