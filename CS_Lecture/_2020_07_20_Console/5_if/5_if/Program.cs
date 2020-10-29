using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _5_if
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 27;
            int r = i % 2;
            if (r == 0)
                Console.WriteLine("i는 짝수");
            else
                Console.WriteLine("i는 홀수");
        }
    }
}
