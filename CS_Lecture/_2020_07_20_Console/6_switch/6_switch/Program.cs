using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _6_switch
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 1;
            switch (i)
            {
                case 1:
                    //Console.WriteLine("하나");
                    //break;
                case 2:
                    Console.WriteLine("둘");
                    break;
                case 3:
                    Console.WriteLine("셋");
                    break;
                default:
                    Console.WriteLine("그 외의 숫자");
                    break;
            }
        }
    }
}
