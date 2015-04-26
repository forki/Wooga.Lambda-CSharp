#pragma once

// Wooga.Lambda.Network.HttpClient
struct HttpClient_t144;
// System.Func`3<Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Network.HttpResponse>
struct Func_3_t1031;
// System.String
struct String_t;
// Wooga.Lambda.Data.ImmutableList`1<System.Byte>
struct ImmutableList_1_t1033;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse>
struct Async_1_t142;
// Wooga.Lambda.Network.HttpResponse
#include "Wooga_Lambda_Network_Wooga_Lambda_Network_HttpResponse.h"

// System.Void Wooga.Lambda.Network.HttpClient::.ctor(System.Func`3<Wooga.Lambda.Network.HttpClient,Wooga.Lambda.Network.HttpRequest,Wooga.Lambda.Network.HttpResponse>)
 void HttpClient__ctor_m2919 (HttpClient_t144 * __this, Func_3_t1031 * ___transport, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpClient::Post(System.String,Wooga.Lambda.Data.ImmutableList`1<System.Byte>)
 HttpResponse_t1030  HttpClient_Post_m2920 (HttpClient_t144 * __this, String_t* ___endpoint, ImmutableList_1_t1033 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.HttpClient::PostAsync(System.String,Wooga.Lambda.Data.ImmutableList`1<System.Byte>)
 Async_1_t142 * HttpClient_PostAsync_m2921 (HttpClient_t144 * __this, String_t* ___endpoint, ImmutableList_1_t1033 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpClient::Get(System.String)
 HttpResponse_t1030  HttpClient_Get_m2922 (HttpClient_t144 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.HttpClient::GetAsync(System.String)
 Async_1_t142 * HttpClient_GetAsync_m396 (HttpClient_t144 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpClient::Head(System.String)
 HttpResponse_t1030  HttpClient_Head_m2923 (HttpClient_t144 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.HttpClient::HeadAsync(System.String)
 Async_1_t142 * HttpClient_HeadAsync_m2924 (HttpClient_t144 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpClient::Put(System.String,Wooga.Lambda.Data.ImmutableList`1<System.Byte>)
 HttpResponse_t1030  HttpClient_Put_m2925 (HttpClient_t144 * __this, String_t* ___endpoint, ImmutableList_1_t1033 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.HttpClient::PutAsync(System.String,Wooga.Lambda.Data.ImmutableList`1<System.Byte>)
 Async_1_t142 * HttpClient_PutAsync_m2926 (HttpClient_t144 * __this, String_t* ___endpoint, ImmutableList_1_t1033 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Network.HttpResponse Wooga.Lambda.Network.HttpClient::Delete(System.String)
 HttpResponse_t1030  HttpClient_Delete_m2927 (HttpClient_t144 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Control.Concurrent.Async`1<Wooga.Lambda.Network.HttpResponse> Wooga.Lambda.Network.HttpClient::DeleteAsync(System.String)
 Async_1_t142 * HttpClient_DeleteAsync_m2928 (HttpClient_t144 * __this, String_t* ___endpoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
