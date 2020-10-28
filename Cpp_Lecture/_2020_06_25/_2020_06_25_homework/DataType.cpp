#include<iostream>
#include<string.h>
using namespace std;
//1. 소문자를 입력받고 대문자를 출력하라.
void problem1() {
	char c;
	while (1) {
		cout << "소문자를 입력하세요 : ";
		cin >> c;
		if (c < 'a' || c>'z') { cout << "다시 입력하세요" << endl; continue; }
		c -= ('a'-'A');
		cout << "대문자로 변환된 값 : " << (char)c<<endl;
	}
}
//2. 대문자를 입력받고 소문자를 출력하라.
void problem2() {
	char c;
	while (1) {
		cout << "대문자를 입력하세요 : ";
		cin >> c;
		if (c < 'A' || c>'Z') { cout << "다시 입력하세요" << endl; continue; }
		c += ('a' - 'A');
		cout << "소문자로 변환된 값 : " << (char)c << endl;
	}
}
//3. 두개의 정수를 입력받아서 그 중 큰 수를 출력하는 프로그램을 구현하라.
void problem3() {
	int num1, num2;
	cout << "두개의 정수를 입력하세요 : ";
	cin >> num1 >> num2;
	cout << "큰 수 : " << (num1>num2?num1:num2) << endl;
}
//4. 세개의 숫자를 입력받아서 가장 큰 수를 출력하는 프로그램을 구현하라
void problem4() {
	int num[3];
	int max = 0;
	cout << "3개의 수를 입력하세요" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번째 수 : ";
		cin >> num[i];
		if (max < num[i]) max = num[i];
	}
	cout << "가장 큰 수 : " << max << endl;
}
int main()
{
	while (1) {
		int sel;
		cout << "원하는 과제를 입력하세요 : ";
		cin >> sel;
		if (sel == 0) { cout << "end!!" << endl; break; }
		else if (sel == 1) { problem1(); }
		else if (sel == 2) { problem2(); }
		else if (sel == 3) { problem3(); }
		else if (sel == 4) { problem4(); }

		cout << endl;
	}
	return 0;
}