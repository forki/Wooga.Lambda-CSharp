using System;
using System.Collections;

namespace Wooga.Lambda.Data
{
    /// <summary>
    ///     Represents void as a value type
    /// </summary>
    public sealed class Unit : IEquatable<Unit>, IStructuralEquatable
    {
        public static readonly Unit Default = new Unit();

        private Unit()
        {
        }

        public bool Equals(object other, IEqualityComparer comparer)
        {
            return Equals(other);
        }

        public int GetHashCode(IEqualityComparer comparer)
        {
            return comparer.GetHashCode(Default);
        }

        public bool Equals(Unit other)
        {
            return Object.ReferenceEquals(other, Default);
        }
    }
}