using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _4_EnumInt
{
    class Program
    {
        enum SEASON
        {
            Spring, Summer, Fall, Winter
        }
        static void Main(string[] args)
        {
            SEASON season;
            season = SEASON.Fall;
            string name = season.ToString();
            Console.WriteLine(name);
            season = (SEASON)Enum.Parse(
                        typeof(SEASON), "Spring");
            Console.WriteLine(season);
            Console.WriteLine((int)season);
        }
    }
}
