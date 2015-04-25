#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MissingMethodException
struct MissingMethodException_t3947;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingMethodException::.ctor()
 void MissingMethodException__ctor_m13219 (MissingMethodException_t3947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String)
 void MissingMethodException__ctor_m13220 (MissingMethodException_t3947 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MissingMethodException__ctor_m13221 (MissingMethodException_t3947 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String,System.String)
 void MissingMethodException__ctor_m13222 (MissingMethodException_t3947 * __this, String_t* ___className, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMethodException::get_Message()
 String_t* MissingMethodException_get_Message_m13223 (MissingMethodException_t3947 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
