using System;

class CSTest
{
    static public int TotalSum(int from, int to)
    {// 클래스 내에 속해 있는 TotalSum함수를 호출해서 사용
        // 객체지향 개념으로 사용자가 이해하기 쉬움 
        int sum = 0;
        for (int i = from; i <= to; i++)
        {
            sum += i;
        }
        return sum;
    }
    static void Main()
    {
        Console.WriteLine("1~100의 합계 = {0}", TotalSum(1, 100));
    }
}