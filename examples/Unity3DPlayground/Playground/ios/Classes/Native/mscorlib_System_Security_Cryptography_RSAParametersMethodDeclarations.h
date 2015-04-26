#pragma once

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1880;
struct RSAParameters_t1880_marshaled;

void RSAParameters_t1880_marshal(const RSAParameters_t1880& unmarshaled, RSAParameters_t1880_marshaled& marshaled);
void RSAParameters_t1880_marshal_back(const RSAParameters_t1880_marshaled& marshaled, RSAParameters_t1880& unmarshaled);
void RSAParameters_t1880_marshal_cleanup(RSAParameters_t1880_marshaled& marshaled);
