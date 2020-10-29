using System;
using System.Collections;

class CSTest
{
    static void Main()
    {
        ArrayList ar = new ArrayList(10);
        ar.Add(1);
        ar.Add(2.34);
        ar.Add("string");
        ar.Add(new DateTime(2005, 3, 1));
        ar.Insert(1, 1234);

        foreach (object o in ar)
        {
            Console.WriteLine(o.ToString());
        }
        Console.WriteLine("개수 : " + ar.Count);
        Console.WriteLine("용량 : " + ar.Capacity);
    }
}