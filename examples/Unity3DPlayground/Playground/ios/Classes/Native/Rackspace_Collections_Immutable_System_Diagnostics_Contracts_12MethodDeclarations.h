#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.Contracts.Internal.ContractHelper
struct ContractHelper_t1063;
// System.String
struct String_t;
// System.Exception
struct Exception_t115;
// System.Diagnostics.Contracts.ContractFailureKind
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_11.h"

// System.String System.Diagnostics.Contracts.Internal.ContractHelper::RaiseContractFailedEvent(System.Diagnostics.Contracts.ContractFailureKind,System.String,System.String,System.Exception)
 String_t* ContractHelper_RaiseContractFailedEvent_m2878 (Object_t * __this/* static, unused */, int32_t ___failureKind, String_t* ___userMessage, String_t* ___conditionText, Exception_t115 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Internal.ContractHelper::TriggerFailure(System.Diagnostics.Contracts.ContractFailureKind,System.String,System.String,System.String,System.Exception)
 void ContractHelper_TriggerFailure_m2879 (Object_t * __this/* static, unused */, int32_t ___kind, String_t* ___displayMessage, String_t* ___userMessage, String_t* ___conditionText, Exception_t115 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
