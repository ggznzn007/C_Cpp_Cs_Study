using System;

class CSTest
{

    static void Main()
    {
        int i = 1;
        int sum = 0;
        while (1 < 100)
        {
            sum = sum + i;
            if (i >= 50)
                break;
            i++;
        }
        Console.WriteLine("1부터 {0}까지의 합 = {1}", i, sum);
    }
}