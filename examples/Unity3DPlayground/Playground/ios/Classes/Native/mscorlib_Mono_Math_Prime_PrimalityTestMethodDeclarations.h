#pragma once

// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t2094;
// System.Object
struct Object_t;
// Mono.Math.BigInteger
struct BigInteger_t2095;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
 void PrimalityTest__ctor_m11965 (PrimalityTest_t2094 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
 bool PrimalityTest_Invoke_m11966 (PrimalityTest_t2094 * __this, BigInteger_t2095 * ___bi, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
 Object_t * PrimalityTest_BeginInvoke_m11967 (PrimalityTest_t2094 * __this, BigInteger_t2095 * ___bi, int32_t ___confidence, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
 bool PrimalityTest_EndInvoke_m11968 (PrimalityTest_t2094 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
