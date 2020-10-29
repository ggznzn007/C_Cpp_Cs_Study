/*8. 두 개의 정수를 입력받습니다.
    두 정수를 포함한 사이의 정수의 합을 출력하세요
   예를 들면 3과 5를 입력하면 3+4+5의 합을 출력하면 됩니다.*/
using Microsoft.Win32.SafeHandles;
using System;

namespace HW_08
{
    class Program
    {
        static void Main()
        {
            int x = Int32.Parse(Console.ReadLine());
            int y = Int32.Parse(Console.ReadLine());
            int sum;
            if (x > y)
            {
                int temp = x;
                x = y;
                y = temp;
            }
            for (sum = 0; x <= y; x++)
            {
                sum += x;
            }
            Console.Write(sum);
        }
    }
}

/*for(i=0;i<=j;i++)
            {
                sum +=i;
                
            }
            Console.Write(sum);*/
