using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _10_foreach2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] ar = { { 1, 2, 3 }, { 4, 5, 6 } };
            
            foreach (int a in ar)
            {
                Console.Write(a);
                Console.Write(", ");
            }
            Console.WriteLine();
        }
    }
}

/*namespace _9_foreach
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
            Console.WriteLine("가장 큰 값은 {0}", Max);
        }
    }
}*/