using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _3_ClassBasic
{
    class Student
    {
        public string Name;
        public int Age;
        public void Intro()
        {
            Console.WriteLine("이름: " + Name);
            Console.WriteLine("나이: " + Age);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Student Kim;
            Kim = new Student();
            Kim.Name = "김길동";
            Kim.Age = 25;
            Kim.Intro();
        }
    }
}
