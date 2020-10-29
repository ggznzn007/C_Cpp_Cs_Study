using System;

class CSTest
{
    static void Main()
    {
        Kingdom Korea;
        Korea = new Kingdom("왕건", 45, 2500);
        Korea.Intro();
        Kingdom Josun;
        Josun = new Kingdom("이성계", 52, 3000);
        Josun.Intro();
    }
}

class Human
{
    private string Name;
    private int Age;
    public Human(string aName, int aAge)
    {
        Name = aName;
        Age = aAge;
    }
    public void Intro()
    {
        Console.WriteLine("이름:" + Name);
        Console.WriteLine("나이:" + Age);

    }
}

class Kingdom
{
    readonly private Human King;
    private int Vassal;
    public Kingdom(string aName, int aAge, int aVassal)
    {
        King = new Human(aName, aAge);
        Vassal = aVassal;
    }
    public void Intro()
    {
        Console.WriteLine("왕은?");
        King.Intro();
        Console.WriteLine("신하:{0}명", Vassal);
    }
}