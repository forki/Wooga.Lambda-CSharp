#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t3922;
// System.Delegate
struct Delegate_t447;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
 void DelegateEntry__ctor_m13123 (DelegateEntry_t3922 * __this, Delegate_t447 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
 Delegate_t447 * DelegateEntry_DeserializeDelegate_m13124 (DelegateEntry_t3922 * __this, SerializationInfo_t2614 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
