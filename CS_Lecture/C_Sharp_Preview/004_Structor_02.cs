using System;

namespace _11_Stuructor
{
    class Program
    {
        static void Main(string[] args)
        {
            //Student b("홍길동", 902521); // Error 
            Student b = new Student("홍길동", 902521);
            b.OutInfo();
        }
    }
    struct Student
    {
        public string Name;
        public int StNum;
        public Student(string aName, int aStNum)
        {
            Name = aName;
            StNum = aStNum;
        }
        public void OutInFo()
        {
            Console.WriteLine("{0}, {1}", Name, StNum);
        }
    }
}