#pragma once

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t1572;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1569;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1565;
// System.String[]
struct StringU5BU5D_t150;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
 void LocalCertificateSelectionCallback__ctor_m6082 (LocalCertificateSelectionCallback_t1572 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
 X509Certificate_t1569 * LocalCertificateSelectionCallback_Invoke_m6083 (LocalCertificateSelectionCallback_t1572 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1565 * ___localCertificates, X509Certificate_t1569 * ___remoteCertificate, StringU5BU5D_t150* ___acceptableIssuers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
 Object_t * LocalCertificateSelectionCallback_BeginInvoke_m6084 (LocalCertificateSelectionCallback_t1572 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1565 * ___localCertificates, X509Certificate_t1569 * ___remoteCertificate, StringU5BU5D_t150* ___acceptableIssuers, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
 X509Certificate_t1569 * LocalCertificateSelectionCallback_EndInvoke_m6085 (LocalCertificateSelectionCallback_t1572 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
