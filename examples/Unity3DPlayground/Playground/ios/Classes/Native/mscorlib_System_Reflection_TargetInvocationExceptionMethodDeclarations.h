#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t3662;
// System.Exception
struct Exception_t115;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
 void TargetInvocationException__ctor_m11571 (TargetInvocationException_t3662 * __this, Exception_t115 * ___inner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void TargetInvocationException__ctor_m11572 (TargetInvocationException_t3662 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
