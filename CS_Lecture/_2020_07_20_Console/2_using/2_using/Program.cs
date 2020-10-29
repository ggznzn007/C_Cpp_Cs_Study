// A네임스페이스 안에 있는 것들은 그냥 바로 접근할 께
using System;
using A;

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
            MyClass objA = new MyClass();
            B.MyClass objB = new B.MyClass();
            Console.WriteLine(objA.ToString());
            Console.WriteLine(objB.ToString());
        }
    }
}

