using System;
using System.Reflection;

/*class Archive
{
    public static void SendPacket(int nFile)
    {
        for(int i=0;i<nFile;i++)
        {
            Console.WriteLine("{0}번째 패킷을 전송중...", i + 1);
            System.Threading.Thread.Sleep(500);
        }
    }
}

class CSTest
{
    static void Main()
    {
        Archive.SendPacket(10);
        Console.WriteLine("모든 패킷을 전송했습니다.");
    }
}*/

class Archive
{
    public delegate void SendProg(int nFile);
    public static void SendPacket(int nFile, SendProg Prog)
    {
        for (int i = 0; i < nFile; i++)
        {
            Prog(i);
            System.Threading.Thread.Sleep(500);
        }
    }
}

class CSTest
{
    public static void Progress(int nFile)
    {
        Console.WriteLine("{0}번째 패킷을 전송중... ", nFile +1);

    }
    public static void EngProgress(int nFile)
    {
        Console.WriteLine("Now Sending {0} Packet. Wait please", nFile + 1);
    }

    static void Main()
    {
        Archive.SendPacket(10, EngProgress);
        Console.WriteLine("모든 패킷을 전송했습니다");
    }
}