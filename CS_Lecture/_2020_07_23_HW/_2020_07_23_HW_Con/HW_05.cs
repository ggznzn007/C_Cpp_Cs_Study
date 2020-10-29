/*5. 두 수를 입력받고 최소공배수를 구하세요.*/
using System;

namespace HW_05
{
    class Program
    {
        static void Main()
        {
            Console.Write("정수 입력 : ");
            int n = Int32.Parse(Console.ReadLine());

            Console.Write("정수 입력 : ");
            int m = Int32.Parse(Console.ReadLine());

            int gong;
            if (n > m)
            {
                int temp = n;
                n = m;
                m = temp;
            }
            for (int i = m; ; i += m)
            {
                if (i % n == 0)
                {
                    gong = i;
                    break;
                }
            }
            Console.Write("최소공배수 : ", gong);

        }
    }
}