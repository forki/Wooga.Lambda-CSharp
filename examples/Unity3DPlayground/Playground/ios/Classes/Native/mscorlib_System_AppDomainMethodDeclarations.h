#pragma once

// System.AppDomain
struct AppDomain_t2484;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1874;
// System.Security.Policy.Evidence
struct Evidence_t2259;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2332;

// System.String System.AppDomain::getFriendlyName()
 String_t* AppDomain_getFriendlyName_m11202 (AppDomain_t2484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
 AppDomain_t2484 * AppDomain_getCurDomain_m11203 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
 AppDomain_t2484 * AppDomain_get_CurrentDomain_m11204 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t1874 * AppDomain_LoadAssembly_m11205 (AppDomain_t2484 * __this, String_t* ___assemblyRef, Evidence_t2259 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
 Assembly_t1874 * AppDomain_Load_m11206 (AppDomain_t2484 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t1874 * AppDomain_Load_m11207 (AppDomain_t2484 * __this, String_t* ___assemblyString, Evidence_t2259 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
 Context_t2332 * AppDomain_InternalGetContext_m11208 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
 Context_t2332 * AppDomain_InternalGetDefaultContext_m11209 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
 String_t* AppDomain_InternalGetProcessGuid_m11210 (Object_t * __this/* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
 String_t* AppDomain_GetProcessGuid_m11211 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
 String_t* AppDomain_ToString_m11212 (AppDomain_t2484 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
