using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _04_EnumMenu
{
    class Program
    {
        enum SEASON
        {
            SPRING, SUMMER, FALL, WINTER
        }

        static void StringTypeMenu()
        {
            Console.WriteLine("SPRING");
            Console.WriteLine("SUMMER");
            Console.WriteLine("FALL");
            Console.WriteLine("WINTER");
            string sel = Console.ReadLine();

            // 문자열에 해당하는 enum값을 찾아서 얻어옴
            SEASON season = (SEASON)Enum.Parse(
                    typeof(SEASON), sel);

            switch (season)
            {
                case SEASON.SPRING:
                    Console.WriteLine((int)season + ". 봄은 생명이 약동");
                    break;
                case SEASON.SUMMER:
                    Console.WriteLine((int)season + ". 여름은 만물이 성장");
                    break;
                case SEASON.FALL:
                    Console.WriteLine((int)season + ". 가을은 결실을 거둠");
                    break;
                case SEASON.WINTER:
                    Console.WriteLine((int)season + ". 겨울은 만물이 잠이 듬");
                    break;
            }
        }

        static void IntTypeMenu()
        {
            Console.WriteLine("0. 봄");
            Console.WriteLine("1. 여름");
            Console.WriteLine("2. 가을");
            Console.WriteLine("3. 겨울");
            int sel = Int32.Parse(Console.ReadLine());
            switch ((SEASON)sel)
            {
                case SEASON.SPRING:
                    Console.WriteLine("봄은 생명이 약동");
                    break;
                case SEASON.SUMMER:
                    Console.WriteLine("여름은 만물이 성장");
                    break;
                case SEASON.FALL:
                    Console.WriteLine("가을은 결실을 거둠");
                    break;
                case SEASON.WINTER:
                    Console.WriteLine("겨울은 만물이 잠이 듬");
                    break;
            }
        }

        static void Main(string[] args)
        {
            //IntTypeMenu();
            StringTypeMenu();
        }
    }
}
