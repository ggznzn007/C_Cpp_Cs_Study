using System;

class Archive
{
    public delegate bool SendProg(int nFile);
    public static bool SendPacket(int nFile, SendProg prog)
    {
        for(int i = 0; i<nFile; i++)
        {
            if(prog(i)==false)
            {
                return false;
            }
            System.Threading.Thread.Sleep(500);
        }
        return true;
    }
}

class CSTest
{
    public static bool Progress(int nFile)
    {
        Console.WriteLine("{0}번째 패킷 전송중...(취소시 Esc).", nFile + 1);

        if(Console.KeyAvailable)
        {
            ConsoleKeyInfo cki;
            cki = Console.ReadKey(false);
            if(cki.Key==ConsoleKey.Escape)
            {
                return false;
            }
            return true;
        }
        static void Main()
        {
            if(Archive.SendPacket(10, Progress)==true)
            {
                Console.WriteLine("모든 패킷을 전송했습니다.");
            }
            else
            {
                Console.WriteLine("취소되었습니다.");
            }
        }
    }
}