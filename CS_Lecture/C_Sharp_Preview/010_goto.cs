using System;

class CSTest
{
    static void Main()
    {
        int i = 1;
        int sum = 0;
    start:
        sum = sum + i;
        i++;
        if (i <= 100)
            goto start;
        Console.WriteLine("1~100까지의 합계 = {0}", sum);
    }
}