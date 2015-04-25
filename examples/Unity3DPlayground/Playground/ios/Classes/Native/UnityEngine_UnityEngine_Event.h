#pragma once
#include <stdint.h>
// UnityEngine.Event
struct Event_t315;
struct Event_t315_marshaled;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2522;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Event
struct Event_t315  : public Object_t
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	IntPtr_t31 ___m_Ptr_0;
};
struct Event_t315_StaticFields{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t315 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t315 * ___s_MasterEvent_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Event::<>f__switch$map0
	Dictionary_2_t2522 * ___U3CU3Ef__switch$map0_3;
};
// Native definition for marshalling of: UnityEngine.Event
struct Event_t315_marshaled
{
	IntPtr_t31 ___m_Ptr_0;
};
