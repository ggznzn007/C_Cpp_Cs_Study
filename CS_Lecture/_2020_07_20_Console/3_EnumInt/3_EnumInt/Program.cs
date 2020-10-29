using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

/* C/C++의 enum형(열거형)은 여러 개의 상수를 가지도록 만든
 * 사용자 정의 자료형이다.
 * 하지만 열거형 내부의 상수를 바로 접근할 수 있게 허용하였고
 * int와 호환되도록 했으므로 열거형 변수를 사용하기 보다
 * 그냥 int에 담는 경우가 거의 대부분이었다.
 * 
 * C#에서는 규정을 명확하게 해서 해당 enum형 자료형 변수를 만들고
 * 담도록 하였다.
 * 정수와 호환하려면 강제 형변환을 통해 변환하면 가능하다
 * 
 * 또 C/C++에서는 숫자로만 사용되던 enum형 상수값이
 * C#에서는 문자열 or 숫자 2가지로 모두 사용가능하다
 */

namespace _3_EnumInt
{
    class Program
    {
        enum SEASON
        {
            Spring, Summer, Fall, Winter
        }
        static void Main(string[] args)
        {
            SEASON season;
            season = SEASON.Winter;
            Console.WriteLine(season);
            int Value = (int)season;
            Console.WriteLine(Value);
        }
    }
}

