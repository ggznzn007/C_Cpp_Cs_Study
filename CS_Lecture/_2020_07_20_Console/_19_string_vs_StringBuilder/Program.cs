using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _19_string_vs_StringBuilder
{
    class Program
    {
        static void GetTimeStringPerfomance()
        {
            Stopwatch sw = new Stopwatch();
            
            string str = "알파벳";
            sw.Start();
            for (char c = 'a'; c <= 'z'; c++)
                str += c;
            sw.Stop();              
            Console.WriteLine("st : " + str + ", 시간 : {0}", sw.Elapsed);
            
        }

        static void GetTimeStringBuilderPerfomance()
        {
            Stopwatch sw = new Stopwatch();
            
            StringBuilder strB = new StringBuilder("알파벳", 40);
            sw.Start();
            for (char c = 'a'; c <= 'z'; c++)
                strB.Append(c);
            sw.Stop();
            Console.WriteLine("SB : " + strB.ToString() + ", 시간 : {0}", sw.Elapsed);

        }
        static void Main(string[] args)
        {
            for (int i = 0; i < 5; i++)
            {
                GetTimeStringPerfomance();
                GetTimeStringBuilderPerfomance();
            }
        }
    }
}
