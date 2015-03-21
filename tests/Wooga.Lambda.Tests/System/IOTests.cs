using NUnit.Framework;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Tests.System
{
    [TestFixture]
    public class IOTests
    {
        [Test]
        public void DoAppliesParameters()
        {
            var one = IO.Return(() => "1");
            var two = IO.Return(() => "2");
            var tre = IO.Return(() => "3");
            var fur = IO.Return(() => "4");
            var x = IO.Do(one, two, (a,b) => a + b);
            var y = IO.Do(one, two, tre, (a, b, c) => a + b + c);
            var z = IO.Do(one, two, tre, fur, (a, b, c, d) => a + b + c + d);
            Assert.AreEqual("12", x);
            Assert.AreEqual("123", y);
            Assert.AreEqual("1234", z);
        }
    }

    [TestFixture]
    public class IOMonadTests
    {
        [Test]
        public void BindAppliesFuncForIO()
        {
            var io = IO.Return(() => "a").Bind<string, int>(s => () => 2);
            Assert.AreEqual(2,io());
        }

        [Test]
        public void ThenExecutesLeftHandIO()
        {
            var check = false;
            var io = IO.Return(() =>
            {
                check = true;
                return "a";
            }).Then(() => 4);
            Assert.AreEqual(4, io());
            Assert.True(check);
        }

        [Test]
        public void ThenIsRightHandIO()
        {
            var io = IO.Return(() => "a").Then(() => 4);
            Assert.AreEqual(4, io());
        }

        [Test]
        public void ReturnCreatesIO()
        {
            Assert.AreEqual("abc", IO.Return(() => "abc")());
        }
    }
}
