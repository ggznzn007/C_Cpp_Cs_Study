using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _13_Include
{
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
            Console.WriteLine("이름: " + Name);
            Console.WriteLine("나이: " + Age);
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
            Console.WriteLine("학번: " + StNum);
        }
        public void Study()
        {
            Console.WriteLine("나랏 말쌈이 듕귁에 달아...");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            MiddleStudent Hong;
            Hong = new MiddleStudent("홍길동", 21, 852311);
            Hong.Intro();
            Hong.Study();
        }
    }
}
