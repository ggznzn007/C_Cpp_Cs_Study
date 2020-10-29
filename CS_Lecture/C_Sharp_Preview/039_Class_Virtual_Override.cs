using System;

class Base
{
    public virtual void Message()
    { Console.WriteLine("Derived Message"); }
}

class Derived : Base
{
    public override void Message()
    {
        Console.WriteLine("Derived Message");
    }
}

class CSTest
{
    static void Main()
    {
        Base B = new Base();
        Derived D = new Derived();
        B.Message();
        D.Message();
        Base B2 = D;
        B2.Message();
    }
}