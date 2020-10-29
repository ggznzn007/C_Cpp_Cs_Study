/*6. 입력받은 숫자의 구구단을 출력하는데 역순으로 출력
  예) 3*9=27
      3*8=24...*/
using System;

namespace HW_06
{
    class Program
    {
        static void Main()
        {
            int num = Int32.Parse(Console.ReadLine());
            for ( int i = 9; i >= 1; i--)
            {
                Console.WriteLine("{0} x {1} = {2}", num, i,num*i);                
            }

        }
    }
}