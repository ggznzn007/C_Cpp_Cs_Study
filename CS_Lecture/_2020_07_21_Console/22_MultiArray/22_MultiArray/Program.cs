using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _22_MultiArray
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] ar2 = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
            //int[,] ar2 = new int[3, 2];
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    Console.Write(ar2[i, j]);
                    Console.Write(", ");
                }
            }
            Console.WriteLine();
            foreach (int n in ar2)
            {
                Console.Write(n);
                Console.Write(", ");
            }

            Console.WriteLine();

            int[][] aar = new int[3][];
            aar[0] = new int[] { 1, 2, 3, 4 };
            aar[1] = new int[] { 5, 6 };
            aar[2] = new int[] { 7, 8, 9, 10, 11, 12 };
            for (int i = 0; i < aar.Length; i++)
            {
                for (int j = 0; j < aar[i].Length; j++)
                {
                    Console.Write(aar[i][j]);
                    Console.Write(", ");
                }
            }
        }
    }
}
