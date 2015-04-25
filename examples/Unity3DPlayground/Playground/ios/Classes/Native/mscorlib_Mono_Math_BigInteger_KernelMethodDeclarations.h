#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t3461;
// Mono.Math.BigInteger
struct BigInteger_t3455;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t3462;
// System.UInt32[]
struct UInt32U5BU5D_t3250;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * Kernel_AddSameSign_m9910 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * Kernel_Subtract_m9911 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___big, BigInteger_t3455 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_MinusEq_m9912 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___big, BigInteger_t3455 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_PlusEq_m9913 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
 int32_t Kernel_Compare_m9914 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_SingleByteDivideInPlace_m9915 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_DwordMod_m9916 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
 BigIntegerU5BU5D_t3462* Kernel_DwordDivMod_m9917 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigIntegerU5BU5D_t3462* Kernel_multiByteDivide_m9918 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi1, BigInteger_t3455 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t3455 * Kernel_LeftShift_m9919 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t3455 * Kernel_RightShift_m9920 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
 BigInteger_t3455 * Kernel_MultiplyByDword_m9921 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___n, uint32_t ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
 void Kernel_Multiply_m9922 (Object_t * __this/* static, unused */, UInt32U5BU5D_t3250* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t3250* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t3250* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
 void Kernel_MultiplyMod2p32pmod_m9923 (Object_t * __this/* static, unused */, UInt32U5BU5D_t3250* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t3250* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t3250* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_modInverse_m9924 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * Kernel_modInverse_m9925 (Object_t * __this/* static, unused */, BigInteger_t3455 * ___bi, BigInteger_t3455 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
