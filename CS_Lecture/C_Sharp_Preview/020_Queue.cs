using System;
using System.Collections;

class CSTest
{
    static void Main()
    {
        Queue qu = new Queue();//선입선출 구조
        qu.Enqueue(1);
        qu.Enqueue(2);
        qu.Enqueue(3);

        Console.WriteLine(qu.Dequeue());
        Console.WriteLine(qu.Dequeue());
        Console.WriteLine(qu.Dequeue());
    }
}