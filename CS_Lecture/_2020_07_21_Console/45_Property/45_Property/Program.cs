using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/* 프로퍼티(Property)
 * 변수는 private, 소문자
 * 프로퍼티는 public, 대문자
 * 프로퍼티는 사용법은 변수처럼
 *           실제 컴파일 된 내용은 Get/Set 함수
 * => 객체지향의 장점 + 가독성
 */

namespace _45_Property
{
    class Time
    {
        private int hour, min, sec;
        public Time(int h, int m, int s)
        { Hour = h; Min = m; Sec = s; }
        public int Hour
        {
            get { return hour; }    // Get함수
            set { if (value < 24) hour = value; }   // Set함수
        }
        public int Min
        {
            get { return min; }
            set { if (value < 60) min = value; }
        }
        public int Sec
        {
            get { return sec; }
            set { if (value < 60) sec = value; }
        }
        public void OutTime()
        {
            Console.WriteLine(
                "현재 시간은 {0}시 {1}분 {2}초이다.",
                Hour, Min, Sec);
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Time Now;
            Now = new Time(12, 30, 45);
            Now.OutTime();
            Now.Hour = 55;
            Now.OutTime();
            Console.Write("{0}:{1}:{2}",
                Now.Hour, Now.Min, Now.Sec);
        }
    }
}
