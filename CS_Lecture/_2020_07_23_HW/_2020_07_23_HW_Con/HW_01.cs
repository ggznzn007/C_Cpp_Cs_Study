using System;

namespace HW_01
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = Convert.ToInt32(Console.ReadLine());
            for(int i = 1;i<=num;i++)
            {
                Console.Write(i*3);
                Console.Write(" ");
            }
            Console.WriteLine();
        }
    }
}