#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct RemotingSurrogateSelector_t3738;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t3739;
// System.Type
struct Type_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3736;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
 void RemotingSurrogateSelector__ctor_m11811 (RemotingSurrogateSelector_t3738 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
 void RemotingSurrogateSelector__cctor_m11812 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
 Object_t * RemotingSurrogateSelector_GetSurrogate_m11813 (RemotingSurrogateSelector_t3738 * __this, Type_t * ___type, StreamingContext_t2615  ___context, Object_t ** ___ssout, MethodInfo* method) IL2CPP_METHOD_ATTR;
