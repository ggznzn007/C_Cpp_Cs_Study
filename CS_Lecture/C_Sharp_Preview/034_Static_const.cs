using System;

class SEASON
{
    public const string SPRING = "봄";
    public const string SUMMER = "여름";
    public const string FALL = "가을";
    public const string WINTER = "겨울";
}

class CSMain
{
    static void Main()
    {
        Console.WriteLine("{0}", SEASON.SPRING);
        Console.WriteLine("{0}", SEASON.SUMMER);
        Console.WriteLine("{0}", SEASON.FALL);
        Console.WriteLine("{0}", SEASON.WINTER);
    }
}