#pragma once

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t2552;
// System.Delegate
struct Delegate_t452;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
 void DelegateEntry__ctor_m11570 (DelegateEntry_t2552 * __this, Delegate_t452 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
 Delegate_t452 * DelegateEntry_DeserializeDelegate_m11571 (DelegateEntry_t2552 * __this, SerializationInfo_t1255 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
