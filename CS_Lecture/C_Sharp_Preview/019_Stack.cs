using System;
using System.Collections;

class CSTest
{
    static void Main()
    {
        Stack st = new Stack();// stack구조
        st.Push(1);// 들어간 순서대로 출력이 되지 않고 
        st.Push(2);// 마지막의 들어간 자료가 먼저 출력됨
        st.Push(3);

        Console.WriteLine(st.Pop());//3
        Console.WriteLine(st.Pop());//2
        Console.WriteLine(st.Pop());//1
    }
}