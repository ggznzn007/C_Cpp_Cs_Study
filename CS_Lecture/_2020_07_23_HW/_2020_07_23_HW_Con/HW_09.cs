/*9. 5를 입력하면 아래처럼 그림을 출력하세요
*
o*
oo*
ooo*
oooo**/
using System;

namespace HW_09
{
    class Program
    {
        static void Main(string[] args)
        {           
           int Five = Convert.ToInt32(Console.ReadLine());
           for (int i = 0; i <= Five; i++)
            {
                for (int j = 1; j <= i; j++)
                {                   
                        Console.Write("o");                    
                }
                Console.Write("*");
                Console.WriteLine();               
            }
        }
    }
}

/*if (j == i)
                    {
                        Console.Write("*");
                    }
                    else
                    {
                        Console.Write("o");
                    }
*/


