/* 함수를 만드는 2가지 방법
1) 일반 함수
2) 매크로 함수
*/
#include <iostream>

using namespace std;

// 2) 매크로 함수
// 전처리기에 의해 치환
// 속도는 빠르지만 에러를 발생시키기가  쉽다
// 복잡한 매크로 함수 생성시 종종 에러발생
//#define MUL(x, y)	x*y
#define MUL(x, y)	((x)*(y))

// 1) 일반 함수
// 호출시 함수주소로 이동했다가 돌아옴
// 속도가 매크로 함수보다 느리다
// 인자전달과 반환이 명확하다
// 디버깅이 쉽다
int mul(int a, int b)
{
	return a * b;
}

void main()
{
	cout << mul(10, 20) << endl;
	cout << MUL(10, 20) << endl;
	cout << endl;
	cout << mul(1 + 2, 1 + 2) << endl;
	cout << MUL(1 + 2, 1 + 2) << endl;
	/* 매크로 함수는 이것을 주의해야 한다
	cout << 1 + 2 * 1 + 2 << endl;
	*/
}