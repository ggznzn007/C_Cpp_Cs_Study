using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _20_Method
{
    class Program
    {
        static int Calc(string op, int num0, int num1)
        {
            int result = 0;
            switch (op)
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
            return result;
        }

        static void PrintResult(int result)
        {
            Console.WriteLine("=======================");
            Console.WriteLine("결과값은 {0}입니다", result);
            Console.WriteLine("=======================");
        }

        static int GetNum(string title)
        {
            int num = 0;
            Console.WriteLine(title);
            num = Int32.Parse(Console.ReadLine());
            return num;
        }

        static string GetString(string title)
        {
            Console.WriteLine(title);
            string str = Console.ReadLine();
            return str;
        }

        static void Main(string[] args)
        {
            int result = 0;
            int num0 = 0, num1 = 0;

            Console.WriteLine("산술 연산을 합니다");
            num0 = GetNum("첫 번째 숫자 입력");
            num1 = GetNum("두 번째 숫자 입력");
            string strOp = GetString("연산자를 입력하세요(+ - * /)");          
            result = Calc(strOp, num0, num1);
            PrintResult(result);
        }
    }
}
