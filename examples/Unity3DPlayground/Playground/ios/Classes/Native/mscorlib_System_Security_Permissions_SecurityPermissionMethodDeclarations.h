#pragma once

// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t2467;
// System.Security.IPermission
struct IPermission_t2469;
// System.Security.SecurityElement
struct SecurityElement_t2133;
// System.Security.Permissions.SecurityPermissionFlag
#include "mscorlib_System_Security_Permissions_SecurityPermissionFlag.h"

// System.Void System.Security.Permissions.SecurityPermission::.ctor(System.Security.Permissions.SecurityPermissionFlag)
 void SecurityPermission__ctor_m10775 (SecurityPermission_t2467 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.SecurityPermission::set_Flags(System.Security.Permissions.SecurityPermissionFlag)
 void SecurityPermission_set_Flags_m10776 (SecurityPermission_t2467 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsUnrestricted()
 bool SecurityPermission_IsUnrestricted_m10777 (SecurityPermission_t2467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsSubsetOf(System.Security.IPermission)
 bool SecurityPermission_IsSubsetOf_m10778 (SecurityPermission_t2467 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.SecurityPermission::ToXml()
 SecurityElement_t2133 * SecurityPermission_ToXml_m10779 (SecurityPermission_t2467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.SecurityPermission::IsEmpty()
 bool SecurityPermission_IsEmpty_m10780 (SecurityPermission_t2467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.SecurityPermission System.Security.Permissions.SecurityPermission::Cast(System.Security.IPermission)
 SecurityPermission_t2467 * SecurityPermission_Cast_m10781 (SecurityPermission_t2467 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
