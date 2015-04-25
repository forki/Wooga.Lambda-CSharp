#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Debug
struct Debug_t2542;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t30;
struct Object_t30_marshaled;
// System.Exception
struct Exception_t115;
// System.Object
struct Object_t;

// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
 void Debug_Internal_Log_m5716 (Object_t * __this/* static, unused */, int32_t ___level, String_t* ___msg, Object_t30 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
 void Debug_Internal_LogException_m5717 (Object_t * __this/* static, unused */, Exception_t115 * ___exception, Object_t30 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
 void Debug_Log_m395 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
 void Debug_LogError_m378 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
 void Debug_LogError_m2101 (Object_t * __this/* static, unused */, Object_t * ___message, Object_t30 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
 void Debug_LogException_m5718 (Object_t * __this/* static, unused */, Exception_t115 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
 void Debug_LogException_m1959 (Object_t * __this/* static, unused */, Exception_t115 * ___exception, Object_t30 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
 void Debug_LogWarning_m5719 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
 void Debug_LogWarning_m2304 (Object_t * __this/* static, unused */, Object_t * ___message, Object_t30 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
