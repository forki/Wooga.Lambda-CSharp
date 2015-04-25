#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t314;
struct Coroutine_t314_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Object
struct Object_t;

// System.Void UnityEngine.MonoBehaviour::.ctor()
 void MonoBehaviour__ctor_m279 (MonoBehaviour_t3 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
 void MonoBehaviour_Invoke_m517 (MonoBehaviour_t3 * __this, String_t* ___methodName, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
 Coroutine_t314 * MonoBehaviour_StartCoroutine_m490 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
 Coroutine_t314 * MonoBehaviour_StartCoroutine_Auto_m5752 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
 Coroutine_t314 * MonoBehaviour_StartCoroutine_m455 (MonoBehaviour_t3 * __this, String_t* ___methodName, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
 void MonoBehaviour_StopCoroutine_m5753 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
 void MonoBehaviour_StopCoroutine_m2232 (MonoBehaviour_t3 * __this, Coroutine_t314 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
 void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5754 (MonoBehaviour_t3 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
 void MonoBehaviour_StopCoroutine_Auto_m5755 (MonoBehaviour_t3 * __this, Coroutine_t314 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
