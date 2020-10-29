using System;
class CSTest
{

    static void Main()
    {
        int[] arScore = { 89, 58, 95, 92, 85, 77, 66, 80 };
        Console.WriteLine("정렬전 => ");
        for (int i = 0; i < arScore.Length; i++)
        {
            Console.Write(arScore[i]);
            Console.Write(' ');
        }
        Array.Sort(arScore);//오름차순 정렬
        Array.Reverse(arScore);//내림차순 정렬
        Console.WriteLine();// 개행
        Console.Write("정렬 후 => ");
        Console.WriteLine();
        for (int i = 0; i < arScore.Length; i++)
        {
            Console.Write(arScore[i]); 
            Console.Write(' ');
        } 

    }
}