#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Validation.Requires
struct Requires_t1073;
// System.String
struct String_t;

// System.Void Validation.Requires::FailArgumentNullException(System.String)
 void Requires_FailArgumentNullException_m2920 (Object_t * __this/* static, unused */, String_t* ___parameterName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Validation.Requires::Range(System.Boolean,System.String,System.String)
 void Requires_Range_m2921 (Object_t * __this/* static, unused */, bool ___condition, String_t* ___parameterName, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Validation.Requires::FailRange(System.String,System.String)
 void Requires_FailRange_m2922 (Object_t * __this/* static, unused */, String_t* ___parameterName, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Validation.Requires::Argument(System.Boolean,System.String,System.String)
 void Requires_Argument_m2923 (Object_t * __this/* static, unused */, bool ___condition, String_t* ___parameterName, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Validation.Requires::Argument(System.Boolean)
 void Requires_Argument_m2924 (Object_t * __this/* static, unused */, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
