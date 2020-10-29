#include<iostream>

using namespace std;

int main() 
{
	int a, i = 0;
	cin >> hex >> a;               //a를 16진수로 입력
	hex(cout);
	cout.setf(ios::uppercase);    // 16진수 대문자에 사용
	for (i = 1; i < 16; i++) {
		cout << a << '*' << i << '=' << a * i << endl;
	}
	return 0;

}