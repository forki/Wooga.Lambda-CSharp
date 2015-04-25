#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.SafeBag
struct SafeBag_t3278;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t3028;

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
 void SafeBag__ctor_m8148 (SafeBag_t3278 * __this, String_t* ___bagOID, ASN1_t3028 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
 String_t* SafeBag_get_BagOID_m8149 (SafeBag_t3278 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
 ASN1_t3028 * SafeBag_get_ASN1_m8150 (SafeBag_t3278 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
