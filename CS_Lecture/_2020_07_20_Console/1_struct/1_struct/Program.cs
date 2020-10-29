using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/* C++에서의 struct와 class는 디폴트 접근권한 차이 말고는
 * 100% 같다.
 * 즉 객체를 만들 수 있는 점에서 차이가 없다.
 * 
 * C#에서는 그래서 굳이 왜 객체를 만드는 것이 2개나 필요할까?
 * 쓸데없는 일이 아닐까 하는 생각을 가지게 된다.
 * 
 * 실제 C++로 개발하는 현장에서도 struct는 C언어처럼 데이터의 집합으로
 * 메서드를 포함하는 객체는 class로 사용하는 것이 거의 관습처럼
 * 되어져 왔다.
 * 
 * 그래서 C#은 struct와 class를 차별하기로 결정했다.
 * 2개의 공통점은 필드와 메서드를 모두 가질 수 있다.
 *               모두 object클래스의 상속을 받는다.
 * 2개의 차이점은 struct는 상속이 되지 않는다.
 *               class는 상속이 가능하다
 *               struct는 스택에 올라간다
 *               class는 힙에 올라간다
 *               struct는 기본자료형들의 자료형이다.
 *               class는 string, 배열, 기타 클래스이다.
 *               struct는 생성할 때 new가 필요없다
 *                 -단, 생성자 호출시는 new를 사용
 *               class는 생성할 때 반드시 new로 생성한다
 *                 -단, string을 관습적으로 안해도 된다.
 */

namespace _1_struct
{
    struct Student
    {
        public string Name;
        public int StNum;
    }

    public struct Soldier
    {
        public string Name;
        public int SolNum;

        public Soldier(string name, int num)
        {
            this.Name = name;
            this.SolNum = num;
        }
    }

    class Human
    {
        public string Name;
        public int StNum;
    }

    class Program
    {
        static void Main(string[] args)
        {
            Student b;  // 스택에 올라감
            b.Name = "홍길동";
            b.StNum = 902252;
            Console.WriteLine("{0}, {1}", b.Name, b.StNum);

            Human h = new Human();  // 힙에 올라감
            h.Name = "홍길동";
            h.StNum = 902252;
            Console.WriteLine("{0}, {1}", h.Name, h.StNum);

            Soldier s = new Soldier("장길산", 122334);  // 스택에 올라감
            Console.WriteLine("{0}, {1}", s.Name, s.SolNum);
        }
    }
}
