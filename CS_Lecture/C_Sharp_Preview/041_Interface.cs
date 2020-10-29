using System;

interface ICharacter
{
    void Move();
    void Attack();
    void Die();
}

class Warrior : ICharacter
{
    public void Move()
    {
        Console.WriteLine("전사 - 거침없이 쿵쿵쿵");

    }
    public void Attack()
    {
        Console.WriteLine("전사 - 대검을 휙");
    }

    public void Die()
    {
        Console.WriteLine("전사 - 주그");
    }
}

class Wizard : ICharacter
{
    public void Move()
    {
        Console.WriteLine("마법사 - 슈우욱 나른다");

    }
    public void Attack()
    {
        Console.WriteLine("마법사 - 파이어볼");
    }

    public void Die()
    {
        Console.WriteLine("마법사 - 아이고 나 죽네");
    }
}

class Knight : ICharacter
{
    public void Move()
    {
        Console.WriteLine("기사 - 말타고 가");

    }
    public void Attack()
    {
        Console.WriteLine("기사 - 창을 쉐엑");
    }

    public void Die()
    {
        Console.WriteLine("기사 - 죽여");
    }
}

class CSTest
{
    static void CharacterRun(params ICharacter[] ic)
    {
        for (int i = 0; i < ic.Length; i++)
        {
            ic[i].Attack();
            ic[i].Move();
            ic[i].Die();
        }
    }

    static void Main()
    {
        ICharacter[] arChar =
        {
            new Warrior(), new Wizard(), new Knight()
        };

        CharacterRun();
    }
}