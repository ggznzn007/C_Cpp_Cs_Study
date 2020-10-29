using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _21_Array
{
    class Program
    {
        static void ViewName(string[] name)
        {
            for (int i = 0; i < name.Length; i++)
                Console.WriteLine(name[i]);
        }
        static void Main(string[] args)
        {
            string[] name = {"홍길동", "임꺽정",
                            "장길산", "일지매",
                            "장나라", "아이유",
                            "박보영", "수지"};
            ViewName(name);
        }
    }
}
