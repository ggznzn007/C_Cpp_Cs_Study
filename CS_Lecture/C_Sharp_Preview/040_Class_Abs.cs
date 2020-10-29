using System;

abstract class Animal
{
    public abstract void Sound();

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

class CSTest
{
    static void Main()
    {
        Animal A;
        A = new Dog(); A.Sound();
        A = new Cow(); A.Sound();
        A = new Cat(); A.Sound();
    }
}