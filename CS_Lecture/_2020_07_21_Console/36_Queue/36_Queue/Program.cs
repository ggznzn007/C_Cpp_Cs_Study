using System;
using System.Collections;

namespace _36_Queue
{
    class Program
    {
        static void Main(string[] args)
        {
            Queue qu = new Queue();
            qu.Enqueue(1);
            qu.Enqueue(2);
            qu.Enqueue(3);

            Console.WriteLine(qu.Dequeue());
            Console.WriteLine(qu.Dequeue());
            Console.WriteLine(qu.Dequeue());
        }
    }
}
