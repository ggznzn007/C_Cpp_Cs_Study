using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _41_Method
{
    class Sum
    {
        static public int TotalSum(int from, int to)
        {
            int sum = 0;
            for (int i = from; i <= to; i++)
                sum += i;
            return sum;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("1 ~ 100의 합계 = {0}",
                Sum.TotalSum(1, 100));
        }
    }
}
