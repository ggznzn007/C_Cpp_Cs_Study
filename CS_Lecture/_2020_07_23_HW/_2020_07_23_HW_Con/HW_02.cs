/*2.사용자로부터 정수를 입력받습니다.
입력 받은 값을 계속 더합니다
사용자가 0을 입력하면 합을 출력합니다
그리고 프로그램을 종료합니다.*/
using System;

namespace HW_02
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 0;
            while (true)
            {
                int num = Convert.ToInt32(Console.ReadLine());
                if (num == 0)
                { Console.WriteLine(sum); break; }
                sum += num;
            }
        }
    }
}