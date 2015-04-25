#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t3787;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3785;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3778;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
 void ArrayFixupRecord__ctor_m11990 (ArrayFixupRecord_t3787 * __this, ObjectRecord_t3785 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t3785 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void ArrayFixupRecord_FixupImpl_m11991 (ArrayFixupRecord_t3787 * __this, ObjectManager_t3778 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
