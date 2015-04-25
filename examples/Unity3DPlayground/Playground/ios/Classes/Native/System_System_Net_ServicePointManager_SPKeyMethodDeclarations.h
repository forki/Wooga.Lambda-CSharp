#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager/SPKey
struct SPKey_t3004;
// System.Uri
struct Uri_t2985;
// System.Object
struct Object_t;

// System.Void System.Net.ServicePointManager/SPKey::.ctor(System.Uri,System.Boolean)
 void SPKey__ctor_m6765 (SPKey_t3004 * __this, Uri_t2985 * ___uri, bool ___use_connect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/SPKey::GetHashCode()
 int32_t SPKey_GetHashCode_m6766 (SPKey_t3004 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/SPKey::Equals(System.Object)
 bool SPKey_Equals_m6767 (SPKey_t3004 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
