using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/* 추상클래스
 * 일부는 구현이 가능한데 일부는 구현을 정할 수 없어서
 * 자식 클래스로 하여금 구현을 강요하고 싶을 때
 * 
 * 추상 클래스는 객체를 만들 수 없다.
 * 무조건 상속을 전제로 한다
 */

namespace _19_abstractClass
{
    abstract class Animal
    {
        public abstract void Sound();
        public void Eat()
        { Console.WriteLine("얌냠"); }
    }
    class Dog : Animal
    {
        public override void Sound()
        {
            Console.WriteLine("멍멍");
        }
    }
    class Cow : Animal
    {
        public override void Sound()
        {
            Console.WriteLine("음메");
        }
    }
    class Cat : Animal
    {
        public override void Sound()
        {
            Console.WriteLine("야옹");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Animal A;
            A = new Dog(); A.Sound();
            A = new Cow(); A.Sound();
            A = new Cat(); A.Sound();
        }
    }
}
