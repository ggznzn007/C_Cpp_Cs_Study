using System;

class Base
{
    public void Message()
    { Console.WriteLine("Base Message"); }
}

class Derived : Base
{
    new public void Message()
    { Console.WriteLine("Derived Message"); }
}

class CSTest
{
    static void Main()
    {
        Base B = new Base();
        Derived D = new Derived();
        B.Message();
        D.Message();
        B = D;
        B.Message();
    }
}