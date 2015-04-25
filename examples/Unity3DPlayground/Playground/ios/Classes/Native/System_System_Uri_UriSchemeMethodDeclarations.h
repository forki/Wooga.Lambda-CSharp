#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Uri/UriScheme
struct UriScheme_t3127;
struct UriScheme_t3127_marshaled;
// System.String
struct String_t;

// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
 void UriScheme__ctor_m7411 (UriScheme_t3127 * __this, String_t* ___s, String_t* ___d, int32_t ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
void UriScheme_t3127_marshal(const UriScheme_t3127& unmarshaled, UriScheme_t3127_marshaled& marshaled);
void UriScheme_t3127_marshal_back(const UriScheme_t3127_marshaled& marshaled, UriScheme_t3127& unmarshaled);
void UriScheme_t3127_marshal_cleanup(UriScheme_t3127_marshaled& marshaled);
