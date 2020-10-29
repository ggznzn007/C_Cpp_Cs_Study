using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _2_struct
{
    class Program
    {
        static void Main(string[] args)
        {
            //Student a("홍길동", 902511);
            Student b = new Student("홍길동", 902511);
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
        public void OutInfo()
        {
            Console.WriteLine("{0}, {1}", 
                               Name, StNum);
        }
    }
}
