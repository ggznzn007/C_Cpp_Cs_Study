#include <iostream>

using namespace std;

void SwapTwo(int& a, int& b)
{// 레퍼런스를 이용하여 a,b에 있는 값을 swap
	int temp = a;
	a = b;
	b = temp;

}

void main()
{
	int a = 10, b = 20;	cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
	SwapTwo(a, b); cout << endl;
	cout << '\t' << a << endl;
	cout << '\t' << b << endl;
}