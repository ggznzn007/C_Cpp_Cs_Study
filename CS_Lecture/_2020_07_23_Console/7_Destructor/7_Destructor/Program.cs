using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _7_Destructor
{
    class DB
    {
        private string DBId;
        public DB(string dbId)
        {
            DBId = dbId;
            Console.WriteLine("생성자 : {0} ID로 DB를 "
                + "연결한다", dbId);
        }
        ~DB()
        {
            DBId = null;
            Console.WriteLine("소멸자 : DB 연결을 해제한다");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            DB S = new DB("SDB");
            Console.WriteLine("DB 입출력");
        }
    }
}
