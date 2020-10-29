using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication2
{
    class Student
    {
        static int StNum;
        private string Name;
        private int Age;
        static Student()
        {
            StNum = 0;
        }
        public Student(string aName, int aAge)
        {
            Name = aName;
            Age = aAge;
            StNum++;
        }
        public void Intro()
        {
            Console.WriteLine("이름: {0}", Name);
            Console.WriteLine("나이: {0}", Age);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Student st1 = new Student("홍길동", 25);
            Student st2 = new Student("임꺽정", 35);
            Student st3 = new Student("장길산", 45);
            st1.Intro();
            st2.Intro();
            st3.Intro();
            /*Student.StNumInfo();*/
        }
    }
}