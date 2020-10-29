using System;

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
    { Console.WriteLine("전사 - 으아악"); }
}

class Wizard : Character
{
    public override void Move()
    { Console.WriteLine("마법사 - 슈우욱 나른다"); }
    public override void Attack()
    { Console.WriteLine("마법사 - 파이어볼"); }
    public override void Die()
    { Console.WriteLine("마법사 - 아아악"); }
}

class Knight : Character
{
    public override void Move()
    { Console.WriteLine("기사 - 말타고 다그닥"); }
    public override void Attack()
    { Console.WriteLine("기사 - 창을 쉐이키"); }
    public override void Die()
    { Console.WriteLine("기사 - 으윽"); }
}

class CSTest
{
    static void Main()
    {
        Character[] arChar =
            {new Warrior(), new Wizard(), new Knight() };
        for(int i = 0; i<arChar.Length;i++)
        {
            arChar[i].Move();
        }
        for (int i = 0; i < arChar.Length; i++)
        {
            arChar[i].Attack();
        }
        for (int i = 0; i < arChar.Length; i++)
        {
            arChar[i].Die();
        }
    }
}