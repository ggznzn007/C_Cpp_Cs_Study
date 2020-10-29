using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _17_virtual
{
    class Base
    {
        public virtual void Message()
        { Console.WriteLine("Base Message"); }
    }
    class Derived : Base
    {
        public override void Message()
        { Console.WriteLine("Derived Message"); }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Base B = new Base();
            Derived D = new Derived();
            B.Message();
            D.Message();
            /* 부모변수에 자식 객체을 담는경우
             * virtual 을 안 붙인 경우는 부모클래스의 메서드가 호출되고
             * virtual 을 붙인 경우는 자식객체의 메서드가 호출된다.
             * virtual : 가상의 < 사실상의
             * 플라톤 idea(이데아)
             */

            /* virtual메서드를 override메서드로 역시
             * virtual메서드가 된다
             * virtual메서드는 부모의 변수라 할지라도
             * 실질적인 객체를 찾아 해당 객체의 메서드를
             * 호출해주게 된다.
             * 
             * virtual이 있어서 다형성의 관리가 가능해진다
             * virtual은 바지사장말고 진짜 사장 나와라
             */
            Base B2 = D;
            B2.Message();
        }
    }
}
