#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Store
struct X509Store_t3054;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3225;
// System.Collections.ArrayList
struct ArrayList_t2972;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t961;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3017;
// Mono.Security.X509.X509Crl
struct X509Crl_t3040;

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
 void X509Store__ctor_m8252 (X509Store_t3054 * __this, String_t* ___path, bool ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
 X509CertificateCollection_t3225 * X509Store_get_Certificates_m7871 (X509Store_t3054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
 ArrayList_t2972 * X509Store_get_Crls_m7853 (X509Store_t3054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
 ByteU5BU5D_t961* X509Store_Load_m8253 (X509Store_t3054 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
 X509Certificate_t3017 * X509Store_LoadCertificate_m8254 (X509Store_t3054 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
 X509Crl_t3040 * X509Store_LoadCrl_m8255 (X509Store_t3054 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
 bool X509Store_CheckStore_m8256 (X509Store_t3054 * __this, String_t* ___path, bool ___throwException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
 X509CertificateCollection_t3225 * X509Store_BuildCertificatesCollection_m8257 (X509Store_t3054 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
 ArrayList_t2972 * X509Store_BuildCrlsCollection_m8258 (X509Store_t3054 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
