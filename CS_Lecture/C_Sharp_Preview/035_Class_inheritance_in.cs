using System;

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

class MiddleStudent
{
    public Student S;
    protected int StNum;
    public MiddleStudent(string aName, int aAge, int aStNum)
    {
        StNum = aStNum;
        S = new Student(aName, aAge);
    }
    public void Intro()
    {
        S.Intro();
        Console.WriteLine("학번:" + StNum);
    }
    public void Study()
    {
        Console.WriteLine("나랏 말쌈이 듕궉에 달아...");
    }
}

class CSTest
{
    static void Main()
    {
        MiddleStudent Hong;
        Hong = new MiddleStudent("홍길동", 21, 880706);
        Hong.Intro();
        Hong.Study();
    }
}