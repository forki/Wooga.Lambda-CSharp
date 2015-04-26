#pragma once

// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t1775;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t188;
// System.AsyncCallback
struct AsyncCallback_t189;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
 void CostDelegate__ctor_m5841 (CostDelegate_t1775 * __this, Object_t * ___object, IntPtr_t37 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
 double CostDelegate_Invoke_m5842 (CostDelegate_t1775 * __this, Interval_t1772  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
 Object_t * CostDelegate_BeginInvoke_m5843 (CostDelegate_t1775 * __this, Interval_t1772  ___i, AsyncCallback_t189 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
 double CostDelegate_EndInvoke_m5844 (CostDelegate_t1775 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
