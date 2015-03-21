using System;

namespace Wooga.Lambda.Network
{
    public struct HttpHeader
    {
        public readonly String Key;
        public readonly String Value;

        public HttpHeader(String key, String value)
        {
            Key = key;
            Value = value;
        }

        public String HeaderString
        {
            get { return String.Join(":", new[] {Key, Value}); }
        }
    }
}