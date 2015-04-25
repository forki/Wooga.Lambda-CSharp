#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3216;
struct RSAParameters_t3216_marshaled;

void RSAParameters_t3216_marshal(const RSAParameters_t3216& unmarshaled, RSAParameters_t3216_marshaled& marshaled);
void RSAParameters_t3216_marshal_back(const RSAParameters_t3216_marshaled& marshaled, RSAParameters_t3216& unmarshaled);
void RSAParameters_t3216_marshal_cleanup(RSAParameters_t3216_marshaled& marshaled);
