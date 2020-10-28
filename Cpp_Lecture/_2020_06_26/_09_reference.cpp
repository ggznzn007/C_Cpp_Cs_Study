#include <iostream>

using namespace std;

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swapPtr(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;

}

void swapRef(int& ra, int& rb)// Reference == Nickname(김두한==긴또깡)
{				//레퍼런스에서 &는 선언의 의미이다
	int temp = ra;
	ra = rb;
	rb = temp;
}

void main()
{
	int num0 = 10, num1 = 20;
	cout << "num0: " << num0 <<"\n";
	cout << "num1: " << num1 <<"\n\n";
	/*swap(num0, num1);*/
	/*swapPtr(&num0, &num1);*/
	swapRef(num0, num1);
	cout << "num0: " << num0 << "\n";
	cout << "num1: " << num1 << "\n";
}