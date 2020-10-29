using System;
using System.Collections;

class CSTest
{

    static void Main()
    {
        Hashtable ht = new Hashtable();
        ht.Add("boy", "소년");
        ht.Add("girl", "소녀");
        ht["school"] = "학교";
        Console.WriteLine(ht["boy"]);
    }
}