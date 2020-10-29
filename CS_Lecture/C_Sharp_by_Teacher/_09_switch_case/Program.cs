using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _09_switch_case
{
    class Program
    {
        static void Main(string[] args)
        {
            int result = 0;
            int num0 = 0, num1 = 0;

            Console.WriteLine("산술 연산을 합니다");
            Console.WriteLine("첫 번째 숫자를 입력하세요");
            num0 = Int32.Parse(Console.ReadLine());

            Console.WriteLine("두번째 숫자를 입력하세요");
            num1 = Int32.Parse(Console.ReadLine());

            Console.WriteLine("연산자를 입력하세요(+ - * /)");
            string strOp = Console.ReadLine();

            switch (strOp)
            {
                case "+":
                    result = num0 + num1;
                    break;
                case "-":
                    result = num0 - num1;
                    break;
                case "*":
                    result = num0 * num1;
                    break;
                case "/":
                    result = num0 / num1;
                    break;
            }             

            Console.WriteLine("결과값은 {0}입니다", result);
        }
    }
}
