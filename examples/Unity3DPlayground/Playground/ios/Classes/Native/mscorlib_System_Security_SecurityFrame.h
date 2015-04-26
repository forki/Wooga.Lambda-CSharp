#pragma once
// System.AppDomain
struct AppDomain_t2484;
// System.Reflection.MethodInfo
struct MethodInfo_t1265;
// System.Security.PermissionSet
struct PermissionSet_t2260;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Security.SecurityFrame
struct SecurityFrame_t2486 
{
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t2484 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t1265 * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t2260 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t2260 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t2260 * ____permitonly_4;
};
