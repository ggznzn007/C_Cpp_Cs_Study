using System;

namespace A// define class A
{
    class MyClass { int i; }
}

namespace B// define class B
{
    class MyClass { double d; }
}

namespace _3_Namespace
{
    class Program
    {
        static void Main(string[] args)// call from Main
        {
            A.MyClass objA = new A.MyClass();// alloc class A
            B.MyClass objB = new B.MyClass();// alloc class B
            Console.WriteLine(objA.ToString());// print in console
            Console.WriteLine(objB.ToString());// print in console
        }
    }
}