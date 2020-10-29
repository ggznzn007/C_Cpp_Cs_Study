/*3. 구구단을 출력하되 1을 입력하면 홀수단만
   2를 입력하면 짝수단만 출력하라*/
using System;

namespace HW_03
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = Int32.Parse(Console.ReadLine());
            if (num == 1)
            {
                for (int i = 1; i <= 9; i += 2)
                {
                    for (int j = 1; j <= 9; j++)
                    {
                        Console.WriteLine("{0} x {1} = {2}", i, j, i * j);
                    }
                }
            }
            else if (num == 2)
            {
                for (int x = 2; x <= 9; x += 2)
                {
                    for (int y = 1; y <= 9; y++)
                    {
                        Console.WriteLine("{0} x {1} = {2}", x, y, x * y);
                    }
                }
            }
        }
    }
}
