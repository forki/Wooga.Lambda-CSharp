#pragma once

// System.Diagnostics.StackFrame
struct StackFrame_t1366;
// System.Reflection.MethodBase
struct MethodBase_t1367;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackFrame::.ctor()
 void StackFrame__ctor_m9106 (StackFrame_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
 void StackFrame__ctor_m9107 (StackFrame_t1366 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
 bool StackFrame_get_frame_info_m9108 (Object_t * __this/* static, unused */, int32_t ___skip, bool ___needFileInfo, MethodBase_t1367 ** ___method, int32_t* ___iloffset, int32_t* ___native_offset, String_t** ___file, int32_t* ___line, int32_t* ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber()
 int32_t StackFrame_GetFileLineNumber_m4164 (StackFrame_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetFileName()
 String_t* StackFrame_GetFileName_m4163 (StackFrame_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
 String_t* StackFrame_GetSecureFileName_m9109 (StackFrame_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetILOffset()
 int32_t StackFrame_GetILOffset_m9110 (StackFrame_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod()
 MethodBase_t1367 * StackFrame_GetMethod_m4158 (StackFrame_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetNativeOffset()
 int32_t StackFrame_GetNativeOffset_m9111 (StackFrame_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
 String_t* StackFrame_GetInternalMethodName_m9112 (StackFrame_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::ToString()
 String_t* StackFrame_ToString_m9113 (StackFrame_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
