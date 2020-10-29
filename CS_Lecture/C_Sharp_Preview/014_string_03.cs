using System;

class CSTest
{

    static void Main()
    {
        string str = "알파벳 : ";
        for (char c = 'a'; c <= 'z'; c++)
        {
            str += c;
        }
        Console.WriteLine(str);
    }
}