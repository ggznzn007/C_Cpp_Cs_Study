using System;
using System.Diagnostics;
using System.Text;

namespace _20_CheckSpeedString
{
    class Program
    {
        static void Main(string[] args)
        {
            Stopwatch sw = new Stopwatch();
            
            string str = "알파벳";
            sw.Start();
            for(char a = 'a'; a <= 'z'; a++)
                str += a;
            sw.Stop();
            Console.WriteLine(str + " : " + sw.Elapsed);

            sw.Reset();
            
            StringBuilder sb =
                new StringBuilder("알파벳", 40);
            sw.Start();
            for (char a = 'a'; a <= 'z'; a++)
                sb.Append(a);
            sw.Stop();
            Console.WriteLine(sb.ToString() + " : " + sw.Elapsed);
        }
    }
}
