using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _18_string_Matter
{
    class Program
    {
        static void Main(string[] args)
        {
            string str = "알파벳";
            for (char c = 'a'; c <= 'z'; c++)
            {
                str += c;
                Console.WriteLine(str);
            }
            //Console.WriteLine(str);
        }
    }
}
