using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _12_foreach
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] ar = {{1,2,3},{4,5,6}};
            foreach (int a in ar)
            {
                Console.Write(a);
                Console.Write(", ");
            }
            Console.WriteLine();
        }
    }
}
