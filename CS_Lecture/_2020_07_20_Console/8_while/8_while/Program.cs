using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _8_while
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 1;
            int sum = 0;
            while (i < 100)
            {
                sum = sum + i;
                i++;
            }
            Console.WriteLine("1~99 합 = {0}", sum);
        }
    }
}
