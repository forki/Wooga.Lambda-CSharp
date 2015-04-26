#pragma once

// Wooga.Lambda.Network.HttpResponse
struct HttpResponse_t1030;
// Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>
struct Maybe_1_t1040;
// Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>
struct ImmutableList_1_t1038;
// Wooga.Lambda.Network.HttpRequest
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpRequest.h"
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// Wooga.Lambda.Network.HttpResponse
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpResponse.h"

// System.Void Wooga.Lambda.Network.HttpResponse::.ctor(Wooga.Lambda.Network.HttpRequest)
 void HttpResponse__ctor_m2943 (HttpResponse_t1030 * __this, HttpRequest_t1029  ___httpRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Network.HttpResponse::.ctor(Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>,System.Net.HttpStatusCode,Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>)
 void HttpResponse__ctor_m2944 (HttpResponse_t1030 * __this, HttpRequest_t1029  ___httpRequest, ImmutableList_1_t1038 * ___httpHeaders, int32_t ___statusCode, Maybe_1_t1040 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>> Wooga.Lambda.Network.HttpResponse::get_Body()
 Maybe_1_t1040 * HttpResponse_get_Body_m2945 (HttpResponse_t1030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Network.HttpResponse::set_Body(Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>)
 void HttpResponse_set_Body_m2946 (HttpResponse_t1030 * __this, Maybe_1_t1040 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader> Wooga.Lambda.Network.HttpResponse::get_HttpHeaders()
 ImmutableList_1_t1038 * HttpResponse_get_HttpHeaders_m2947 (HttpResponse_t1030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Network.HttpResponse::set_HttpHeaders(Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>)
 void HttpResponse_set_HttpHeaders_m2948 (HttpResponse_t1030 * __this, ImmutableList_1_t1038 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpRequest Wooga.Lambda.Network.HttpResponse::get_HttpRequest()
 HttpRequest_t1029  HttpResponse_get_HttpRequest_m2949 (HttpResponse_t1030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Network.HttpResponse::set_HttpRequest(Wooga.Lambda.Network.HttpRequest)
 void HttpResponse_set_HttpRequest_m2950 (HttpResponse_t1030 * __this, HttpRequest_t1029  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode Wooga.Lambda.Network.HttpResponse::get_StatusCode()
 int32_t HttpResponse_get_StatusCode_m2951 (HttpResponse_t1030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Network.HttpResponse::set_StatusCode(System.Net.HttpStatusCode)
 void HttpResponse_set_StatusCode_m2952 (HttpResponse_t1030 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpResponse::With(Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>)
 HttpResponse_t1030  HttpResponse_With_m2953 (HttpResponse_t1030 * __this, ImmutableList_1_t1038 * ___httpHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpResponse::With(System.Net.HttpStatusCode)
 HttpResponse_t1030  HttpResponse_With_m2954 (HttpResponse_t1030 * __this, int32_t ___statusCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
