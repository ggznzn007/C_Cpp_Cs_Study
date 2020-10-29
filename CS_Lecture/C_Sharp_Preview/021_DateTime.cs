using System;

class CSTest
{
    static void Main()
    {
        DateTime A = new DateTime(2010, 8, 29);
        DateTime B = new DateTime(2015, 11, 23);
        TimeSpan C = B - A;
        Console.WriteLine(C);

        A = new DateTime(2015, 11, 23);
        C = new TimeSpan(1000, 0, 0, 0);
        B = A + C;
        Console.WriteLine(B);
    }
}