#include <iostream>

using namespace std;

void SwapThree(int* a, int* b, int* c)
{// 포인터로 a와 b와 c 주소에 있는 값을 가리킴
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;

}

void main()
{
	int a = 10, b = 20, c = 30;	cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
	cout << '\t' << c << endl;
	SwapThree(&a, &b,&c); cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
	cout << '\t' << c << endl;
	//a에는 b값, b에는 c값, c에는 a값이 출력됨
}