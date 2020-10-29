using System;

namespace A
{
    class MyClass { int i; }
}

namespace B
{
    class MyClass { double b; }
}

namespace _1_namespace
{
    class Program
    {
        static void Main(string[] args)
        {
            A.MyClass objA = new A.MyClass();
            B.MyClass objB = new B.MyClass();
            Console.WriteLine(objA.ToString());
            Console.WriteLine(objB.ToString());
        }
    }
}
