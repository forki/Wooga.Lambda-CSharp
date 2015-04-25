#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t3788;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3785;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t3778;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
 void MultiArrayFixupRecord__ctor_m11992 (MultiArrayFixupRecord_t3788 * __this, ObjectRecord_t3785 * ___objectToBeFixed, Int32U5BU5D_t156* ___indices, ObjectRecord_t3785 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void MultiArrayFixupRecord_FixupImpl_m11993 (MultiArrayFixupRecord_t3788 * __this, ObjectManager_t3778 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
