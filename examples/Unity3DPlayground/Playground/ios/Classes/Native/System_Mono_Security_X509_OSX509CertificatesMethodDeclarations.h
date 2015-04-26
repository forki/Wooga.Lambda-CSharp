#pragma once

// Mono.Security.X509.OSX509Certificates
struct OSX509Certificates_t1688;
// System.Byte[]
struct ByteU5BU5D_t1071;
// System.IntPtr[]
struct IntPtrU5BU5D_t1187;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1668;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Security.X509.OSX509Certificates/SecTrustResult
#include "System_Mono_Security_X509_OSX509Certificates_SecTrustResult.h"

// System.Void Mono.Security.X509.OSX509Certificates::.cctor()
 void OSX509Certificates__cctor_m5396 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecCertificateCreateWithData(System.IntPtr,System.IntPtr)
 IntPtr_t37 OSX509Certificates_SecCertificateCreateWithData_m5397 (Object_t * __this/* static, unused */, IntPtr_t37 ___allocator, IntPtr_t37 ___nsdataRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustCreateWithCertificates(System.IntPtr,System.IntPtr,System.IntPtr&)
 int32_t OSX509Certificates_SecTrustCreateWithCertificates_m5398 (Object_t * __this/* static, unused */, IntPtr_t37 ___certOrCertArray, IntPtr_t37 ___policies, IntPtr_t37* ___sectrustref, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::SecPolicyCreateSSL(System.Int32,System.IntPtr)
 IntPtr_t37 OSX509Certificates_SecPolicyCreateSSL_m5399 (Object_t * __this/* static, unused */, int32_t ___server, IntPtr_t37 ___cfStringHostname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.OSX509Certificates::SecTrustEvaluate(System.IntPtr,Mono.Security.X509.OSX509Certificates/SecTrustResult&)
 int32_t OSX509Certificates_SecTrustEvaluate_m5400 (Object_t * __this/* static, unused */, IntPtr_t37 ___secTrustRef, int32_t* ___secTrustResultTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFDataCreate(System.IntPtr,System.Byte*,System.IntPtr)
 IntPtr_t37 OSX509Certificates_CFDataCreate_m5401 (Object_t * __this/* static, unused */, IntPtr_t37 ___allocator, uint8_t* ___bytes, IntPtr_t37 ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.OSX509Certificates::CFRelease(System.IntPtr)
 void OSX509Certificates_CFRelease_m5402 (Object_t * __this/* static, unused */, IntPtr_t37 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::CFArrayCreate(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
 IntPtr_t37 OSX509Certificates_CFArrayCreate_m5403 (Object_t * __this/* static, unused */, IntPtr_t37 ___allocator, IntPtr_t37 ___values, IntPtr_t37 ___numValues, IntPtr_t37 ___callbacks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::MakeCFData(System.Byte[])
 IntPtr_t37 OSX509Certificates_MakeCFData_m5404 (Object_t * __this/* static, unused */, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Security.X509.OSX509Certificates::FromIntPtrs(System.IntPtr[])
 IntPtr_t37 OSX509Certificates_FromIntPtrs_m5405 (Object_t * __this/* static, unused */, IntPtrU5BU5D_t1187* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
 int32_t OSX509Certificates_TrustEvaluateSsl_m5406 (Object_t * __this/* static, unused */, X509CertificateCollection_t1668 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.OSX509Certificates/SecTrustResult Mono.Security.X509.OSX509Certificates::_TrustEvaluateSsl(Mono.Security.X509.X509CertificateCollection)
 int32_t OSX509Certificates__TrustEvaluateSsl_m5407 (Object_t * __this/* static, unused */, X509CertificateCollection_t1668 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
