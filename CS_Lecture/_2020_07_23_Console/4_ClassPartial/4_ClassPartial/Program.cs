using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _4_ClassPartial
{
    class Program
    {
        static void Main(string[] args)
        {
            Student Kim;
            Kim = new Student();
            Kim.Name = "홍길동";
            Kim.Age = 25;
            Kim.Intro();
        }
    }

    partial class Student
    {
        public int Age;
        public string Name;
    }

    partial class Student
    {
        public void Intro()
        {
            Console.WriteLine("이름: " + Name);
            Console.WriteLine("나이: " + Age);
        }
    }
}
