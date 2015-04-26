#pragma once

// Wooga.Lambda.Network.Transport.WebRequestTransport
struct WebRequestTransport_t1055;
// Wooga.Lambda.Network.HttpClient
struct HttpClient_t144;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1056;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>
struct Async_1_t142;
// Wooga.Lambda.Control.Concurrent.Async`1<System.Net.HttpWebResponse>
struct Async_1_t1057;
// System.Net.HttpWebResponse
struct HttpWebResponse_t1046;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>
struct Async_1_t1058;
// System.IO.Stream
struct Stream_t1049;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1051;
// Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>
struct ImmutableList_1_t1038;
// Wooga.Lambda.Data.ImmutableList`1<System.Byte>
struct ImmutableList_1_t1033;
// Wooga.Lambda.Network.HttpRequest
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpRequest.h"
// Wooga.Lambda.Network.HttpResponse
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpResponse.h"
// Wooga.Lambda.Network.HttpHeader
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpHeader.h"

// Wooga.Lambda.Network.HttpClient Wooga.Lambda.Network.Transport.WebRequestTransport::CreateHttpClient()
 HttpClient_t144 * WebRequestTransport_CreateHttpClient_m395 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebRequest Wooga.Lambda.Network.Transport.WebRequestTransport::AsWebRequest(Wooga.Lambda.Network.HttpRequest)
 HttpWebRequest_t1056 * WebRequestTransport_AsWebRequest_m2965 (Object_t * __this/* static, unused */, HttpRequest_t1029  ___httpRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.Transport.WebRequestTransport::RequestHttpResponse(Wooga.Lambda.Network.HttpRequest)
 Async_1_t142 * WebRequestTransport_RequestHttpResponse_m2966 (Object_t * __this/* static, unused */, HttpRequest_t1029  ___httpRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<System.Net.HttpWebResponse> Wooga.Lambda.Network.Transport.WebRequestTransport::GetWebResponse(Wooga.Lambda.Network.HttpRequest)
 Async_1_t1057 * WebRequestTransport_GetWebResponse_m2967 (Object_t * __this/* static, unused */, HttpRequest_t1029  ___httpRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.Transport.WebRequestTransport::AsHttpResponse(System.Net.HttpWebResponse,Wooga.Lambda.Network.HttpRequest)
 Async_1_t142 * WebRequestTransport_AsHttpResponse_m2968 (Object_t * __this/* static, unused */, HttpWebResponse_t1046 * ___response, HttpRequest_t1029  ___httpRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>> Wooga.Lambda.Network.Transport.WebRequestTransport::ReadEntireStream(System.IO.Stream)
 Async_1_t1058 * WebRequestTransport_ReadEntireStream_m2969 (Object_t * __this/* static, unused */, Stream_t1049 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection Wooga.Lambda.Network.Transport.WebRequestTransport::ToWebHeaders(Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>)
 WebHeaderCollection_t1051 * WebRequestTransport_ToWebHeaders_m2970 (Object_t * __this/* static, unused */, ImmutableList_1_t1038 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader> Wooga.Lambda.Network.Transport.WebRequestTransport::OfWebHeaders(System.Net.WebHeaderCollection)
 ImmutableList_1_t1038 * WebRequestTransport_OfWebHeaders_m2971 (Object_t * __this/* static, unused */, WebHeaderCollection_t1051 * ___webHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.Transport.WebRequestTransport::<CreateHttpClient>m__0(Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest)
 HttpResponse_t1030  WebRequestTransport_U3CCreateHttpClientU3Em__0_m2972 (Object_t * __this/* static, unused */, HttpClient_t144 * ___c, HttpRequest_t1029  ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<System.Byte> Wooga.Lambda.Network.Transport.WebRequestTransport::<AsWebRequest>m__1(Wooga.Lambda.Data.ImmutableList`1<System.Byte>)
 ImmutableList_1_t1033 * WebRequestTransport_U3CAsWebRequestU3Em__1_m2973 (Object_t * __this/* static, unused */, ImmutableList_1_t1033 * ____, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection Wooga.Lambda.Network.Transport.WebRequestTransport::<ToWebHeaders>m__2(System.Net.WebHeaderCollection,Wooga.Lambda.Network.HttpHeader)
 WebHeaderCollection_t1051 * WebRequestTransport_U3CToWebHeadersU3Em__2_m2974 (Object_t * __this/* static, unused */, WebHeaderCollection_t1051 * ___headers, HttpHeader_t1034  ___header, MethodInfo* method) IL2CPP_METHOD_ATTR;
