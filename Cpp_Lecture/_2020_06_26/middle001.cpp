#include <iostream>

using namespace std;

void SwapTwo(int* a, int* b)
{// 포인터로 a와 b 주소에 있는 값을 가리킴
	int temp = *a;
	*a = *b;
	*b = temp;

}

void main()
{
	int a = 10, b = 20;	cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
	SwapTwo(&a, &b); cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
}