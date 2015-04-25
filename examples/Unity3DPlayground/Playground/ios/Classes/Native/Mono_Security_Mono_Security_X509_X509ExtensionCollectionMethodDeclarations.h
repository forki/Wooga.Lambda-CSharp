#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3228;
// Mono.Security.X509.X509Extension
struct X509Extension_t3041;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t3028;
// System.Collections.IEnumerator
struct IEnumerator_t51;

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
 void X509ExtensionCollection__ctor_m8248 (X509ExtensionCollection_t3228 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
 void X509ExtensionCollection__ctor_m8249 (X509ExtensionCollection_t3228 * __this, ASN1_t3028 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m8250 (X509ExtensionCollection_t3228 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
 int32_t X509ExtensionCollection_IndexOf_m8251 (X509ExtensionCollection_t3228 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
 X509Extension_t3041 * X509ExtensionCollection_get_Item_m7845 (X509ExtensionCollection_t3228 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
