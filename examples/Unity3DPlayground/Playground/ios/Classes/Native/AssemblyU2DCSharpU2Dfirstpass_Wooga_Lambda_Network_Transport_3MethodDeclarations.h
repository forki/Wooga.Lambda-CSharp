#pragma once

// Wooga.Lambda.Network.Transport.WebRequestTransport
struct WebRequestTransport_t61;
// Wooga.Lambda.Network.HttpClient
struct HttpClient_t38;
// System.Net.HttpWebRequest
struct HttpWebRequest_t62;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>
struct Async_1_t39;
// Wooga.Lambda.Control.Concurrent.Async`1<System.Net.HttpWebResponse>
struct Async_1_t63;
// System.Net.HttpWebResponse
struct HttpWebResponse_t53;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>
struct Async_1_t64;
// System.IO.Stream
struct Stream_t55;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t57;
// Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>
struct ImmutableList_1_t46;
// Wooga.Lambda.Data.ImmutableList`1<System.Byte>
struct ImmutableList_1_t41;
// Wooga.Lambda.Network.HttpRequest
#include "AssemblyU2DCSharpU2Dfirstpass_Wooga_Lambda_Network_HttpReque.h"
// Wooga.Lambda.Network.HttpResponse
#include "AssemblyU2DCSharpU2Dfirstpass_Wooga_Lambda_Network_HttpRespo.h"
// Wooga.Lambda.Network.HttpHeader
#include "AssemblyU2DCSharpU2Dfirstpass_Wooga_Lambda_Network_HttpHeade.h"

// Wooga.Lambda.Network.HttpClient Wooga.Lambda.Network.Transport.WebRequestTransport::CreateHttpClient()
 HttpClient_t38 * WebRequestTransport_CreateHttpClient_m181 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebRequest Wooga.Lambda.Network.Transport.WebRequestTransport::AsWebRequest(Wooga.Lambda.Network.HttpRequest)
 HttpWebRequest_t62 * WebRequestTransport_AsWebRequest_m182 (Object_t * __this/* static, unused */, HttpRequest_t35  ___httpRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.Transport.WebRequestTransport::RequestHttpResponse(Wooga.Lambda.Network.HttpRequest)
 Async_1_t39 * WebRequestTransport_RequestHttpResponse_m183 (Object_t * __this/* static, unused */, HttpRequest_t35  ___httpRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<System.Net.HttpWebResponse> Wooga.Lambda.Network.Transport.WebRequestTransport::GetWebResponse(Wooga.Lambda.Network.HttpRequest)
 Async_1_t63 * WebRequestTransport_GetWebResponse_m184 (Object_t * __this/* static, unused */, HttpRequest_t35  ___httpRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.Transport.WebRequestTransport::AsHttpResponse(System.Net.HttpWebResponse,Wooga.Lambda.Network.HttpRequest)
 Async_1_t39 * WebRequestTransport_AsHttpResponse_m185 (Object_t * __this/* static, unused */, HttpWebResponse_t53 * ___response, HttpRequest_t35  ___httpRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>> Wooga.Lambda.Network.Transport.WebRequestTransport::ReadEntireStream(System.IO.Stream)
 Async_1_t64 * WebRequestTransport_ReadEntireStream_m186 (Object_t * __this/* static, unused */, Stream_t55 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection Wooga.Lambda.Network.Transport.WebRequestTransport::ToWebHeaders(Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>)
 WebHeaderCollection_t57 * WebRequestTransport_ToWebHeaders_m187 (Object_t * __this/* static, unused */, ImmutableList_1_t46 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader> Wooga.Lambda.Network.Transport.WebRequestTransport::OfWebHeaders(System.Net.WebHeaderCollection)
 ImmutableList_1_t46 * WebRequestTransport_OfWebHeaders_m188 (Object_t * __this/* static, unused */, WebHeaderCollection_t57 * ___webHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.Transport.WebRequestTransport::<CreateHttpClient>m__5(Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest)
 HttpResponse_t36  WebRequestTransport_U3CCreateHttpClientU3Em__5_m189 (Object_t * __this/* static, unused */, HttpClient_t38 * ___c, HttpRequest_t35  ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<System.Byte> Wooga.Lambda.Network.Transport.WebRequestTransport::<AsWebRequest>m__6(Wooga.Lambda.Data.ImmutableList`1<System.Byte>)
 ImmutableList_1_t41 * WebRequestTransport_U3CAsWebRequestU3Em__6_m190 (Object_t * __this/* static, unused */, ImmutableList_1_t41 * ____, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection Wooga.Lambda.Network.Transport.WebRequestTransport::<ToWebHeaders>m__A(System.Net.WebHeaderCollection,Wooga.Lambda.Network.HttpHeader)
 WebHeaderCollection_t57 * WebRequestTransport_U3CToWebHeadersU3Em__A_m191 (Object_t * __this/* static, unused */, WebHeaderCollection_t57 * ___headers, HttpHeader_t42  ___header, MethodInfo* method) IL2CPP_METHOD_ATTR;
