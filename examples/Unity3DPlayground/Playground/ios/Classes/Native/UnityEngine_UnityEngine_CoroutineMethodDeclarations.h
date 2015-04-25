#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t314;
struct Coroutine_t314_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
 void Coroutine__ctor_m5198 (Coroutine_t314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
 void Coroutine_ReleaseCoroutine_m5199 (Coroutine_t314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
 void Coroutine_Finalize_m5200 (Coroutine_t314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t314_marshal(const Coroutine_t314& unmarshaled, Coroutine_t314_marshaled& marshaled);
void Coroutine_t314_marshal_back(const Coroutine_t314_marshaled& marshaled, Coroutine_t314& unmarshaled);
void Coroutine_t314_marshal_cleanup(Coroutine_t314_marshaled& marshaled);
