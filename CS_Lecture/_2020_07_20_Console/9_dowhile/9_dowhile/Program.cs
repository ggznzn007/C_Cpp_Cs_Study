using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _9_dowhile
{
    class Program
    {
        static void Main(string[] args)
        {
            string snum;
            int num;
            do
            {
                Console.WriteLine("숫자 입력(끝 0)");
                snum = Console.ReadLine();
                //num = Int32.Parse(snum);
                num = Convert.ToInt32(snum);
                Console.WriteLine("입력값 {0}", num);
            } while (num != 0);
        }
    }
}
