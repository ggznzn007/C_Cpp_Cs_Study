using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _37_DateTime
{
    class Program
    {
        static void Main(string[] args)
        {
            DateTime A = new DateTime(2010, 8, 29);
            DateTime B = new DateTime(2019, 8, 9);
            TimeSpan C = B - A;
            Console.WriteLine(C);

            A = new DateTime(2019, 8, 9);
            C = new TimeSpan(1000, 0, 0, 0);
            B = A + C;
            Console.WriteLine(B);
        }
    }
}
