#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t3789;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3785;
// System.Reflection.MemberInfo
struct MemberInfo_t2709;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3778;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
 void FixupRecord__ctor_m11994 (FixupRecord_t3789 * __this, ObjectRecord_t3785 * ___objectToBeFixed, MemberInfo_t2709 * ___member, ObjectRecord_t3785 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void FixupRecord_FixupImpl_m11995 (FixupRecord_t3789 * __this, ObjectManager_t3778 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
