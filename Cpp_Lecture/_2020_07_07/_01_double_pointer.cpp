#include <iostream>

using namespace std;
/*
int * ptr에서
int*는 자료형이고 ptr은 변수이름
ptr은  int변수나 int 배열의 시작주소를 담을 수 있는
역할로 규정
그래서 ptr도 &ptr을 출력하면 주소가 출력된다.
*/
void main()
{
	int num = 10;
	int* ptr = &num;

	cout << &num << endl;// num의 주소값
	cout << *ptr << endl;
	cout << sizeof(ptr) << endl;// 포인터를 가리키는 변수
	cout << &ptr << endl;
}

