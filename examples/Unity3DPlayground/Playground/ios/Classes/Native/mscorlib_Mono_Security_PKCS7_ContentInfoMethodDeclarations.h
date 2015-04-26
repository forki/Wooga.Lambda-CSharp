#pragma once

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t2130;
// Mono.Security.ASN1
struct ASN1_t2117;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
 void ContentInfo__ctor_m8814 (ContentInfo_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
 void ContentInfo__ctor_m8815 (ContentInfo_t2130 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
 void ContentInfo__ctor_m8816 (ContentInfo_t2130 * __this, ByteU5BU5D_t1071* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
 void ContentInfo__ctor_m8817 (ContentInfo_t2130 * __this, ASN1_t2117 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
 ASN1_t2117 * ContentInfo_get_Content_m8818 (ContentInfo_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
 void ContentInfo_set_Content_m8819 (ContentInfo_t2130 * __this, ASN1_t2117 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
 String_t* ContentInfo_get_ContentType_m8820 (ContentInfo_t2130 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
