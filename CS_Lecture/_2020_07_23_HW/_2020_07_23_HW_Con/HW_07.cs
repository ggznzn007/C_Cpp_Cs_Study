/*7. 정수 n을 입력받고 n!을 구하세요.(factorial)
   5를 입력한경우 1*2*3*4*5를 구하세요.*/
using System;

namespace HW_07
{
    class Program
    {
        static void Main()
        {
            int result = 1;
            int num = Int32.Parse(Console.ReadLine());
            for (int i = 2; i <= num; i++)
            {
                result = result * i;
            }
            Console.WriteLine(result);
        }
    }
}