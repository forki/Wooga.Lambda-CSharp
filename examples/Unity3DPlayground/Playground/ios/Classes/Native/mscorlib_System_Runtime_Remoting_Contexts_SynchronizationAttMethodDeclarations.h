#pragma once

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t2342;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2331;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2332;

// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
 void SynchronizationAttribute__ctor_m10113 (SynchronizationAttribute_t2342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
 void SynchronizationAttribute__ctor_m10114 (SynchronizationAttribute_t2342 * __this, int32_t ___flag, bool ___reEntrant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
 void SynchronizationAttribute_set_Locked_m10115 (SynchronizationAttribute_t2342 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
 void SynchronizationAttribute_ReleaseLock_m10116 (SynchronizationAttribute_t2342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void SynchronizationAttribute_GetPropertiesForNewContext_m10117 (SynchronizationAttribute_t2342 * __this, Object_t * ___ctorMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool SynchronizationAttribute_IsContextOK_m10118 (SynchronizationAttribute_t2342 * __this, Context_t2332 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
 void SynchronizationAttribute_ExitContext_m10119 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
 void SynchronizationAttribute_EnterContext_m10120 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
