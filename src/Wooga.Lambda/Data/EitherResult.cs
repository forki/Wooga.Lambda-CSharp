using System;

namespace Wooga.Lambda.Data
{
    public abstract class EitherResult<TLeft, TRight>
    {
        public abstract Boolean IsLeft();

        public abstract Boolean IsRight();

        public abstract TLeft LeftValue();

        public abstract TRight RightValue();

        internal sealed class Left : EitherResult<TLeft, TRight>
        {
            private readonly TLeft _v;

            public Left(TLeft v)
            {
                _v = v;
            }

            public override bool IsLeft()
            {
                return true;
            }

            public override bool IsRight()
            {
                return false;
            }

            public override TLeft LeftValue()
            {
                return _v;
            }

            public override TRight RightValue()
            {
                throw new InvalidOperationException("Right value: EitherDataLeft");
            }
        }

        internal sealed class Right : EitherResult<TLeft, TRight>
        {
            private readonly TRight _v;

            public Right(TRight v)
            {
                _v = v;
            }

            public override bool IsLeft()
            {
                return false;
            }

            public override bool IsRight()
            {
                return true;
            }

            public override TLeft LeftValue()
            {
                throw new InvalidOperationException("Left value: EitherDataRight");
            }

            public override TRight RightValue()
            {
                return _v;
            }
        }
    }

    
}
