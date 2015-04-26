#pragma once

// Wooga.Lambda.Network.HttpHeader
struct HttpHeader_t42;
struct HttpHeader_t42_marshaled;
// System.String
struct String_t;

// System.Void Wooga.Lambda.Network.HttpHeader::.ctor(System.String,System.String)
 void HttpHeader__ctor_m147 (HttpHeader_t42 * __this, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Wooga.Lambda.Network.HttpHeader::get_HeaderString()
 String_t* HttpHeader_get_HeaderString_m148 (HttpHeader_t42 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void HttpHeader_t42_marshal(const HttpHeader_t42& unmarshaled, HttpHeader_t42_marshaled& marshaled);
void HttpHeader_t42_marshal_back(const HttpHeader_t42_marshaled& marshaled, HttpHeader_t42& unmarshaled);
void HttpHeader_t42_marshal_cleanup(HttpHeader_t42_marshaled& marshaled);
