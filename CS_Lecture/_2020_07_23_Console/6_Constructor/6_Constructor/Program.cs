using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _6_Constructor
{
    class Program
    {
        static void Main(string[] args)
        {
            Student Kim;
            Kim = new Student("김가기", 25);
            Kim.Intro();
            Student Choi = new Student("최승우");
            Choi.Intro();
        }
    }
    class Student
    {
        private string Name;
        private int Age;
        public Student(string aName, int aAge)
            : this(aName)
        {
            //Name = aName;
            Age = aAge;
        }
        public Student(string aName)
        {
            Name = aName;
            Age = 1;
        }
        public void Intro()
        {
            Console.WriteLine("이름: " + Name);
            Console.WriteLine("나이: " + Age);
        }
    }
}
