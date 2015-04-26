#pragma once

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2412;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2411;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2404;

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
 void BaseFixupRecord__ctor_m10409 (BaseFixupRecord_t2412 * __this, ObjectRecord_t2411 * ___objectToBeFixed, ObjectRecord_t2411 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
 bool BaseFixupRecord_DoFixup_m10410 (BaseFixupRecord_t2412 * __this, ObjectManager_t2404 * ___manager, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
