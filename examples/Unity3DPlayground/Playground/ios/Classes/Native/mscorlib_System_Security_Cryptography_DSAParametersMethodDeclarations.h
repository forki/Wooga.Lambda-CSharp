#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t3218;
struct DSAParameters_t3218_marshaled;

void DSAParameters_t3218_marshal(const DSAParameters_t3218& unmarshaled, DSAParameters_t3218_marshaled& marshaled);
void DSAParameters_t3218_marshal_back(const DSAParameters_t3218_marshaled& marshaled, DSAParameters_t3218& unmarshaled);
void DSAParameters_t3218_marshal_cleanup(DSAParameters_t3218_marshaled& marshaled);
