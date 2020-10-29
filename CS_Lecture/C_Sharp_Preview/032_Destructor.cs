using System;


class DB
{
    private string DBId;
    public DB(string dbId)
    {
        DBId = dbId;
        Console.WriteLine("{0} ID로 DB를 연결한다.", dbId);
    }
    ~DB()
    { 
        DBId = null;
        Console.WriteLine("DB 연결을 해제한다.");
    }
}

class CSTest
{
    static void Main()
    {
        DB s = new DB("SDB");
        Console.WriteLine("DB 입출력...");
    }
}