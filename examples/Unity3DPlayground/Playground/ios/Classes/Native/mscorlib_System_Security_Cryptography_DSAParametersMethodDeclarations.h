#pragma once

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1882;
struct DSAParameters_t1882_marshaled;

void DSAParameters_t1882_marshal(const DSAParameters_t1882& unmarshaled, DSAParameters_t1882_marshaled& marshaled);
void DSAParameters_t1882_marshal_back(const DSAParameters_t1882_marshaled& marshaled, DSAParameters_t1882& unmarshaled);
void DSAParameters_t1882_marshal_cleanup(DSAParameters_t1882_marshaled& marshaled);
