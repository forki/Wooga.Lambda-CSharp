#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.Contracts.Contract
struct Contract_t1060;
// System.String
struct String_t;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1061;

// System.Void System.Diagnostics.Contracts.Contract::Assume(System.Boolean)
 void Contract_Assume_m2865 (Object_t * __this/* static, unused */, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Contract::Assume(System.Boolean,System.String)
 void Contract_Assume_m2866 (Object_t * __this/* static, unused */, bool ___condition, String_t* ___userMessage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Contract::Assert(System.Boolean)
 void Contract_Assert_m2867 (Object_t * __this/* static, unused */, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Contract::Assert(System.Boolean,System.String)
 void Contract_Assert_m2868 (Object_t * __this/* static, unused */, bool ___condition, String_t* ___userMessage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Contract::Requires(System.Boolean)
 void Contract_Requires_m2869 (Object_t * __this/* static, unused */, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Contract::Requires(System.Boolean,System.String)
 void Contract_Requires_m2870 (Object_t * __this/* static, unused */, bool ___condition, String_t* ___userMessage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Contract::Ensures(System.Boolean)
 void Contract_Ensures_m2871 (Object_t * __this/* static, unused */, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Contract::Ensures(System.Boolean,System.String)
 void Contract_Ensures_m2872 (Object_t * __this/* static, unused */, bool ___condition, String_t* ___userMessage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Contract::Invariant(System.Boolean)
 void Contract_Invariant_m2873 (Object_t * __this/* static, unused */, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Contract::Invariant(System.Boolean,System.String)
 void Contract_Invariant_m2874 (Object_t * __this/* static, unused */, bool ___condition, String_t* ___userMessage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Contracts.Contract::ForAll(System.Int32,System.Int32,System.Predicate`1<System.Int32>)
 bool Contract_ForAll_m2875 (Object_t * __this/* static, unused */, int32_t ___fromInclusive, int32_t ___toExclusive, Predicate_1_t1061 * ___predicate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Contracts.Contract::Exists(System.Int32,System.Int32,System.Predicate`1<System.Int32>)
 bool Contract_Exists_m2876 (Object_t * __this/* static, unused */, int32_t ___fromInclusive, int32_t ___toExclusive, Predicate_1_t1061 * ___predicate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Contracts.Contract::EndContractBlock()
 void Contract_EndContractBlock_m2877 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
