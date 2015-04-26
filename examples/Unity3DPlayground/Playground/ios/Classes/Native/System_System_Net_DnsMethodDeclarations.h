#pragma once

// System.Net.Dns
struct Dns_t1622;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t150;
// System.Net.IPHostEntry
struct IPHostEntry_t1623;

// System.Void System.Net.Dns::.cctor()
 void Dns__cctor_m4826 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
 bool Dns_GetHostByName_internal_m4827 (Object_t * __this/* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t150** ___h_aliases, StringU5BU5D_t150** ___h_addr_list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
 IPHostEntry_t1623 * Dns_hostent_to_IPHostEntry_m4828 (Object_t * __this/* static, unused */, String_t* ___h_name, StringU5BU5D_t150* ___h_aliases, StringU5BU5D_t150* ___h_addrlist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
 IPHostEntry_t1623 * Dns_GetHostByName_m4829 (Object_t * __this/* static, unused */, String_t* ___hostName, MethodInfo* method) IL2CPP_METHOD_ATTR;
