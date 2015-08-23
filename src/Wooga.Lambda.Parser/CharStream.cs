// file:	CharStream.cs
//
// summary:	Implements the character stream class

using System;
using System.IO;
using System.Text;
using System.Collections.Immutable;
using System.Linq;

namespace Wooga.Lambda.Parser
{
    /// <summary>   Parsers the given characters. </summary>
    /// <typeparam name="T">    Generic type parameter. </typeparam>
    /// <param name="chars">    The characters. </param>
    /// <returns>   A Result&lt;T&gt; </returns>
    public delegate Result<T> Parser<T>(CharStream chars);

    /// <summary>   A character stream. This class cannot be inherited. </summary>
    public sealed class CharStream
    {
        /// <summary>   The encoding. </summary>
        public static readonly Encoding Encoding = Encoding.UTF8;

        /// <summary>   The end of stream. </summary>
        public static readonly char EndOfStream = '\uFFFF';

        private readonly MemoryStream memory;
        private readonly BinaryReader memoryReader;
        private readonly BinaryWriter memoryWriter;

        /// <summary>   The position. </summary>
        public readonly CharStreamPosition Position;

        private readonly BinaryReader sourceReader;

        /// <summary>   Constructor. </summary>
        /// <param name="source">   Source for the. </param>
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

        /// <summary>   Constructor. </summary>
        /// <param name="chars">    The characters. </param>
        public CharStream(char[] chars)
            : this(new MemoryStream(Encoding.GetBytes(chars)))
        {
        }

        /// <summary>   Constructor. </summary>
        /// <param name="text"> The text. </param>
        public CharStream(string text)
            : this(new MemoryStream(Encoding.GetBytes(text.ToCharArray())))
        {
        }

        /// <summary>   At position. </summary>
        /// <param name="position"> The position. </param>
        /// <returns>   A CharStream. </returns>
        public CharStream AtPosition(CharStreamPosition position)
        {
            return new CharStream(memory, memoryReader, memoryWriter, sourceReader, position);
        }

        /// <summary>   Returns the top-of-stack object without removing it. </summary>
        /// <returns>   The current top-of-stack object. </returns>
        public char Peek()
        {
            return Peek(1)[0];
        }

        /// <summary>   Returns the top-of-stack object without removing it. </summary>
        /// <param name="count">    Number of. </param>
        /// <returns>   The current top-of-stack object. </returns>
        public ImmutableList<char> Peek(long count)
        {
            var readChars = ImmutableList<char>.Empty;
            if (BufferChars(CharsNeeded(count, Position)))
            {
                memory.Seek(Position.Index, SeekOrigin.Begin);
                readChars = memoryReader.ReadChars((int) count).ToImmutableList();
            }
            if (readChars.Count < count)
            {
                readChars = readChars.Add(EndOfStream);
            }
            return readChars;
        }

        /// <summary>   Peek position. </summary>
        /// <param name="count">    Number of. </param>
        /// <returns>   A CharStreamPosition. </returns>
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

    /// <summary>   A character stream position. </summary>
    public struct CharStreamPosition
    {
        /// <summary>   The column. </summary>
        public readonly long Column;

        /// <summary>   Zero-based index of the. </summary>
        public readonly long Index;

        /// <summary>   The line. </summary>
        public readonly long Line;

        /// <summary>   Constructor. </summary>
        /// <param name="index">    Zero-based index of the. </param>
        /// <param name="line">     The line. </param>
        /// <param name="column">   The column. </param>
        public CharStreamPosition(long index, long line, long column)
        {
            Index = index;
            Line = line;
            Column = column;
        }

        /// <summary>   Position after characters. </summary>
        /// <param name="cs">   The create struct. </param>
        /// <returns>   A CharStreamPosition. </returns>
        public CharStreamPosition PositionAfterChars(ImmutableList<char> cs)
        {
            Predicate<char> f = c => c == '\n' || c == '\r';
            var n = Array.FindAll(cs.ToArray(), f).Length;
            var l = Array.FindLastIndex(cs.ToArray(), f);
            var line = Line + n;
            var col = Column + l > -1 ? cs.Count - l : cs.Count;
            var idx = Index + cs.Count;
            return new CharStreamPosition(idx, line, col);
        }
    }
}