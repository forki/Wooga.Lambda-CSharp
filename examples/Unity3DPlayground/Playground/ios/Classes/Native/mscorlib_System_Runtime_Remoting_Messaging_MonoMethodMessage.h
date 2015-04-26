#pragma once
// System.Reflection.MonoMethod
struct MonoMethod_t2280;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t2355;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t121;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1229;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2346  : public Object_t
{
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t2280 * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t149* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t1071* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t2355 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	Object_t * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t121 * ___exc_5;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t1229* ___methodSignature_7;
};
