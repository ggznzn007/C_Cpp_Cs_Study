using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _45_AutoProperty
{
    class Time
    {
        public int Hour
        {
            get;set;
        }
        public int Min
        {
            get; set;
        }
        public int Sec
        {
            get; set;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Time Now = new Time();
            Now.Hour = 10;
            Now.Min = 34;
            Now.Sec = 22;
            Console.WriteLine("{0}:{1}:{2}",
                Now.Hour, Now.Min, Now.Sec);
        }
    }
}
