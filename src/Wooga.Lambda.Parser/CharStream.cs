using System;
using System.IO;
using System.Text;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Parser
{
    public delegate Result<T> Parser<T>(CharStream chars);

    public sealed class CharStream
    {
        public static readonly Encoding Encoding = Encoding.UTF8;
        public static readonly char EndOfStream = '\uFFFF';
        private readonly MemoryStream memory;
        private readonly BinaryReader memoryReader;
        private readonly BinaryWriter memoryWriter;
        public readonly CharStreamPosition Position;
        private readonly BinaryReader sourceReader;

        public CharStream(Stream source)
        {
            sourceReader = new BinaryReader(source, Encoding);
            memory = new MemoryStream();
            memoryReader = new BinaryReader(memory, Encoding);
            memoryWriter = new BinaryWriter(memory, Encoding);
            Position = new CharStreamPosition(0, 1, 1);
        }

        private CharStream(MemoryStream memory, BinaryReader memoryReader, BinaryWriter memoryWriter,
            BinaryReader sourceReader, CharStreamPosition position)
        {
            this.sourceReader = sourceReader;
            this.memory = memory;
            this.memoryReader = memoryReader;
            this.memoryWriter = memoryWriter;
            Position = position;
        }

        public CharStream(char[] chars)
            : this(new MemoryStream(Encoding.GetBytes(chars)))
        {
        }

        public CharStream(string text)
            : this(new MemoryStream(Encoding.GetBytes(text.ToCharArray())))
        {
        }

        public CharStream AtPosition(CharStreamPosition position)
        {
            return new CharStream(memory, memoryReader, memoryWriter, sourceReader, position);
        }

        public char Peek()
        {
            return Peek(1)[0];
        }

        public char[] Peek(long count)
        {
            var readChars = new char[0];
            if (BufferChars(CharsNeeded(count, Position)))
            {
                memory.Seek(Position.Index, SeekOrigin.Begin);
                readChars = memoryReader.ReadChars((int) count);
            }
            if (readChars.Length < count)
            {
                readChars = readChars.Append(EndOfStream);
            }
            return readChars;
        }

        public CharStreamPosition PeekPosition(long count)
        {
            return Position.PositionAfterChars(Peek(count));
        }

        private long CharsAvalaible(CharStreamPosition pos)
        {
            return memory.Length - pos.Index;
        }

        private bool BufferChars(long count)
        {
            try
            {
                memory.Seek(0, SeekOrigin.End);
                memoryWriter.Write(sourceReader.ReadChars((int) count));
            }
            catch (IOException)
            {
                return false;
            }
            return true;
        }

        private long CharsNeeded(long count, CharStreamPosition pos)
        {
            return Math.Max(0, count - CharsAvalaible(pos));
        }
    }

    public struct CharStreamPosition
    {
        public readonly long Column;
        public readonly long Index;
        public readonly long Line;

        public CharStreamPosition(long index, long line, long column)
        {
            Index = index;
            Line = line;
            Column = column;
        }

        public CharStreamPosition PositionAfterChars(char[] cs)
        {
            Predicate<char> f = c => c == '\n' || c == '\r';
            var n = Array.FindAll(cs, f).Length;
            var l = Array.FindLastIndex(cs, f);
            var line = Line + n;
            var col = Column + l > -1 ? cs.Length - l : cs.Length;
            var idx = Index + cs.Length;
            return new CharStreamPosition(idx, line, col);
        }
    }
}