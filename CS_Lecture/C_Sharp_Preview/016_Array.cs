using System;

class CSTest
{

    static void Main()
    {
        int[] ar;
        ar = new int[5];
        for (int i = 0; i < 5; i++)
        {
            ar[i] = i * 2;
        }
        for (int i = 0; i < 5; i++)
        {
            Console.WriteLine(ar[i]);
        }
    }
}