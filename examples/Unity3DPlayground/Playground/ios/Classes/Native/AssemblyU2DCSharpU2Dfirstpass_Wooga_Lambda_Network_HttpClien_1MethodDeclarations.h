#pragma once

// Wooga.Lambda.Network.HttpClient
struct HttpClient_t38;
// System.Func`3<Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Network.HttpResponse>
struct Func_3_t37;
// System.String
struct String_t;
// Wooga.Lambda.Data.ImmutableList`1<System.Byte>
struct ImmutableList_1_t41;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>
struct Async_1_t39;
// Wooga.Lambda.Network.HttpResponse
#include "AssemblyU2DCSharpU2Dfirstpass_Wooga_Lambda_Network_HttpRespo.h"

// System.Void Wooga.Lambda.Network.HttpClient::.ctor(System.Func`3<Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Network.HttpResponse>)
 void HttpClient__ctor_m136 (HttpClient_t38 * __this, Func_3_t37 * ___transport, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpClient::Post(System.String,Wooga.Lambda.Data.ImmutableList`1<System.Byte>)
 HttpResponse_t36  HttpClient_Post_m137 (HttpClient_t38 * __this, String_t* ___endpoint, ImmutableList_1_t41 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.HttpClient::PostAsync(System.String,Wooga.Lambda.Data.ImmutableList`1<System.Byte>)
 Async_1_t39 * HttpClient_PostAsync_m138 (HttpClient_t38 * __this, String_t* ___endpoint, ImmutableList_1_t41 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpClient::Get(System.String)
 HttpResponse_t36  HttpClient_Get_m139 (HttpClient_t38 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.HttpClient::GetAsync(System.String)
 Async_1_t39 * HttpClient_GetAsync_m140 (HttpClient_t38 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpClient::Head(System.String)
 HttpResponse_t36  HttpClient_Head_m141 (HttpClient_t38 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.HttpClient::HeadAsync(System.String)
 Async_1_t39 * HttpClient_HeadAsync_m142 (HttpClient_t38 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpClient::Put(System.String,Wooga.Lambda.Data.ImmutableList`1<System.Byte>)
 HttpResponse_t36  HttpClient_Put_m143 (HttpClient_t38 * __this, String_t* ___endpoint, ImmutableList_1_t41 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.HttpClient::PutAsync(System.String,Wooga.Lambda.Data.ImmutableList`1<System.Byte>)
 Async_1_t39 * HttpClient_PutAsync_m144 (HttpClient_t38 * __this, String_t* ___endpoint, ImmutableList_1_t41 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpClient::Delete(System.String)
 HttpResponse_t36  HttpClient_Delete_m145 (HttpClient_t38 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.HttpClient::DeleteAsync(System.String)
 Async_1_t39 * HttpClient_DeleteAsync_m146 (HttpClient_t38 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
