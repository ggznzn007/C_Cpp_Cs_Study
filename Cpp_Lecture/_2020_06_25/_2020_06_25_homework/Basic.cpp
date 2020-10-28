#include<iostream>
#include<cmath>
using namespace std;
//1. 두개의 정수를 입력받고 몫과 나머지를 출력하세요
void problem1() {
	cout << "2개의 정수를 입력하세요 : ";
	int num1, num2;
	cin >> num1 >> num2;
	if (num2 == 0) {
		cout << "divide by zero" << endl; return;
	}
	cout << "몫 : "<< num1/num2 <<" 나머지 : " << num1%num2 <<endl;
}
//2. 세개의 정수를 입력받고 각각의 수의 제곱을 구해서 모두 더하세요.
//즉, num1의 제곱 + num2의 제곱 + num3의 제곱
void problem2() {
	cout << "3개의 정수를 입력하세요 : ";
	int num1,num2,num3;
	cin >> num1>>num2>>num3;
	cout << "제곱의 합 : "<< pow(num1,2)+pow(num2,2)+pow(num3,2) << endl;
}
// 3. while문을 이용해서 1부터 100까지 출력하세요
void problem3() {
	int num = 1;
	while (num <= 100) {
		cout << num++ << " ";
	}
	cout << endl;
}
//4. while문을 이용해서 10부터 20까지 출력하세요
void problem4() {
	int num = 10;
	while (num <= 20) {
		cout << num++ << " ";
	}
	cout << endl;
}
//5. while문을 이용해서 1부터 10까지 합을 출력하세요

void problem5() {
	int num = 1;
	int sum = 0;
	while (num <= 10) {
		sum += num++;
	}
	cout << sum << endl;
}
//6. while문을 이용해서 1부터 10까지 중에 짝수만 출력하세요
//while문내에 조건문을 넣어주면 됨
//짝수 조건 if num % 2 == 0:
void problem6() {
	int num = 1;
	while (num <= 10) {
		if (num % 2 == 0) cout << num << " ";
		num++;
	}
	cout << endl;
}
// 7. 양의 정수를 입력받고 그 수만큼 "감사합니다"를 출력하세요
void problem7() {
	cout << "양의 정수를 입력하세요 : ";
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
		cout << "감사합니다" << endl;
	cout << endl;
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
		else if (sel == 7) { problem7(); }
		cout << endl;
	}
	return 0;
}