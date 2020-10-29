using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _02_DataType
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 100;
            double dnum = 3.14;
            char ch = 'a';
            string name = "홍길동";
            Console.WriteLine(num + " " + dnum + " "
                               + ch + " " + name);
            Console.WriteLine("{0} {1} {2} {3}",
                               num, dnum, ch, name);
        }
    }
}
