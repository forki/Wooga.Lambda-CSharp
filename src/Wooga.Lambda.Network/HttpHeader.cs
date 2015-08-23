using System;
using System.Collections;
using System.Collections.Generic;

namespace Wooga.Lambda.Network
{
    public struct HttpHeader : IStructuralEquatable, IStructuralComparable, IComparable
    {
        public static HttpHeader Create(string key, string value)
        {
            return new HttpHeader(key,value);
        }

        public string Key { get { return Header.Item1; } }
        public string Value { get { return Header.Item2; } }
        private readonly Tuple<string, string> Header;

        public HttpHeader(string key, string value) : this(Tuple.Create(key, value))
        {
        }

        public HttpHeader(Tuple<string,string> header)
        {
            Header = header;
        }

        public override Boolean Equals(Object obj)
        {
            return ((IStructuralEquatable)Header).Equals(obj, EqualityComparer<Object>.Default);
        }

        public override int GetHashCode()
        {
            return ((IStructuralEquatable)this).GetHashCode(EqualityComparer<Object>.Default);
        }

        int IStructuralEquatable.GetHashCode(IEqualityComparer comparer)
        {
            return ((IStructuralEquatable)Header).GetHashCode(comparer);
        }

        public bool Equals(object other, IEqualityComparer comparer)
        {
            return ((IStructuralEquatable) Header).Equals(other, comparer);
        }

        public int GetHashCode(IEqualityComparer comparer)
        {
            return ((IStructuralEquatable) Header).GetHashCode(comparer);
        }

        public int CompareTo(object other, IComparer comparer)
        {
            return ((IStructuralComparable) Header).CompareTo(other, comparer);
        }

        public int CompareTo(object obj)
        {
            return ((IComparable) Header).CompareTo(obj);
        }
    }
}