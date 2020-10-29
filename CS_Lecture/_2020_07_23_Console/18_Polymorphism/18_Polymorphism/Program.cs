using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _18_Polymorphism
{
    class Character
    {
        public virtual void Move()
        { Console.WriteLine("이동한다"); }
        public virtual void Attack()
        { Console.WriteLine("공격한다"); }
        public virtual void Die()
        { Console.WriteLine("죽는다"); }
    }
    class Warrior : Character
    {
        public override void Move()
        { Console.WriteLine("전사 - 거침없이 쿵쿵쿵"); }
        public override void Attack()
        { Console.WriteLine("전사 - 대검을 휙"); }
        public override void Die()
        { Console.WriteLine("전사 - 으와악"); }
    }
    class Wizard : Character
    {
        public override void Move()
        { Console.WriteLine("마법사 - 슈우욱 날다"); }
        public override void Attack()
        { Console.WriteLine("마법사 - 파이어볼"); }
        public override void Die()
        { Console.WriteLine("마법사 - 아아악"); }
    }
    class Knight : Character
    {
        public override void Move()
        { Console.WriteLine("기사 - 말타고 다가닥"); }
        public override void Attack()
        { Console.WriteLine("기사 - 창을 쉐엑"); }
        public override void Die()
        { Console.WriteLine("기사 - 으윽"); }
    }
    class Program
    {
        static void Move(Character c)
        {
            c.Move();
        }
        static void Main(string[] args)
        {
            Move(new Warrior());
            Move(new Wizard());
            Move(new Knight());
            //Character[] arChar = { new Warrior(), new Wizard(), new Knight() };
            //foreach (Character c in arChar)
            //    c.Move();
            //Console.WriteLine("---------------------");
            //foreach (Character c in arChar)
            //    c.Attack();
            //Console.WriteLine("---------------------");
            //foreach (Character c in arChar)
            //    c.Die();
        }
    }
}
