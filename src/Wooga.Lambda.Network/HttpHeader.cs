namespace Wooga.Lambda.Network
{
    public struct HttpHeader
    {
        public readonly string Key;
        public readonly string Value;

        public HttpHeader(string key, string value)
        {
            Key = key;
            Value = value;
        }

        public string HeaderString
        {
            get { return string.Join(":", new[] {Key, Value}); }
        }
    }
}