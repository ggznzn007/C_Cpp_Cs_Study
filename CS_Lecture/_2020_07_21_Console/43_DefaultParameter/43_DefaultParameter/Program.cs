using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _43_DefaultParameter
{
    class Program
    {
        public static void PrintMessage(
            string m = "감사합니다", int n = 1)
        {
            for (int i = 0; i < n; i++)
                Console.WriteLine(m);
        }
        static void Main(string[] args)
        {
            PrintMessage("안녕하세요", 2);
            PrintMessage("어떠세요?", 3);
            PrintMessage("한 번만 출력되는 메시지");
            PrintMessage();
        }
    }
}
