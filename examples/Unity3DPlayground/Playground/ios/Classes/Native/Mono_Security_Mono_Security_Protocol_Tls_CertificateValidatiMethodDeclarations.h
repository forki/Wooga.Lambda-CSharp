#pragma once

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1840;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// System.Int32[]
struct Int32U5BU5D_t1424;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
 void CertificateValidationCallback__ctor_m6222 (CertificateValidationCallback_t1840 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool CertificateValidationCallback_Invoke_m7454 (CertificateValidationCallback_t1840 * __this, X509Certificate_t1569 * ___certificate, Int32U5BU5D_t1424* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
 Object_t * CertificateValidationCallback_BeginInvoke_m7455 (CertificateValidationCallback_t1840 * __this, X509Certificate_t1569 * ___certificate, Int32U5BU5D_t1424* ___certificateErrors, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
 bool CertificateValidationCallback_EndInvoke_m7456 (CertificateValidationCallback_t1840 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
