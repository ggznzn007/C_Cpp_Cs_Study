using System;

class CSTest
{
    public static int Add(int a, int b)
    {
        return a + b;
    }
    public static double Add(double a, double b)
    {
        return a + b;
    }
    public static string Add(string a, string b)
    {
        return a + b;
    }
    static void Main()
    {
        Console.WriteLine("{0} + {1}는 {2}입니다.", 1, 2, Add(1, 2));
        Console.WriteLine("{0} + {1}는 {2}입니다.", 1.2, 3.4, Add(1.2, 3.4));
        string a = "아름다운";
        string b = "우리강산";
        Console.WriteLine("{0} + {1}는 {2}입니다.", a, b, Add(a, b));
    }

}