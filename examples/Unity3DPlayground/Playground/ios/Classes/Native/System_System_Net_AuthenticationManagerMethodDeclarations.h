#pragma once

// System.Net.AuthenticationManager
struct AuthenticationManager_t1598;
// System.Net.Authorization
struct Authorization_t1599;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t1065;
// System.Net.ICredentials
struct ICredentials_t1600;

// System.Void System.Net.AuthenticationManager::.cctor()
 void AuthenticationManager__cctor_m4686 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
 void AuthenticationManager_EnsureModules_m4687 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t1599 * AuthenticationManager_Authenticate_m4688 (Object_t * __this/* static, unused */, String_t* ___challenge, WebRequest_t1065 * ___request, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t1599 * AuthenticationManager_DoAuthenticate_m4689 (Object_t * __this/* static, unused */, String_t* ___challenge, WebRequest_t1065 * ___request, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t1599 * AuthenticationManager_PreAuthenticate_m4690 (Object_t * __this/* static, unused */, WebRequest_t1065 * ___request, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
