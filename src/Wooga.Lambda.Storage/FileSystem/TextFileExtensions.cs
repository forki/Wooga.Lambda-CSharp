using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Storage
{
    public static class TextFileExtensions
    {
        public static Async<string> ReadTextFileAsync(this FileSystem f, string p, Encoding encoding = null)
        {
            return () =>
            {
                encoding = encoding ?? Encoding.UTF8;
                return encoding.GetString(f.ReadFileAsync(p).RunSynchronously().ToArray());
            };

        }

        public static Async<Unit> WriteTextFileAsync(this FileSystem f, string p, string c, Encoding encoding = null)
        {
            return () =>
            {
                encoding = encoding ?? Encoding.UTF8;
                return f.WriteFileAsync(p, encoding.GetBytes(c)).RunSynchronously();
            };

        }

        public static Async<Unit> AppendTextFileAsync(this FileSystem f, string p, string c, Encoding encoding = null)
        {
            return () =>
            {
                encoding = encoding ?? Encoding.UTF8;
                return f.AppendFileAsync(p, encoding.GetBytes(c)).RunSynchronously();
            };
        }
    }
}