using System;

class CSTest
{
    static void Main()
    { 
        Student Kim;
        Kim = new Student("김가기", 25);
        Kim.Intro();
    }
}

class Student
{
    private string Name;
    private int Age;
    public Student(string aName, int aAge)
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