#pragma once

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1871;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1667;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1668;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
 void CertificateValidationCallback2__ctor_m6433 (CertificateValidationCallback2_t1871 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t1667 * CertificateValidationCallback2_Invoke_m7457 (CertificateValidationCallback2_t1871 * __this, X509CertificateCollection_t1668 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
 Object_t * CertificateValidationCallback2_BeginInvoke_m7458 (CertificateValidationCallback2_t1871 * __this, X509CertificateCollection_t1668 * ___collection, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
 ValidationResult_t1667 * CertificateValidationCallback2_EndInvoke_m7459 (CertificateValidationCallback2_t1871 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
