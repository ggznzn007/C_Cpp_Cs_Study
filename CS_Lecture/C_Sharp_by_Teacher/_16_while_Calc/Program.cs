using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _16_while_Calc
{
    class Program
    {
        static void Main(string[] args)
        {
            int result = 0;
            int num0 = 0, num1 = 0;

            while (true)
            {
                Console.Clear();

                Console.WriteLine("산술 연산을 합니다");
                Console.WriteLine("첫 번째 숫자를 입력하세요");
                num0 = Int32.Parse(Console.ReadLine());

                Console.WriteLine("두번째 숫자를 입력하세요");
                num1 = Int32.Parse(Console.ReadLine());

                Console.WriteLine("연산자를 입력하세요(+ - * /)");
                string strOp = Console.ReadLine();

                if (strOp == "+")
                    result = num0 + num1;
                else if (strOp == "-")
                    result = num0 - num1;
                else if (strOp == "*")
                    result = num0 * num1;
                else if (strOp == "/")
                    result = num0 / num1;

                Console.WriteLine("결과값은 {0}입니다", result);
                Console.WriteLine("---------------------------");
                Console.ReadLine();
            }
        }
    }
}
