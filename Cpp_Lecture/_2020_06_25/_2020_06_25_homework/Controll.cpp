#include<iostream>
#include<cmath>
using namespace std;
//1. 두개의 실수를 입력받고 덧셈 뺄셈 곱셈 나눗셈을
//+ -*/ 기호를 입력받고 연산결과를 출력하라
void problem1() {
	int num1, num2;
	char op;
	cout << "두개의 실수를 입력하세요 : ";
	cin >> num1 >> num2;
	cout << "연산자를 입력하세요 : ";
	cin >> op;
	if (op == '+') cout << num1 << " + " << num2  << " = "<< num1 + num2 << endl;
	else if (op == '-') cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	else if (op == '*') cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
}
//2. 정수를 입력받고 절대값을 구하라(-5, 5 = > 5)
void problem2() {
	int num;
	cout << "정수를 입력하세요 : ";
	cin >> num;
	if (num < 0) num *= -1;
	cout << "num : " << num << endl;
}
// 3. 출력하기 위한 구구단의 숫자를 입력받고 해당 구구단을 출력하세요
void problem3() {
	int num;
	cout << "구구단을 출력할 수를 입력하세요 : ";
	cin >> num;
	for (int i = 1; i <= 9; i++) {
		cout << num << " * " << i << " = " << num * i << endl;
	}
}
//4. 3번을 역순으로 출력하세요
void problem4() {
	int num;
	cout << "구구단을 출력할 수를 입력하세요 : ";
	cin >> num;
	for (int i = 9; i >= 1; i--) {
		cout << num << " * " << i << " = " << num * i << endl;
	}
}
//5. 나무를 1~10회 찍었다를 출력하세요
void problem5() {
	for (int i = 1; i <= 10; i++) {
		cout << "나무를 " << i << "회 나무를 찍었다" << endl;
	}
}
//6. 나무를 1~10회 찍었다를 출력하고
//다 찍으면 "나무가 쿵"을 출력하세요
void problem6() {
	for (int i = 1; i <= 10; i++) {
		cout << "나무를 " << i << "회 나무를 찍었다" << endl;
	}
	cout << "나무가 쿵" << endl;
}
//7. 나무를 1 ~100회를 찍었다
//3번마다 한번씩 "쿵"
//마지막에는 "나무를 캐었다~"를 출력하세요
void problem7() {
	for (int i = 1; i <= 100; i++) {
		cout << "나무를 "<< i << "회 나무를 찍었다 ";
		if (i % 3 == 0) cout << "쿵 ";
	}
	cout << "나무가 캐었다~" << endl;
}
//8. 나무를 1 ~100회를 찍었다
//3번마다 한번씩 "쿵"
//마지막에는 "나무를 캐었다~"를 출력하세요
//나무를 1회 찍었다
//나무를 2회 찍었다
//나무를 3회 찍었다
//쿵!
//출력할 때 1줄 출력하고 개행하세요
void problem8() {
	for (int i = 1; i <= 100; i++) {
		cout << "나무를 " << i << "회 나무를 찍었다" << endl;
		if (i % 3 == 0) cout << "쿵" << endl;
	}
	cout << "나무가 캐었다~" << endl;
}
//9. 나무를 1 ~100회를 찍었다
//홀수일 때 "쿵", 짝수일때 "짝"을 반복하세요
//5회에 1번씩 "쩍~"을 출력하세요
//5회마다 "쩍~"을 출력하고 개행하세요
//마지막에는 "나무를 캐었다~"를 출력하세요
void problem9() {
	for (int i = 1; i <= 100; i++) {
		cout << "나무를 " << i << "회 나무를 찍었다 " << endl;
		if (i % 2 == 1) cout << "쿵 ";
		else if (i % 2 == 0) cout << "짝 ";
		if (i % 5 == 0) cout << "쩍~" << endl;
	}
	cout << "나무가 캐었다~" << endl;
}
//10. 나무를 찍을 회수와 몇번마다 "쿵"을 반복할지 입력받고
//출력하세요
void problem10() {
	int num,sound;
	cout << "나무를 찍을 회수를 입력해주세요 : "; cin >> num;
	cout << "쿵을 반복할 수를 입력해주세요 : "; cin >> sound;
	for (int i = 1; i <= num; i++) {
		cout << "나무를 " << i << "회 나무를 찍었다" << endl;
		if (i % sound == 0) cout << "쿵"<<endl;
	}
}
//11. 나무를 찍을 회수와 몇번마다 "쿵"을 반복할지 입력받고
//출력하세요
//나무를 찍을 회수를 - 1을 입력하기 전까지는 계속 반복해서
//질의하고 출력하세요
void problem11() {
	while (1) {
		int num, sound;
		cout << "나무를 찍을 회수를 입력해주세요 : "; cin >> num;
		if (num == -1) { cout << "작업이 끝났습니다" << endl; break; }
		cout << "쿵을 반복할 수를 입력해주세요 : "; cin >> sound;
		for (int i = 1; i <= num; i++) {
			cout << "나무를 " << i << "회 나무를 찍었다" << endl;
			if (i % sound == 0) cout << "쿵" << endl;
		}
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
		else if (sel == 7) { problem7(); }
		else if (sel == 8) { problem8(); }
		else if (sel == 9) { problem9(); }
		else if (sel == 10) { problem10(); }
		else if (sel == 11) { problem11(); }
		cout << endl;
	}
	return 0;
}