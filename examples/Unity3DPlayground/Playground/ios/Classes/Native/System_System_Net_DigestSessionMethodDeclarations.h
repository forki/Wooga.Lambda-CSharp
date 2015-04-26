#pragma once

// System.Net.DigestSession
struct DigestSession_t1620;
// System.String
struct String_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1056;
// System.Net.Authorization
struct Authorization_t1599;
// System.Net.WebRequest
struct WebRequest_t1065;
// System.Net.ICredentials
struct ICredentials_t1600;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.DigestSession::.ctor()
 void DigestSession__ctor_m4804 (DigestSession_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestSession::.cctor()
 void DigestSession__cctor_m4805 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Algorithm()
 String_t* DigestSession_get_Algorithm_m4806 (DigestSession_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Realm()
 String_t* DigestSession_get_Realm_m4807 (DigestSession_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Nonce()
 String_t* DigestSession_get_Nonce_m4808 (DigestSession_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Opaque()
 String_t* DigestSession_get_Opaque_m4809 (DigestSession_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_QOP()
 String_t* DigestSession_get_QOP_m4810 (DigestSession_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_CNonce()
 String_t* DigestSession_get_CNonce_m4811 (DigestSession_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestSession::Parse(System.String)
 bool DigestSession_Parse_m4812 (DigestSession_t1620 * __this, String_t* ___challenge, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HashToHexString(System.String)
 String_t* DigestSession_HashToHexString_m4813 (DigestSession_t1620 * __this, String_t* ___toBeHashed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA1(System.String,System.String)
 String_t* DigestSession_HA1_m4814 (DigestSession_t1620 * __this, String_t* ___username, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
 String_t* DigestSession_HA2_m4815 (DigestSession_t1620 * __this, HttpWebRequest_t1056 * ___webRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
 String_t* DigestSession_Response_m4816 (DigestSession_t1620 * __this, String_t* ___username, String_t* ___password, HttpWebRequest_t1056 * ___webRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t1599 * DigestSession_Authenticate_m4817 (DigestSession_t1620 * __this, WebRequest_t1065 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.DigestSession::get_LastUse()
 DateTime_t1141  DigestSession_get_LastUse_m4818 (DigestSession_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
