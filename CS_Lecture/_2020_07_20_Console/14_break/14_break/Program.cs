using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _14_break
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
                if (i >= 50)
                    break;
                i++;
            }
            Console.WriteLine("1~{0} 합: {1}"
                                , i, sum);
        }
    }
}
