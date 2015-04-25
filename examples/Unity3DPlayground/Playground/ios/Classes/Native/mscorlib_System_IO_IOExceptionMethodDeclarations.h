#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.IOException
struct IOException_t3386;
// System.String
struct String_t;
// System.Exception
struct Exception_t115;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.IOException::.ctor()
 void IOException__ctor_m10880 (IOException_t3386 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String)
 void IOException__ctor_m10881 (IOException_t3386 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
 void IOException__ctor_m8942 (IOException_t3386 * __this, String_t* ___message, Exception_t115 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void IOException__ctor_m10882 (IOException_t3386 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Int32)
 void IOException__ctor_m10883 (IOException_t3386 * __this, String_t* ___message, int32_t ___hresult, MethodInfo* method) IL2CPP_METHOD_ATTR;
