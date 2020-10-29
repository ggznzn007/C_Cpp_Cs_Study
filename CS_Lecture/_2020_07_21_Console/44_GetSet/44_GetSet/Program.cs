using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/* 객체지향의 원칙에서
 * 변수는 private으로 선언하고
 * 변수를 접근할 때는 함수를 만들어서 사용한다
 * <장점>
 * 1) 변수에 값을 대입시 함수에 조건문을 넣으면 되니까
 *    일괄 적용이 가능하다
 * 2) 변수에 마음대로 접근할 수 없으니까 에러를 방지할 수 있다.
 * <현실>
 * 1) 구조체 사용하던 습관=>변수 마음대로 접근
 * 2) 변수만 선언하는 것보다 함수를 만드는 게 굉장히 귀찮은 일이다
 * 3) 변수에 값을 넣는 함수나 동작을 하는 함수가 모두 같은 모양이라
 *    가독성이 떨어진다
 * => 그래서 생각보다 잘 안지키는 경우가 많다.
 */

namespace _44_GetSet
{
    class Time
    {
        //private int hour, min, sec;
        public int hour, min, sec;
        public Time(int h, int m, int s)
        { SetHour(h); SetMin(m); SetSec(s); }
        public int GetHour() {
            return hour;
        }
        public void SetHour(int aHour)
        {
            if (aHour < 24)
                hour = aHour;
        }
        public int GetMin() { return min; }
        public void SetMin(int aMin)
        { if (aMin < 60) min = aMin; }
        public int GetSec() { return sec; }
        public void SetSec(int aSec)
        { if (aSec < 60) sec = aSec; }
        public void OutTime()        
        {
            Console.WriteLine("현재 시간은 {0}시"
                + " {1}분 {2}초이다", hour, min, sec);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Time Now;
            Now = new Time(12, 30, 45);
            Now.OutTime();
            Now.SetHour(55);
            Now.OutTime();

            //Now.hour = 22;
            //if(hour <= 24)
            //    Now.hour = hour;
            //if (hour <= 24)
            //    Now.hour = -20;
        }
    }
}
