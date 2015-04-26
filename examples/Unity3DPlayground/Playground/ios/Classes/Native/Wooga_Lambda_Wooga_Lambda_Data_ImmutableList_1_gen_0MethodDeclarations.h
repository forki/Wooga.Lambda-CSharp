#pragma once

// Wooga.Lambda.Data.ImmutableList`1<System.Byte>
struct ImmutableList_1_t1033;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t4288;
// Wooga.Lambda.Data.IValueValidator`1<System.Byte>
struct IValueValidator_1_t4285;
// Wooga.Lambda.Data.ImmutableList`1/Node<System.Byte>
struct Node_t4286;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t4289;
// System.Collections.IEnumerator
struct IEnumerator_t57;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t4290;
// System.Comparison`1<System.Byte>
struct Comparison_1_t4291;
// System.Collections.Generic.IComparer`1<System.Byte>
struct IComparer_1_t4292;

// System.Void Wooga.Lambda.Data.ImmutableList`1<System.Byte>::.ctor()
 void ImmutableList_1__ctor_m3015 (ImmutableList_1_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Data.ImmutableList`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void ImmutableList_1__ctor_m20862 (ImmutableList_1_t1033 * __this, Object_t* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Data.ImmutableList`1<System.Byte>::.ctor(Wooga.Lambda.Data.IValueValidator`1<T>)
 void ImmutableList_1__ctor_m20863 (ImmutableList_1_t1033 * __this, Object_t* ___optionalValueValidator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Data.ImmutableList`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<T>,Wooga.Lambda.Data.IValueValidator`1<T>)
 void ImmutableList_1__ctor_m20864 (ImmutableList_1_t1033 * __this, Object_t* ___values, Object_t* ___optionalValueValidator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Data.ImmutableList`1<System.Byte>::.ctor(Wooga.Lambda.Data.ImmutableList`1/Node<T>,Wooga.Lambda.Data.IValueValidator`1<T>)
 void ImmutableList_1__ctor_m20865 (ImmutableList_1_t1033 * __this, Node_t4286 * ___tail, Object_t* ___optionalValueValidator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Wooga.Lambda.Data.ImmutableList`1<System.Byte>::get_Item(System.Int32)
 uint8_t ImmutableList_1_get_Item_m20866 (ImmutableList_1_t1033 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Wooga.Lambda.Data.ImmutableList`1<System.Byte>::get_Count()
 int32_t ImmutableList_1_get_Count_m2999 (ImmutableList_1_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::GetEnumerator()
 Object_t* ImmutableList_1_GetEnumerator_m20867 (ImmutableList_1_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Wooga.Lambda.Data.ImmutableList`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ImmutableList_1_System_Collections_IEnumerable_GetEnumerator_m20868 (ImmutableList_1_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Contains(T)
 bool ImmutableList_1_Contains_m20869 (ImmutableList_1_t1033 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Contains(T,System.Collections.Generic.IEqualityComparer`1<T>)
 bool ImmutableList_1_Contains_m20870 (ImmutableList_1_t1033 * __this, uint8_t ___value, Object_t* ___optionalComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Add(T)
 ImmutableList_1_t1033 * ImmutableList_1_Add_m20871 (ImmutableList_1_t1033 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableList_1_t1033 * ImmutableList_1_AddRange_m20872 (ImmutableList_1_t1033 * __this, Object_t* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Insert(System.Collections.Generic.IEnumerable`1<T>,System.Int32)
 ImmutableList_1_t1033 * ImmutableList_1_Insert_m20873 (ImmutableList_1_t1033 * __this, Object_t* ___values, int32_t ___insertAtIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Insert(T,System.Int32)
 ImmutableList_1_t1033 * ImmutableList_1_Insert_m20874 (ImmutableList_1_t1033 * __this, uint8_t ___value, int32_t ___insertAtIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Insert(System.Collections.Generic.IEnumerable`1<T>,T,System.Int32)
 ImmutableList_1_t1033 * ImmutableList_1_Insert_m20875 (ImmutableList_1_t1033 * __this, Object_t* ___multipleValuesToAdd, uint8_t ___singleValueToAdd, int32_t ___insertAtIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Remove(T)
 ImmutableList_1_t1033 * ImmutableList_1_Remove_m20876 (ImmutableList_1_t1033 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Remove(T,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableList_1_t1033 * ImmutableList_1_Remove_m20877 (ImmutableList_1_t1033 * __this, uint8_t ___value, Object_t* ___optionalComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Wooga.Lambda.Data.ImmutableList`1<System.Byte>::DoValuesMatch(T,T,System.Collections.Generic.IEqualityComparer`1<T>)
 bool ImmutableList_1_DoValuesMatch_m20878 (ImmutableList_1_t1033 * __this, uint8_t ___x, uint8_t ___y, Object_t* ___optionalComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::RemoveAt(System.Int32)
 ImmutableList_1_t1033 * ImmutableList_1_RemoveAt_m20879 (ImmutableList_1_t1033 * __this, int32_t ___removeAtIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::RemoveRange(System.Int32,System.Int32)
 ImmutableList_1_t1033 * ImmutableList_1_RemoveRange_m20880 (ImmutableList_1_t1033 * __this, int32_t ___removeAtIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Sort()
 ImmutableList_1_t1033 * ImmutableList_1_Sort_m20881 (ImmutableList_1_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Sort(System.Comparison`1<T>)
 ImmutableList_1_t1033 * ImmutableList_1_Sort_m20882 (ImmutableList_1_t1033 * __this, Comparison_1_t4291 * ___optionalComparison, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Wooga.Lambda.Data.ImmutableList`1<T> Wooga.Lambda.Data.ImmutableList`1<System.Byte>::Sort(System.Collections.Generic.IComparer`1<T>)
 ImmutableList_1_t1033 * ImmutableList_1_Sort_m20883 (ImmutableList_1_t1033 * __this, Object_t* ___optionalComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Wooga.Lambda.Data.ImmutableList`1<System.Byte>::EnsureAllValuesDataIsPopulated()
 void ImmutableList_1_EnsureAllValuesDataIsPopulated_m20884 (ImmutableList_1_t1033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Wooga.Lambda.Data.ImmutableList`1<System.Byte>::<Sort>b__0(T)
 uint8_t ImmutableList_1_U3CSortU3Eb__0_m20885 (Object_t * __this/* static, unused */, uint8_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T Wooga.Lambda.Data.ImmutableList`1<System.Byte>::<Sort>b__1(T)
 uint8_t ImmutableList_1_U3CSortU3Eb__1_m20886 (Object_t * __this/* static, unused */, uint8_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
