#pragma once

// Wooga.Lambda.Network.HttpHeader
struct HttpHeader_t1034;
struct HttpHeader_t1034_marshaled;
// System.String
struct String_t;

// System.Void Wooga.Lambda.Network.HttpHeader::.ctor(System.String,System.String)
 void HttpHeader__ctor_m2929 (HttpHeader_t1034 * __this, String_t* ___key, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Wooga.Lambda.Network.HttpHeader::get_HeaderString()
 String_t* HttpHeader_get_HeaderString_m2930 (HttpHeader_t1034 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void HttpHeader_t1034_marshal(const HttpHeader_t1034& unmarshaled, HttpHeader_t1034_marshaled& marshaled);
void HttpHeader_t1034_marshal_back(const HttpHeader_t1034_marshaled& marshaled, HttpHeader_t1034& unmarshaled);
void HttpHeader_t1034_marshal_cleanup(HttpHeader_t1034_marshaled& marshaled);
