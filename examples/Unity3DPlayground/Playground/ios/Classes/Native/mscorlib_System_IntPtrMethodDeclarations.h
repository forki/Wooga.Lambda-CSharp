#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IntPtr
struct IntPtr_t31;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Void
#include "mscorlib_System_Void.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.IntPtr::.ctor(System.Int32)
 void IntPtr__ctor_m6205 (IntPtr_t31* __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Int64)
 void IntPtr__ctor_m9503 (IntPtr_t31* __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Void*)
 void IntPtr__ctor_m9504 (IntPtr_t31* __this, void* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void IntPtr__ctor_m9505 (IntPtr_t31* __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void IntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m9506 (IntPtr_t31* __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::get_Size()
 int32_t IntPtr_get_Size_m9507 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::Equals(System.Object)
 bool IntPtr_Equals_m9508 (IntPtr_t31* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::GetHashCode()
 int32_t IntPtr_GetHashCode_m9509 (IntPtr_t31* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IntPtr::ToInt64()
 int64_t IntPtr_ToInt64_m9510 (IntPtr_t31* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString()
 String_t* IntPtr_ToString_m9511 (IntPtr_t31* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString(System.String)
 String_t* IntPtr_ToString_m9512 (IntPtr_t31* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
 bool IntPtr_op_Equality_m6275 (Object_t * __this/* static, unused */, IntPtr_t31 ___value1, IntPtr_t31 ___value2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
 bool IntPtr_op_Inequality_m6206 (Object_t * __this/* static, unused */, IntPtr_t31 ___value1, IntPtr_t31 ___value2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
 IntPtr_t31 IntPtr_op_Explicit_m9513 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
 IntPtr_t31 IntPtr_op_Explicit_m9514 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
 IntPtr_t31 IntPtr_op_Explicit_m9515 (Object_t * __this/* static, unused */, void* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
 int32_t IntPtr_op_Explicit_m6274 (Object_t * __this/* static, unused */, IntPtr_t31 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
 void* IntPtr_op_Explicit_m9516 (Object_t * __this/* static, unused */, IntPtr_t31 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
