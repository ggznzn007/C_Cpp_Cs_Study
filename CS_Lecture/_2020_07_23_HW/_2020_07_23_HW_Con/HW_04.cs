/*4. 0부터 1씩 증가한 값을 누적하여 더합니다.
   모두 더한값이 1000이 넘을 때 의 총합과 더한 값을 구하세요.*/
using System;
using System.Diagnostics.CodeAnalysis;

namespace HW_04
{
    class Program
    {
        static void Main()
        {
            int i;
            int sum = 0;
            for (i = 0; ; i++)
            {
                sum += i;
                if (sum > 1000)
                {
                    break;
                }

            }
            Console.WriteLine("총합은 {0} i는 {1}", sum, i);

        }
    }
}