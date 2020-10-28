/* c언어에서의 함수와 구조체 변수가 분리되어 
있으므로 프로그래밍에서는 2개의 결합이 있어야
프로그래밍이 완성된다
(명사(주어) + 동사 : 1형식)
분리 => 상호의존적
C++ : 함수와 변수를 결합하자 => 독립성
     (필요한 부분은 정확하게 정의해서 연결
      스스로 해결할 부분은 자체내에서 해결)

C++ 구조체: C언어의 구조체(only 변수만) + 함수
*/

#include <stdio.h>

struct Point
{
    // 멤버 변수
    int x;
    int y;

    // 멤버 함수
    void insertPoint(int _x, int _y)
    {
        x = _x;
        y = _y;
    }

    void showPoint()
    {
        printf("[%d, %d]\n", x, y);
    }
};

void main()
{
    /*구조체의 변수
      객체
      구조체 == 클래스*/
    Point pt;
    pt.insertPoint(10, 20);
    pt.showPoint();
}