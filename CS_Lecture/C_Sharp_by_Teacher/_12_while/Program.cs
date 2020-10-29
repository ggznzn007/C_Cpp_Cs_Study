using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _12_while
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 0;
            while (num < 20)
            {
                ++num;
                Console.WriteLine("나무를 {0:d2}번 찍었습니다", num);
            }
        }
    }
}
