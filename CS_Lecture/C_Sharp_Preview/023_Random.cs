using System;
using System.Threading;

class CSTest
{
    static void Main()
    {
        Random R = new Random();
        for (int i = 0; i < 100; i++)
        {
            Console.CursorLeft = R.Next(80);
            Console.CursorTop = R.Next(24);
            Console.Write('*');// 별 랜덤 찍기
            Thread.Sleep(100);
        }
    }
}