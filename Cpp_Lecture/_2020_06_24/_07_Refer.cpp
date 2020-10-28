#include<iostream>

using namespace std;

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swapPointer(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void swapRef(int& ra, int& rb)
{
	int temp = ra;
	ra = rb;
	rb = temp;
}

void main()
{
	int num1 = 10, num2 = 20;
	int num3 = 10, num4 = 20;
	int num5 = 10, num6 = 20;
	swap(num1, num2);
	cout << "swap [" << num1 << ", " << num2 << "]" << endl;
	swapPointer(&num3, &num4);
	cout << "swap [" << num3 << ", " << num4 << "]" << endl;
	swapRef(num5, num6);
	cout << "swap [" << num5 << ", " << num6 << "]" << endl;
}