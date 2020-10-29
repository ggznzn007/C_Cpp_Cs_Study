using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _13_do_while
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 0;
            do
            {
                ++num;
                Console.WriteLine("나무를 {0}번 찍었습니다", num);
            } while (num < 10);
        }
    }
}
