#pragma once

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t2416;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2411;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2404;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
 void DelayedFixupRecord__ctor_m10417 (DelayedFixupRecord_t2416 * __this, ObjectRecord_t2411 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t2411 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void DelayedFixupRecord_FixupImpl_m10418 (DelayedFixupRecord_t2416 * __this, ObjectManager_t2404 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
