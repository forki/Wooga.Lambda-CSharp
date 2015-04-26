#pragma once

// Mono.Security.X509.X501
struct X501_t1884;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1702;
// System.Text.StringBuilder
struct StringBuilder_t404;

// System.Void Mono.Security.X509.X501::.cctor()
 void X501__cctor_m6875 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
 String_t* X501_ToString_m6876 (Object_t * __this/* static, unused */, ASN1_t1702 * ___seq, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
 String_t* X501_ToString_m6482 (Object_t * __this/* static, unused */, ASN1_t1702 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
 void X501_AppendEntry_m6877 (Object_t * __this/* static, unused */, StringBuilder_t404 * ___sb, ASN1_t1702 * ___entry, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;
