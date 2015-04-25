#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ThrowHelper
struct ThrowHelper_t1070;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.ExceptionArgument
#include "Rackspace_Collections_Immutable_System_ExceptionArgument.h"

// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
 void ThrowHelper_ThrowArgumentNullException_m2910 (Object_t * __this/* static, unused */, int32_t ___argument, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ThrowHelper::ThrowArgumentException(System.String)
 void ThrowHelper_ThrowArgumentException_m2911 (Object_t * __this/* static, unused */, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
 void ThrowHelper_ThrowArgumentOutOfRangeException_m2912 (Object_t * __this/* static, unused */, int32_t ___argument, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument,System.String)
 void ThrowHelper_ThrowArgumentOutOfRangeException_m2913 (Object_t * __this/* static, unused */, int32_t ___argument, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ThrowHelper::ThrowInvalidOperationException(System.String)
 void ThrowHelper_ThrowInvalidOperationException_m2914 (Object_t * __this/* static, unused */, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ThrowHelper::ThrowKeyNotFoundException()
 void ThrowHelper_ThrowKeyNotFoundException_m2915 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ThrowHelper::ThrowWrongValueTypeArgumentException(System.Object,System.Type)
 void ThrowHelper_ThrowWrongValueTypeArgumentException_m2916 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ThrowHelper::ThrowWrongKeyTypeArgumentException(System.Object,System.Type)
 void ThrowHelper_ThrowWrongKeyTypeArgumentException_m2917 (Object_t * __this/* static, unused */, Object_t * ___key, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ThrowHelper::ThrowNotSupportedException(System.String)
 void ThrowHelper_ThrowNotSupportedException_m2918 (Object_t * __this/* static, unused */, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
