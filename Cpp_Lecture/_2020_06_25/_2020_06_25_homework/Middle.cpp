#include<iostream>

using namespace std;
//1. 두개의 정수를 입력받아서 그 중 큰 수를 출력하는 프로그램을 구현하라. 조건 연산자(삼항연산자를 사용하라)
void problem1() {
	cout << "2개의 정수를 입력하세요 : ";
	int num1, num2;
	cin >> num1 >> num2;
	cout << (num1 > num2 ? num1 : num2);
}
//2. 정수를 입력받고 입력받은 정수 * 16 / 8 * 4를 계산하라
//시프트(비트)연산자를 사용하라.
void problem2() {
	cout << "정수를 입력하세요 : ";
	int num;
	cin >> num;
	cout << (num<<4>>3<<2)<< endl;
}
//3. 양의 정수 입력받고 그 수만큼 3의 배수 출력하세요
//예를 들어 5를 입력받으면 3 6 9 12 15를 출력하면 됩니다
void problem3() {
	int num;
	cout << "양의 정수를 입력하세요 : ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cout << i * 3 << " ";
	}
}
//4. 사용자로부터 정수를 입력받습니다.
//입력 받은 값을 계속 더합니다
//사용자가 0을 입력하면 합을 출력합니다
//그리고 프로그램을 종료합니다.
void problem4() {
	int sum = 0,num;
	while (1) {
		cout << "정수를 입력하세요 : ";
		cin >> num;
		if (num == 0) { cout << "sum : " << sum; break; }
		sum += num;
	}
}
//5. 5를 입력하면
//*
//**
//***
//****
//*****
//이렇게 출력하세요.
void problem5() {
	int num;
	cout << "정수를 입력하세요 : ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
//6. 5를 입력하면
//*****
//****
//***
//**
//*
//이렇게 역순으로 출력하세요.
void problem6() {
	int num;
	cout << "정수를 입력하세요 : ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num-i+1; j++) {
			cout << "*";
		}
		cout << endl;
	}
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
		else if (sel == 5) { problem5(); }
		else if (sel == 6) { problem6(); }
		cout << endl;
	}
	return 0;
}