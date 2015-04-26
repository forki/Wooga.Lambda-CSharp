#pragma once

// Wooga.Lambda.Network.HttpResponse
struct HttpResponse_t36;
// Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>
struct Maybe_1_t48;
// Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>
struct ImmutableList_1_t46;
// Wooga.Lambda.Network.HttpRequest
#include "AssemblyU2DCSharpU2Dfirstpass_Wooga_Lambda_Network_HttpReque.h"
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// Wooga.Lambda.Network.HttpResponse
#include "AssemblyU2DCSharpU2Dfirstpass_Wooga_Lambda_Network_HttpRespo.h"

// System.Void Wooga.Lambda.Network.HttpResponse::.ctor(Wooga.Lambda.Network.HttpRequest)
 void HttpResponse__ctor_m161 (HttpResponse_t36 * __this, HttpRequest_t35  ___httpRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Network.HttpResponse::.ctor(Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>,System.Net.HttpStatusCode,Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>)
 void HttpResponse__ctor_m162 (HttpResponse_t36 * __this, HttpRequest_t35  ___httpRequest, ImmutableList_1_t46 * ___httpHeaders, int32_t ___statusCode, Maybe_1_t48 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>> Wooga.Lambda.Network.HttpResponse::get_Body()
 Maybe_1_t48 * HttpResponse_get_Body_m163 (HttpResponse_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Network.HttpResponse::set_Body(Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>)
 void HttpResponse_set_Body_m164 (HttpResponse_t36 * __this, Maybe_1_t48 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader> Wooga.Lambda.Network.HttpResponse::get_HttpHeaders()
 ImmutableList_1_t46 * HttpResponse_get_HttpHeaders_m165 (HttpResponse_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Network.HttpResponse::set_HttpHeaders(Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>)
 void HttpResponse_set_HttpHeaders_m166 (HttpResponse_t36 * __this, ImmutableList_1_t46 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpRequest Wooga.Lambda.Network.HttpResponse::get_HttpRequest()
 HttpRequest_t35  HttpResponse_get_HttpRequest_m167 (HttpResponse_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Network.HttpResponse::set_HttpRequest(Wooga.Lambda.Network.HttpRequest)
 void HttpResponse_set_HttpRequest_m168 (HttpResponse_t36 * __this, HttpRequest_t35  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode Wooga.Lambda.Network.HttpResponse::get_StatusCode()
 int32_t HttpResponse_get_StatusCode_m169 (HttpResponse_t36 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Network.HttpResponse::set_StatusCode(System.Net.HttpStatusCode)
 void HttpResponse_set_StatusCode_m170 (HttpResponse_t36 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpResponse::With(Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>)
 HttpResponse_t36  HttpResponse_With_m171 (HttpResponse_t36 * __this, ImmutableList_1_t46 * ___httpHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpResponse::With(System.Net.HttpStatusCode)
 HttpResponse_t36  HttpResponse_With_m172 (HttpResponse_t36 * __this, int32_t ___statusCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
