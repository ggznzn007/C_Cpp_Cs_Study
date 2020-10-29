using System;
using System.Diagnostics;

namespace _38_Stopwatch
{
    class Program
    {
        static void Main(string[] args)
        {
            Stopwatch st = new Stopwatch();
            st.Start();
            for (int i = 0; i < 100000; i++)
            {
                Console.Write(i + ",");
            }
            st.Stop();
            Console.WriteLine("\n총 경과시간={0}",
                                st.Elapsed);
        }
    }
}
