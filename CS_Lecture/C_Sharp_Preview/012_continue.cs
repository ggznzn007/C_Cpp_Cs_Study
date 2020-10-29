using System;

class CSTest
{
    static void Main()
    {
        int i = 0;
        int sum = 0;
        while (1 < 100)
        {
            i++;
            if (i % 2 == 0)
                continue;
            sum = sum + i;
        }
        Console.WriteLine(
            "1 ~ 100중에 홀수들의 합 = {0}", sum);
    }
}