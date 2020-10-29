using System;

class CSTest
{
    static void Main()
    {
        string snum;
        int num;
        do
        {

            Console.WriteLine("숫자를 입력하세요(끝날 때는 0)");
            snum = Console.ReadLine();
            num = Convert.ToInt32(snum);
            Console.WriteLine("입력한 값은 {0}입니다.", num);
        }
        while (num != 0);
    }
}

