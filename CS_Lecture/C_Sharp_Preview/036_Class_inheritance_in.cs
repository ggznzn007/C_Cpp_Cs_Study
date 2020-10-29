using System;

class Animal { }
class Feline : Animal { }
class Canine : Animal { }
class Cat : Feline { }
class Tiger : Feline { }
class Lion : Feline { }
class Dog : Canine { }
class Wolf : Canine { }
class Jindo : Dog { }

class CSTest
{
    static void Main()
    {
        Animal[] ani = new Animal[100];
        ani[0] = new Feline();
        ani[1] = new Canine();
        ani[2] = new Cat();
        ani[3] = new Tiger();
        ani[4] = new Lion();
        ani[5] = new Dog();
        ani[6] = new Wolf();
        ani[7] = new Jindo();
        for (int i = 0; i <= ani.Length;i++)
        {
            Console.Write(ani[i]);
            Console.Write(", ");
        }
        
    }
}