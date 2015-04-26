#pragma once

// System.Threading.ExecutionContext
struct ExecutionContext_t2345;
// System.Security.SecurityContext
struct SecurityContext_t2481;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
 void ExecutionContext__ctor_m11121 (ExecutionContext_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
 void ExecutionContext__ctor_m11122 (ExecutionContext_t2345 * __this, ExecutionContext_t2345 * ___ec, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ExecutionContext__ctor_m11123 (ExecutionContext_t2345 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
 ExecutionContext_t2345 * ExecutionContext_Capture_m11124 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ExecutionContext_GetObjectData_m11125 (ExecutionContext_t2345 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
 SecurityContext_t2481 * ExecutionContext_get_SecurityContext_m11126 (ExecutionContext_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
 void ExecutionContext_set_SecurityContext_m11127 (ExecutionContext_t2345 * __this, SecurityContext_t2481 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
 bool ExecutionContext_get_FlowSuppressed_m11128 (ExecutionContext_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
 bool ExecutionContext_IsFlowSuppressed_m11129 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
