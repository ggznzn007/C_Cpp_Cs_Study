using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/* C#의 모든 클래스와 구조체는 반드시
 * object클래스의 상속을 받게 된다.
 * 그러므로 모든 C#의 객체들은 최상위 부모객체가
 * object이다.
 * 
 * 모든 객체는 object클래스의 변수로 담을 수 있다.
 * 1. object배열로 모두 묶어서 관리하기가 쉽다
 * 2. 메서드 매개변수를 object로만 만들어도 모든 객체를 받을 수 있다.
 */

/* <C# 자료형의 분류>
 * 
 */

namespace _3_Boxing_UnBoxing
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 1234;
            object box = i; // 스택에 있는 1234값이 힙에 복사된다(박싱)
            Console.WriteLine(box);
            int j = (int)box;   // 힙에 있던 1234값이 스택으로 복사된다(언박싱)
            Console.WriteLine(j);

            double d = 3.14;
            object box1 = d;
            Console.WriteLine(box1);
            double d1 = (double)box1;
            Console.WriteLine(d1);

            /*둘 다 모두 같은 용도로 사용된다.
             그런데 왜 2개를 만들어놨을까?

            ArrayList의 Add메서드는 매개변수가 object이므로
            모든 자료형을 전달받아 담을 수 있다.
            범용성은 좋으나 Boxing/UnBoxing이 발생되
            속도가 느리다

            반면에 List<int>의 Add메서드는 매개변수가 int이므로
            int만 담을 수 있다.
            int만 받지만 속도가 빠르다

            자료구조(Data Structure) == 컨테이너 == 컬렉션
            닷넷에서는 컬렉션이라고 부른다(자바도 마찬가지)

            MSDN에서는 일반 컬렉션 < 제너릭 컬렉션 선호한다
            C# Generic == C++ Template
            (일반화 프로그래밍)
             */
             /*
            ArrayList arrList = new ArrayList();
            arrList.Add(10);
            arrList.Add(3.14);
            arrList.Add("홍길동");

            List<int> iList = new List<int>();
            iList.Add(10);
            iList.Add(20);
            */
        }
    }
}
