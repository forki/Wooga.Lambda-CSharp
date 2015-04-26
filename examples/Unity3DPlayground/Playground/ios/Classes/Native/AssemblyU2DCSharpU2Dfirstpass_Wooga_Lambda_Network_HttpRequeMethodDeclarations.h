#pragma once

// Wooga.Lambda.Network.HttpRequest
struct HttpRequest_t35;
// System.Uri
struct Uri_t49;
// Wooga.Lambda.Network.HttpMethod
struct HttpMethod_t47;
// Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>
struct ImmutableList_1_t46;
// Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>
struct Maybe_1_t48;
// System.String
struct String_t;
// Wooga.Lambda.Network.HttpRequest
#include "AssemblyU2DCSharpU2Dfirstpass_Wooga_Lambda_Network_HttpReque.h"

// System.Void Wooga.Lambda.Network.HttpRequest::.ctor(System.Uri,Wooga.Lambda.Network.HttpMethod,Wooga.Lambda.Data.ImmutableList`1<Wooga.Lambda.Network.HttpHeader>,Wooga.Lambda.Control.Monad.Maybe`1<Wooga.Lambda.Data.ImmutableList`1<System.Byte>>)
 void HttpRequest__ctor_m155 (HttpRequest_t35 * __this, Uri_t49 * ___endpoint, HttpMethod_t47 * ___httpMethod, ImmutableList_1_t46 * ___httpHeaders, Maybe_1_t48 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpRequest Wooga.Lambda.Network.HttpRequest::Basic(System.String,Wooga.Lambda.Network.HttpMethod)
 HttpRequest_t35  HttpRequest_Basic_m156 (Object_t * __this/* static, unused */, String_t* ___url, HttpMethod_t47 * ___httpMethod, MethodInfo* method) IL2CPP_METHOD_ATTR;
