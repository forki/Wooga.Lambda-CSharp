#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t3900;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1075;
// System.Security.Policy.Evidence
struct Evidence_t3625;
// System.Reflection.AssemblyName
struct AssemblyName_t3606;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3704;

// System.String System.AppDomain::getFriendlyName()
 String_t* AppDomain_getFriendlyName_m12750 (AppDomain_t3900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
 AppDomain_t3900 * AppDomain_getCurDomain_m12751 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
 AppDomain_t3900 * AppDomain_get_CurrentDomain_m12752 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t1075 * AppDomain_LoadAssembly_m12753 (AppDomain_t3900 * __this, String_t* ___assemblyRef, Evidence_t3625 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadSatellite(System.Reflection.AssemblyName,System.Boolean)
 Assembly_t1075 * AppDomain_LoadSatellite_m12754 (AppDomain_t3900 * __this, AssemblyName_t3606 * ___assemblyRef, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
 Assembly_t1075 * AppDomain_Load_m12755 (AppDomain_t3900 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t1075 * AppDomain_Load_m12756 (AppDomain_t3900 * __this, String_t* ___assemblyString, Evidence_t3625 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
 Context_t3704 * AppDomain_InternalGetContext_m12757 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
 Context_t3704 * AppDomain_InternalGetDefaultContext_m12758 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
 String_t* AppDomain_InternalGetProcessGuid_m12759 (Object_t * __this/* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
 String_t* AppDomain_GetProcessGuid_m12760 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
 String_t* AppDomain_ToString_m12761 (AppDomain_t3900 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
