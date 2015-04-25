#pragma once
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, MethodInfo*);

	static inline R Invoke (MethodInfo* method, void* obj, T1 p1)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericVirtualInvokeData (method, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, data.methodInfo);
	}
};
