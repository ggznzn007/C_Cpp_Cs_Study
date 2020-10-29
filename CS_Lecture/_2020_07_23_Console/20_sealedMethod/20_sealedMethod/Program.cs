using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _20_sealedMethod
{
    class Base
    {
        public virtual void Message()
        { Console.WriteLine("Base Message"); }
    }
    class Derived : Base
    {
        public sealed override void Message()
        {
            Console.WriteLine("Derived Message");
        }
    }
    class Third : Derived
    {
        public new void Message()
        { Console.WriteLine("Third Message"); }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Base[] B = new Base[3];
            B[0] = new Base();
            B[1] = new Derived();
            B[2] = new Third();
            foreach (Base b in B)
            {
                b.Message();
            }
        }
    }
}
