using System;

namespace Wooga.Lambda.Network
{
    public sealed class HttpMethod
    {
        public static readonly HttpMethod Connect = new HttpMethod("CONNECT");
        public static readonly HttpMethod Get = new HttpMethod("GET");
        public static readonly HttpMethod Head = new HttpMethod("HEAD");
        public static readonly HttpMethod MkCol = new HttpMethod("MKCOL");
        public static readonly HttpMethod Post = new HttpMethod("POST");
        public static readonly HttpMethod Put = new HttpMethod("PUT");
        public static readonly HttpMethod Delete = new HttpMethod("DELETE");

        public readonly String Name;

        private HttpMethod(String name)
        {
            Name = name;
        }

        public override String ToString()
        {
            return String.Format("HttpMethod, Name:{0}", Name);
        }
    }
}