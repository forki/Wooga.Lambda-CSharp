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

        private HttpMethod(String method)
        {
            Name = method;
        }

        public String Name { private set; get; }

        public override String ToString()
        {
            return String.Format("HttpMethod, Name:{0}", Name);
        }
    }
}