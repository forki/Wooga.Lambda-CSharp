using System;

namespace Wooga.Lambda.Network
{
    public sealed class HttpMethod : IEquatable<HttpMethod>
    {
        public static readonly HttpMethod Connect = new HttpMethod("CONNECT");
        public static readonly HttpMethod Get = new HttpMethod("GET");
        public static readonly HttpMethod Head = new HttpMethod("HEAD");
        public static readonly HttpMethod MkCol = new HttpMethod("MKCOL");
        public static readonly HttpMethod Post = new HttpMethod("POST");
        public static readonly HttpMethod Put = new HttpMethod("PUT");
        public static readonly HttpMethod Delete = new HttpMethod("DELETE");
        public readonly string Name;

        private HttpMethod(string name)
        {
            Name = name;
        }

        public bool Equals(HttpMethod other)
        {
            return Name.Equals(other.Name);
        }

        public override string ToString()
        {
            return string.Format("HttpMethod, Name:{0}", Name);
        }
    }
}