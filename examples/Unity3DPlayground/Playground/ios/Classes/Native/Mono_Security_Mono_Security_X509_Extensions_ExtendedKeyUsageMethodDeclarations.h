#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct ExtendedKeyUsageExtension_t3284;
// System.Collections.ArrayList
struct ArrayList_t2972;
// Mono.Security.X509.X509Extension
struct X509Extension_t3041;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
 void ExtendedKeyUsageExtension__ctor_m8269 (ExtendedKeyUsageExtension_t3284 * __this, X509Extension_t3041 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Decode()
 void ExtendedKeyUsageExtension_Decode_m8270 (ExtendedKeyUsageExtension_t3284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Encode()
 void ExtendedKeyUsageExtension_Encode_m8271 (ExtendedKeyUsageExtension_t3284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::get_KeyPurpose()
 ArrayList_t2972 * ExtendedKeyUsageExtension_get_KeyPurpose_m8272 (ExtendedKeyUsageExtension_t3284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::ToString()
 String_t* ExtendedKeyUsageExtension_ToString_m8273 (ExtendedKeyUsageExtension_t3284 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
