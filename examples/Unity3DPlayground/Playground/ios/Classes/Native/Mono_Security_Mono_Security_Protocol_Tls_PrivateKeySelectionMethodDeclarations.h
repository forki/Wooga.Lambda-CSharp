#pragma once

// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1839;
// System.Object
struct Object_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1568;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
 void PrivateKeySelectionCallback__ctor_m6220 (PrivateKeySelectionCallback_t1839 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t1568 * PrivateKeySelectionCallback_Invoke_m7463 (PrivateKeySelectionCallback_t1839 * __this, X509Certificate_t1569 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
 Object_t * PrivateKeySelectionCallback_BeginInvoke_m7464 (PrivateKeySelectionCallback_t1839 * __this, X509Certificate_t1569 * ___certificate, String_t* ___targetHost, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
 AsymmetricAlgorithm_t1568 * PrivateKeySelectionCallback_EndInvoke_m7465 (PrivateKeySelectionCallback_t1839 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
