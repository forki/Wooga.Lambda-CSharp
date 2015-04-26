#pragma once

// Mono.Math.Prime.PrimalityTests
struct PrimalityTests_t1912;
// Mono.Math.BigInteger
struct BigInteger_t1906;
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"

// System.Int32 Mono.Math.Prime.PrimalityTests::GetSPPRounds(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
 int32_t PrimalityTests_GetSPPRounds_m6743 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___bi, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::RabinMillerTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
 bool PrimalityTests_RabinMillerTest_m6744 (Object_t * __this/* static, unused */, BigInteger_t1906 * ___n, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
