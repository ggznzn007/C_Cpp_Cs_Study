#include <iostream>
using namespace std;

int main()
{
	int i = 1234;
	double d = 56.789;
	const char* str = "String";
	bool b = true;

	// bool형 출력 방식
	cout << b << endl;
	cout << boolalpha << b << endl;

	// 진법 접두 출력 및 대소문자
	cout << hex << i << endl;
	cout << showbase << i << endl;
	cout << uppercase << i << endl;

	// + 양수 기호 표시
	cout << dec << showpos << i << endl;
}
