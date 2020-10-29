using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


namespace _8_static
{
    class Student
    {
        static int StNum;
        private string Name;
        private int Age;
        static Student()
        {
            Console.WriteLine("static 생성자");
            StNum = 0;
        }
        public static void StNumInfo()
        {
            Console.WriteLine("학생 수: {0}", StNum);
        }
        public Student(string aName, int aAge)
        {
            Console.WriteLine("일반 생성자");
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
            Student st3 = new Student("장길산", 32);
            st1.Intro();
            st2.Intro();
            st3.Intro();
            Student.StNumInfo();
        }
    }
}
