#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3259;
// Mono.Security.ASN1
struct ASN1_t3028;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t961;

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
 void ContentInfo__ctor_m8062 (ContentInfo_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
 void ContentInfo__ctor_m8063 (ContentInfo_t3259 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
 void ContentInfo__ctor_m8064 (ContentInfo_t3259 * __this, ByteU5BU5D_t961* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
 void ContentInfo__ctor_m8065 (ContentInfo_t3259 * __this, ASN1_t3028 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_ASN1()
 ASN1_t3028 * ContentInfo_get_ASN1_m8066 (ContentInfo_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
 ASN1_t3028 * ContentInfo_get_Content_m8067 (ContentInfo_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
 void ContentInfo_set_Content_m8068 (ContentInfo_t3259 * __this, ASN1_t3028 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
 String_t* ContentInfo_get_ContentType_m8069 (ContentInfo_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_ContentType(System.String)
 void ContentInfo_set_ContentType_m8070 (ContentInfo_t3259 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::GetASN1()
 ASN1_t3028 * ContentInfo_GetASN1_m8071 (ContentInfo_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
