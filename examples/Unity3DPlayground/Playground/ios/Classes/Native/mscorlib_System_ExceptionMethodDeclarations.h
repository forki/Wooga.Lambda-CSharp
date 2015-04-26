#pragma once

// System.Exception
struct Exception_t121;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Text.StringBuilder
struct StringBuilder_t404;
// System.Reflection.MethodBase
struct MethodBase_t1367;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Exception::.ctor()
 void Exception__ctor_m7466 (Exception_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
 void Exception__ctor_m361 (Exception_t121 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Exception__ctor_m4169 (Exception_t121 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
 void Exception__ctor_m4168 (Exception_t121 * __this, String_t* ___message, Exception_t121 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
 Exception_t121 * Exception_get_InnerException_m4064 (Exception_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
 void Exception_set_HResult_m4167 (Exception_t121 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
 String_t* Exception_get_ClassName_m8351 (Exception_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
 String_t* Exception_get_Message_m2106 (Exception_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
 String_t* Exception_get_Source_m4065 (Exception_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
 String_t* Exception_get_StackTrace_m4066 (Exception_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Exception_GetObjectData_m4063 (Exception_t121 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
 String_t* Exception_ToString_m4062 (Exception_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
 void Exception_GetFullNameForStackTrace_m8352 (Exception_t121 * __this, StringBuilder_t404 * ___sb, MethodBase_t1367 * ___mi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
 Type_t * Exception_GetType_m4067 (Exception_t121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
