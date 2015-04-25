#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t3790;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3785;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3778;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
 void DelayedFixupRecord__ctor_m11996 (DelayedFixupRecord_t3790 * __this, ObjectRecord_t3785 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t3785 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void DelayedFixupRecord_FixupImpl_m11997 (DelayedFixupRecord_t3790 * __this, ObjectManager_t3778 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
