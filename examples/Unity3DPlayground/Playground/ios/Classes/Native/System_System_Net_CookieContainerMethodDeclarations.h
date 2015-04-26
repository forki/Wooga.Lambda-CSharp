#pragma once

// System.Net.CookieContainer
struct CookieContainer_t1611;
// System.Net.Cookie
struct Cookie_t1606;
// System.String
struct String_t;
// System.Uri
struct Uri_t1041;
// System.Net.CookieCollection
struct CookieCollection_t1609;

// System.Void System.Net.CookieContainer::.ctor()
 void CookieContainer__ctor_m4774 (CookieContainer_t1611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::AddCookie(System.Net.Cookie)
 void CookieContainer_AddCookie_m4775 (CookieContainer_t1611 * __this, Cookie_t1606 * ___cookie, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::CountDomain(System.String)
 int32_t CookieContainer_CountDomain_m4776 (CookieContainer_t1611 * __this, String_t* ___domain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::RemoveOldest(System.String)
 void CookieContainer_RemoveOldest_m4777 (CookieContainer_t1611 * __this, String_t* ___domain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::CheckExpiration()
 void CookieContainer_CheckExpiration_m4778 (CookieContainer_t1611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Cook(System.Uri,System.Net.Cookie)
 void CookieContainer_Cook_m4779 (CookieContainer_t1611 * __this, Uri_t1041 * ___uri, Cookie_t1606 * ___cookie, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.Cookie)
 void CookieContainer_Add_m4780 (CookieContainer_t1611 * __this, Uri_t1041 * ___uri, Cookie_t1606 * ___cookie, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
 String_t* CookieContainer_GetCookieHeader_m4781 (CookieContainer_t1611 * __this, Uri_t1041 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::CheckDomain(System.String,System.String,System.Boolean)
 bool CookieContainer_CheckDomain_m4782 (Object_t * __this/* static, unused */, String_t* ___domain, String_t* ___host, bool ___exact, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.CookieContainer::GetCookies(System.Uri)
 CookieCollection_t1609 * CookieContainer_GetCookies_m4783 (CookieContainer_t1611 * __this, Uri_t1041 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::IsNullOrEmpty(System.String)
 bool CookieContainer_IsNullOrEmpty_m4784 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
