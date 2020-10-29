using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _14_ParentVariableChildObj
{
    class Animal { }
    class Feline : Animal { }
    class Canine : Animal { }
    class Cat : Feline { }
    class Tiger : Feline { }
    class Lion : Feline { }
    class Dog : Canine { }
    class Wolf : Canine { }
    class Jindo : Dog { }
    class Program
    {
        static void Main(string[] args)
        {
            Animal[] ani = new Animal[100];// 참조변수가 100개 생성
            ani[0] = new Feline();
            ani[1] = new Canine();
            ani[2] = new Cat();
            ani[3] = new Tiger();
            ani[4] = new Lion();
            ani[5] = new Dog();
            ani[6] = new Wolf();
            ani[7] = new Jindo();
        }
    }
}
