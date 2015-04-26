#pragma once

// System.Net.BasicClient
struct BasicClient_t1602;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t1599;
// System.Net.WebRequest
struct WebRequest_t1065;
// System.Net.ICredentials
struct ICredentials_t1600;
// System.Byte[]
struct ByteU5BU5D_t1071;

// System.Void System.Net.BasicClient::.ctor()
 void BasicClient__ctor_m4698 (BasicClient_t1602 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t1599 * BasicClient_Authenticate_m4699 (BasicClient_t1602 * __this, String_t* ___challenge, WebRequest_t1065 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
 ByteU5BU5D_t1071* BasicClient_GetBytes_m4700 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t1599 * BasicClient_InternalAuthenticate_m4701 (Object_t * __this/* static, unused */, WebRequest_t1065 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t1599 * BasicClient_PreAuthenticate_m4702 (BasicClient_t1602 * __this, WebRequest_t1065 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
 String_t* BasicClient_get_AuthenticationType_m4703 (BasicClient_t1602 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
