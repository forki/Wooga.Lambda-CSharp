#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3786;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3785;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3778;

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
 void BaseFixupRecord__ctor_m11988 (BaseFixupRecord_t3786 * __this, ObjectRecord_t3785 * ___objectToBeFixed, ObjectRecord_t3785 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
 bool BaseFixupRecord_DoFixup_m11989 (BaseFixupRecord_t3786 * __this, ObjectManager_t3778 * ___manager, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
