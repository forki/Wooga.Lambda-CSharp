#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t2995;
// System.Net.WebRequest
struct WebRequest_t2984;
// System.Uri
struct Uri_t2985;

// System.Void System.Net.HttpRequestCreator::.ctor()
 void HttpRequestCreator__ctor_m6703 (HttpRequestCreator_t2995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
 WebRequest_t2984 * HttpRequestCreator_Create_m6704 (HttpRequestCreator_t2995 * __this, Uri_t2985 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
