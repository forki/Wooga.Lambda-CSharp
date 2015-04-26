#pragma once

// System.Diagnostics.StackTrace
struct StackTrace_t1254;
// System.Exception
struct Exception_t121;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t2193;
// System.Diagnostics.StackFrame
struct StackFrame_t1366;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackTrace::.ctor()
 void StackTrace__ctor_m6435 (StackTrace_t1254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
 void StackTrace__ctor_m4142 (StackTrace_t1254 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
 void StackTrace__ctor_m9114 (StackTrace_t1254 * __this, Exception_t121 * ___e, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
 void StackTrace__ctor_m9115 (StackTrace_t1254 * __this, Exception_t121 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
 void StackTrace__ctor_m9116 (StackTrace_t1254 * __this, Exception_t121 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
 void StackTrace_init_frames_m9117 (StackTrace_t1254 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
 StackFrameU5BU5D_t2193* StackTrace_get_trace_m9118 (Object_t * __this/* static, unused */, Exception_t121 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
 int32_t StackTrace_get_FrameCount_m4166 (StackTrace_t1254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
 StackFrame_t1366 * StackTrace_GetFrame_m4157 (StackTrace_t1254 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
 String_t* StackTrace_ToString_m6436 (StackTrace_t1254 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
