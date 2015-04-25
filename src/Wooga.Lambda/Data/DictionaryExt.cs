using System;
using System.Collections.Generic;

namespace Wooga.Lambda.Data
{
    /// <summary>
    ///     System.Collection.Generics.Dictionary extension methods
    /// </summary>
    public static class DictionaryExt
    {
        public static T3 Fold<T1, T2, T3>(this Dictionary<T1, T2> self, Func<T3, T1, T2, T3> func, T3 accumulator)
        {
            var acc = accumulator;
            foreach (var key in self.Keys)
            {
                T2 val;
                if (self.TryGetValue(key, out val))
                {
                    acc = func(acc, key, val);
                }
                else
                {
                    throw new Exception("Could not access value for key " + key);
                }
            }
            return acc;
        }
    }
}