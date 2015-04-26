#pragma once

// System.ArgumentException
struct ArgumentException_t488;
// System.String
struct String_t;
// System.Exception
struct Exception_t121;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentException::.ctor()
 void ArgumentException__ctor_m11219 (ArgumentException_t488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
 void ArgumentException__ctor_m2340 (ArgumentException_t488 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
 void ArgumentException__ctor_m6563 (ArgumentException_t488 * __this, String_t* ___message, Exception_t121 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
 void ArgumentException__ctor_m6150 (ArgumentException_t488 * __this, String_t* ___message, String_t* ___paramName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
 void ArgumentException__ctor_m11220 (ArgumentException_t488 * __this, String_t* ___message, String_t* ___paramName, Exception_t121 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentException__ctor_m11221 (ArgumentException_t488 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_ParamName()
 String_t* ArgumentException_get_ParamName_m11222 (ArgumentException_t488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_Message()
 String_t* ArgumentException_get_Message_m11223 (ArgumentException_t488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentException_GetObjectData_m11224 (ArgumentException_t488 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
