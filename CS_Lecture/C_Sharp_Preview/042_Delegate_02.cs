using System;

class CSTest
{
    public static int Add(int a, int b)
    { return a + b; } 
    public static int Sub(int a, int b)
    { return a - b; } 
    public static int Mul(int a, int b)
    { return a * b; } 
    public static int Div(int a, int b)
    { return a / b; }

    static void Main()
    {
        int num1, num2;
        int o;
        Console.Write("Input Num1: ");
        num1 = Convert.ToInt32(Console.ReadLine());
        Console.Write("Input Num2: ");
        num2 = Convert.ToInt32(Console.ReadLine());
        Console.Write("Input Number (1:+, 2:-, 3:*, 4:/) ");
        o = Convert.ToInt32(Console.ReadLine());
        switch (o)
        {
            case 1:
            Console.WriteLine("Result => {0}", Add(num1, num2));
            break;
            case 2:
            Console.WriteLine("Result => {0}", Sub(num1, num2));
            break;
            case 3:
            Console.WriteLine("Result => {0}", Mul(num1, num2));
            break;
            case 4:
            Console.WriteLine("Result => {0}", Div(num1, num2));
            break;
        }
    }
}