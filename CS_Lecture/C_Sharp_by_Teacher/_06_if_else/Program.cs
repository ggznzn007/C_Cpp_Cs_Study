using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _06_if_else
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 0;

            Console.Write("숫자를 입력하세요 : ");
            num = Int32.Parse(Console.ReadLine());

            if (num == 100)
                Console.WriteLine("num은 100입니다");
            else
                Console.WriteLine("num은 100이 아닙니다");
        }
    }
}
