using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _21_Interface
{
    interface ICharacter
    {
        void Move();
        void Attack();
        void Die();
    }

    class Warrior : ICharacter
    {
        public void Move()
        { Console.WriteLine("전사 - 거침없이 쿵쿵쿵"); }
        public void Attack()
        { Console.WriteLine("전사 - 대검을 휙"); }
        public void Die()
        { Console.WriteLine("전사 - 으와악"); }
    }
    class Wizard : ICharacter
    {
        public void Move()
        { Console.WriteLine("마법사 - 슈우욱 날은다"); }
        public void Attack()
        { Console.WriteLine("마법사 - 파이어볼"); }
        public void Die()
        { Console.WriteLine("마법사 - 아아악"); }
    }
    class Knight : ICharacter
    {
        public void Move()
        { Console.WriteLine("기사 - 말타고 다가닥"); }
        public void Attack()
        { Console.WriteLine("기사 - 창을 쉐엑"); }
        public void Die()
        { Console.WriteLine("기사 - 으윽"); }
    }
    class Program
    {
        static void CharacterRun(params ICharacter[] ic)
        {
            foreach (ICharacter i in ic)
            {
                i.Attack();
                i.Move();
                i.Die();
            }
        }
        static void Main(string[] args)
        {
            ICharacter[] arChar = { new Warrior(), new Wizard(), new Knight() };
            CharacterRun(arChar);
        }
    }
}
