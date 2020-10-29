using System;

class CSTest
{
    static void Main()
    {
        int i = 1;
        int sum = 0;
        while (i <= 100)
        {

            sum = sum + i;
            i++;
        }
        Console.WriteLine("1부터 100까지의 합 = {0}", sum);
    }
}