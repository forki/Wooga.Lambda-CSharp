#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t3333;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2983;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.IAsyncResult
struct IAsyncResult_t183;
// System.AsyncCallback
struct AsyncCallback_t184;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
 void CertificateValidationCallback__ctor_m8783 (CertificateValidationCallback_t3333 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool CertificateValidationCallback_Invoke_m8784 (CertificateValidationCallback_t3333 * __this, X509Certificate_t2983 * ___certificate, Int32U5BU5D_t156* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
 Object_t * CertificateValidationCallback_BeginInvoke_m8785 (CertificateValidationCallback_t3333 * __this, X509Certificate_t2983 * ___certificate, Int32U5BU5D_t156* ___certificateErrors, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
 bool CertificateValidationCallback_EndInvoke_m8786 (CertificateValidationCallback_t3333 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
