using System;

class CSTest
{
    static void Main()
    {
        Student Kim;
        Kim = new Student();
        Kim.Name = "김길동";
        Kim.Age = 25;
        Kim.Intro();
    }
}

class Student
{
    public string Name;
    public int Age;
    public void Intro()
    {
        Console.WriteLine("이름:" + Name);
        Console.WriteLine("나이:" + Age);
    }
}
