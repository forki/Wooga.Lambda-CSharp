#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t3841;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.SecurityManager
struct SecurityManager_t3854  : public Object_t
{
};
struct SecurityManager_t3854_StaticFields{
	// System.Object System.Security.SecurityManager::_lockObject
	Object_t * ____lockObject_0;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t3841 * ____execution_1;
};
