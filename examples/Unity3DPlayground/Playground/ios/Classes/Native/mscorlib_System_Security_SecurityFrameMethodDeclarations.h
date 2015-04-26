#pragma once

// System.Security.SecurityFrame
struct SecurityFrame_t2486;
// System.Reflection.Assembly
struct Assembly_t1874;
// System.AppDomain
struct AppDomain_t2484;
// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t2485;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1547;

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
 void SecurityFrame__ctor_m10863 (SecurityFrame_t2486 * __this, RuntimeSecurityFrame_t2485 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
 Array_t * SecurityFrame__GetSecurityStack_m10864 (Object_t * __this/* static, unused */, int32_t ___skip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
 void SecurityFrame_InitFromRuntimeFrame_m10865 (SecurityFrame_t2486 * __this, RuntimeSecurityFrame_t2485 * ___frame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
 Assembly_t1874 * SecurityFrame_get_Assembly_m10866 (SecurityFrame_t2486 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
 AppDomain_t2484 * SecurityFrame_get_Domain_m10867 (SecurityFrame_t2486 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
 String_t* SecurityFrame_ToString_m10868 (SecurityFrame_t2486 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
 ArrayList_t1547 * SecurityFrame_GetStack_m10869 (Object_t * __this/* static, unused */, int32_t ___skipFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
