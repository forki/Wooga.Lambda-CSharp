#pragma once

// System.Net.DigestClient
struct DigestClient_t1621;
// System.Collections.Hashtable
struct Hashtable_t1534;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t1599;
// System.Net.WebRequest
struct WebRequest_t1065;
// System.Net.ICredentials
struct ICredentials_t1600;

// System.Void System.Net.DigestClient::.ctor()
 void DigestClient__ctor_m4819 (DigestClient_t1621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::.cctor()
 void DigestClient__cctor_m4820 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.DigestClient::get_Cache()
 Hashtable_t1534 * DigestClient_get_Cache_m4821 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::CheckExpired(System.Int32)
 void DigestClient_CheckExpired_m4822 (Object_t * __this/* static, unused */, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t1599 * DigestClient_Authenticate_m4823 (DigestClient_t1621 * __this, String_t* ___challenge, WebRequest_t1065 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t1599 * DigestClient_PreAuthenticate_m4824 (DigestClient_t1621 * __this, WebRequest_t1065 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestClient::get_AuthenticationType()
 String_t* DigestClient_get_AuthenticationType_m4825 (DigestClient_t1621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
