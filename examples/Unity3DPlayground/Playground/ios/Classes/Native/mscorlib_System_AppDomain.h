#pragma once
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1534;
// System.Security.Policy.Evidence
struct Evidence_t2259;
// System.Security.PermissionSet
struct PermissionSet_t2260;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2521;
// System.AppDomain
struct AppDomain_t2484;
// System.AppDomainManager
struct AppDomainManager_t2530;
// System.ActivationContext
struct ActivationContext_t2528;
// System.ApplicationIdentity
struct ApplicationIdentity_t2531;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t2532;
// System.ResolveEventHandler
struct ResolveEventHandler_t2533;
// System.EventHandler
struct EventHandler_t1653;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2534;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.Principal.PrincipalPolicy
#include "mscorlib_System_Security_Principal_PrincipalPolicy.h"
// System.AppDomain
struct AppDomain_t2484  : public MarshalByRefObject_t1684
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	IntPtr_t37 ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t2259 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t2260 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t2530 * ____domain_manager_11;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t2528 * ____activation_12;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t2531 * ____applicationIdentity_13;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t2532 * ___AssemblyLoad_14;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t2533 * ___AssemblyResolve_15;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t1653 * ___DomainUnload_16;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t1653 * ___ProcessExit_17;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t2533 * ___ResourceResolve_18;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t2533 * ___TypeResolve_19;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t2534 * ___UnhandledException_20;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t2533 * ___ReflectionOnlyAssemblyResolve_21;
};
struct AppDomain_t2484_StaticFields{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t2484 * ___default_domain_10;
};
struct AppDomain_t2484_ThreadStaticFields{
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t1534 * ___type_resolve_in_progress_3;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t1534 * ___assembly_resolve_in_progress_4;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t1534 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	Object_t * ____principal_9;
};
