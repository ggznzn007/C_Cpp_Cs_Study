using System;
using A;// 네임스페이스 아래에 자주 사용하는 
        //함수나 클래스를 그냥 쓰더라도 자동으로 인식 하라는 통보
        //using B;

namespace A
{
    class MyClass { int i; }// MyClass라는 단어를 출력

    namespace B
    {
        class MyClass { double d; }
    }

    namespace _3_Namespace
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
}