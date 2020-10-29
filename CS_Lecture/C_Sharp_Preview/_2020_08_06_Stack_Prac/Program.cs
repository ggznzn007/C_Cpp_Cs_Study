using System;
using System.Collections;
using System.Collections.Generic;

namespace _2020_08_06_Stack_Prac
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int n = 1000;
                Stack st = new Stack();
                for (int i = 1; i <= n; i++)
                {
                    string str = Console.ReadLine();
                    int[] m = new int[100];
                    if (str == "push")
                    {
                        st.Push(m);
                        //Console.WriteLine(n);
                    }
                    else if (str == "pop")
                    {
                        while (st.Count > 0)
                            Console.WriteLine(st.Pop());
                    }

                }
            }
        }



    }
}


/*int n = Int32.Parse(Console.ReadLine());
int[] data = new int[1000];
Stack st = new Stack();
for (int i = 1; i <= n; i++)
{
    int h = Int32.Parse(Console.ReadLine());
    int s = data[h];
    st.Push(s);
}

while (st.Count>0)
{
    Console.WriteLine(st.Pop());
}*/
