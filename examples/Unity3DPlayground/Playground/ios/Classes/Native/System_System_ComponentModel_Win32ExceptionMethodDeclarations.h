#pragma once

// System.ComponentModel.Win32Exception
struct Win32Exception_t1553;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ComponentModel.Win32Exception::.ctor()
 void Win32Exception__ctor_m4460 (Win32Exception_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
 void Win32Exception__ctor_m4461 (Win32Exception_t1553 * __this, int32_t ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
 void Win32Exception__ctor_m4462 (Win32Exception_t1553 * __this, int32_t ___error, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Win32Exception__ctor_m4463 (Win32Exception_t1553 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.Win32Exception::get_NativeErrorCode()
 int32_t Win32Exception_get_NativeErrorCode_m4464 (Win32Exception_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Win32Exception_GetObjectData_m4465 (Win32Exception_t1553 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Win32Exception::W32ErrorMessage(System.Int32)
 String_t* Win32Exception_W32ErrorMessage_m4466 (Object_t * __this/* static, unused */, int32_t ___error_code, MethodInfo* method) IL2CPP_METHOD_ATTR;
