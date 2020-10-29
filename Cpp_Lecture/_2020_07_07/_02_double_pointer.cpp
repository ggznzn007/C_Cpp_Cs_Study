#include <iostream>

using namespace std;

void main()
{
	int num = 10;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	cout << num << endl;
	cout << *ptr << endl;
	cout << endl;

	cout << dptr << endl; // ptr의 주소
	cout << *dptr << endl; // ptr 변수(공간)
	cout << **dptr << endl; // num
	cout << ***tptr << endl; // num
}