using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _11_foreach
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] ar = { 33, 22, 11, 99, 88 };
            int Max = 0;

            foreach (int a in ar)
            {
                if (Max < a)
                    Max = a;
            }
            Console.WriteLine("가장 큰 수 {0}", Max);
        }
    }
}
