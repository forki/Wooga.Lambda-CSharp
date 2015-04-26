#pragma once
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t1684;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2332;
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2063  : public Identity_t2373
{
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_5;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t1684 * ____serverObject_6;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t2332 * ____context_7;
};
