#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.CompilerServices.ContractHelper
struct ContractHelper_t1064;
// System.String
struct String_t;
// System.Exception
struct Exception_t115;
// System.Diagnostics.Contracts.ContractFailureKind
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_11.h"

// System.String System.Runtime.CompilerServices.ContractHelper::RaiseContractFailedEvent(System.Diagnostics.Contracts.ContractFailureKind,System.String,System.String,System.Exception)
 String_t* ContractHelper_RaiseContractFailedEvent_m2880 (Object_t * __this/* static, unused */, int32_t ___failureKind, String_t* ___userMessage, String_t* ___conditionText, Exception_t115 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.ContractHelper::TriggerFailure(System.Diagnostics.Contracts.ContractFailureKind,System.String,System.String,System.String,System.Exception)
 void ContractHelper_TriggerFailure_m2881 (Object_t * __this/* static, unused */, int32_t ___kind, String_t* ___displayMessage, String_t* ___userMessage, String_t* ___conditionText, Exception_t115 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
