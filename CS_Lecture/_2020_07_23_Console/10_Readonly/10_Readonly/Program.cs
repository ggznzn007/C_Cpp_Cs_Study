using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _10_Readonly
{
    class Human
    {
        private string Name;
        private int Age;
        public Human(string aName, int aAge)
        {
            Name = aName;
            Age = aAge;
        }
        public void SetInfo(string aName, int aAge)
        {
            Name = aName;
            Age = aAge;
        }
        public void Intro()
        {
            Console.WriteLine("이름: " + Name);
            Console.WriteLine("나이: " + Age);
        }
    }
    class Kingdom
    {
        readonly public int maul;
        readonly public Human King;
        private int Vassal;
        public Kingdom(string aName, int aAge, int aVassal)
        {
            King = new Human(aName, aAge);
            Vassal = aVassal;
            maul = 10;
        }
        public void Intro()
        {
            Console.WriteLine("왕은? ");
            King.Intro();
            Console.WriteLine("신하: {0}명", Vassal);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Kingdom Korea;
            Korea = new Kingdom("왕건", 45, 2500);
            Korea.Intro();
            //Korea.King = new Human("궁예", 33);
            Korea.King.SetInfo("궁예", 33);
            Korea.Intro();
            Console.WriteLine(Korea.maul);
            //Korea.maul = 100;
            Console.WriteLine(Korea.maul);
            Kingdom Josun;
            Josun = new Kingdom("이성계", 52, 3000);
            Josun.Intro();
        }
    }
}
