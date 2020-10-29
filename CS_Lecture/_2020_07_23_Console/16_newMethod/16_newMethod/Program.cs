using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _16_newMethod
{
    class Base
    {
        public void Message()
        { Console.WriteLine("Base Message"); }
    }
    class Derived : Base
    {
        new public void Message()
        {
            //base.Message();
            Console.WriteLine("Derived Message"); 
        }
    }    
    class Program
    {
        static void Main(string[] args)
        {
            Base B = new Base();
            Derived D = new Derived();
            B.Message();
            D.Message();
            B = D;

            /*D객체에는 Base가 물려준 Message()와
             자신이 새로(new) 생성한 Message()가 
             둘다 존재한다
             그런데 부모인 Base B변수에 자식 객체인 
             D를 담고나서 B.Message()를 호출하면
             컴파일러는 Message()의 주체를 B라고
             인식하여 D객체내에 있는 2개의 Message()중에
             부모 Message()를 호출해버린다*/

            // B안에 자식 객체가 들어있다고 생각하지 않고
            // 그냥 B의 Message()를 호출해버린다
            B.Message();
        }
    }
}
