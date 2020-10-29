using System;
using System.Text;

class CSTest
{

    static void Main()
    {

        StringBuilder str = new StringBuilder("알파벳 : ", 40);
        for (char c = 'a'; c <= 'z'; c++)
        {
            str.Append(c);
        }
        str[10] = '_';
        Console.WriteLine(str);

    }
}