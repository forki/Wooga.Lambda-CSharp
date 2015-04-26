#pragma once

// Wooga.Lambda.Network.HttpRequest
struct HttpRequest_t1029;
// System.Uri
struct Uri_t1041;
// Wooga.Lambda.Network.HttpMethod
struct HttpMethod_t1039;
// Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>
struct ImmutableList_1_t1038;
// Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>
struct Maybe_1_t1040;
// System.String
struct String_t;
// Wooga.Lambda.Network.HttpRequest
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpRequest.h"

// System.Void Wooga.Lambda.Network.HttpRequest::.ctor(System.Uri,Wooga.Lambda.Network.HttpMethod,Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>,Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>)
 void HttpRequest__ctor_m2937 (HttpRequest_t1029 * __this, Uri_t1041 * ___endpoint, HttpMethod_t1039 * ___httpMethod, ImmutableList_1_t1038 * ___httpHeaders, Maybe_1_t1040 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpRequest Wooga.Lambda.Network.HttpRequest::Basic(System.String,Wooga.Lambda.Network.HttpMethod)
 HttpRequest_t1029  HttpRequest_Basic_m2938 (Object_t * __this/* static, unused */, String_t* ___url, HttpMethod_t1039 * ___httpMethod, MethodInfo* method) IL2CPP_METHOD_ATTR;
