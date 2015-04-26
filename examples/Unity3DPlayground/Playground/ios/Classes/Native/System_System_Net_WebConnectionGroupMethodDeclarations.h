#pragma once

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1664;
// System.Collections.Queue
struct Queue_t1585;
// System.Net.ServicePoint
struct ServicePoint_t1616;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t1654;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1056;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
 void WebConnectionGroup__ctor_m5269 (WebConnectionGroup_t1664 * __this, ServicePoint_t1616 * ___sPoint, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
 WebConnection_t1654 * WebConnectionGroup_GetConnection_m5270 (WebConnectionGroup_t1664 * __this, HttpWebRequest_t1056 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
 void WebConnectionGroup_PrepareSharingNtlm_m5271 (Object_t * __this/* static, unused */, WebConnection_t1654 * ___cnc, HttpWebRequest_t1056 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
 WebConnection_t1654 * WebConnectionGroup_CreateOrReuseConnection_m5272 (WebConnectionGroup_t1664 * __this, HttpWebRequest_t1056 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
 Queue_t1585 * WebConnectionGroup_get_Queue_m5273 (WebConnectionGroup_t1664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
