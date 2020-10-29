using System;

namespace _4_Enum_Case
{
    class Program
    {
        enum SEASON{ SPRING, SUMMER, FALL, WINTER}
        static void RunCase(int num)
        {
            switch ((SEASON)num)
            {
                case SEASON.SPRING:
                    Console.WriteLine("봄은 새싹이 자란다");
                    break;
                case SEASON.SUMMER:
                    Console.WriteLine("해수욕장 가자");
                    break;
                case SEASON.FALL:
                    Console.WriteLine("책을 읽자");
                    break;
                case SEASON.WINTER:
                    Console.WriteLine("스키를 타자");
                    break;
            }
        }
        static void RunCase(SEASON season)
        {
            switch (season)
            {
                case SEASON.SPRING:
                    Console.WriteLine("봄은 새싹이 자란다");
                    break;
                case SEASON.SUMMER:
                    Console.WriteLine("해수욕장 가자");
                    break;
                case SEASON.FALL:
                    Console.WriteLine("책을 읽자");
                    break;
                case SEASON.WINTER:
                    Console.WriteLine("스키를 타자");
                    break;
            }
        }
        static void Main(string[] args)
        {
            Console.WriteLine("0. 봄");
            Console.WriteLine("1. 여름");
            Console.WriteLine("2. 가을");
            Console.WriteLine("3. 겨울");
            Console.WriteLine();
            Console.WriteLine("계절 대문자 영문 입력 >> ");
            string str = Console.ReadLine();
            SEASON season = (SEASON)Enum.Parse(
                        typeof(SEASON), str);
            RunCase(season);
            /*
            Console.WriteLine("번호 선택 >> ");
            int num = Int32.Parse(Console.ReadLine());
            RunCase(num);
            */
        }
    }
}
