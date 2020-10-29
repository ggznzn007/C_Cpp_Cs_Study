using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _04_Operator
{
    class Program
    {
        static void Main(string[] args)
        {
            bool bResult;
            int num0 = 0, num1 = 0;

            Console.WriteLine("대소 비교 연산을 합니다");
            Console.WriteLine("첫 번째 숫자를 입력하세요");
            string strNum0 = Console.ReadLine();
            num0 = Int32.Parse(strNum0);

            Console.WriteLine("두번째 숫자를 입력하세요");
            string strNum1 = Console.ReadLine();
            num1 = Int32.Parse(strNum1);

            bResult = num0 > num1;
            Console.WriteLine("{0}은 {1}보다 크다는 사실은 {2} 입니다",
                            num0, num1, bResult);
        }
    }
}
