#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Exception
struct Exception_t115;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Text.StringBuilder
struct StringBuilder_t399;
// System.Reflection.MethodBase
struct MethodBase_t2717;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Exception::.ctor()
 void Exception__ctor_m8799 (Exception_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
 void Exception__ctor_m356 (Exception_t115 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Exception__ctor_m6273 (Exception_t115 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
 void Exception__ctor_m6272 (Exception_t115 * __this, String_t* ___message, Exception_t115 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
 Exception_t115 * Exception_get_InnerException_m6177 (Exception_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
 void Exception_set_HResult_m6271 (Exception_t115 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
 String_t* Exception_get_ClassName_m9746 (Exception_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
 String_t* Exception_get_Message_m2100 (Exception_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
 String_t* Exception_get_Source_m6178 (Exception_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
 String_t* Exception_get_StackTrace_m6179 (Exception_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Exception_GetObjectData_m6176 (Exception_t115 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
 String_t* Exception_ToString_m6175 (Exception_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
 void Exception_GetFullNameForStackTrace_m9747 (Exception_t115 * __this, StringBuilder_t399 * ___sb, MethodBase_t2717 * ___mi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
 Type_t * Exception_GetType_m6180 (Exception_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
