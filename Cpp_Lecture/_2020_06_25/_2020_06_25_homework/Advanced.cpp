#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;
//1. 세개의 숫자를 입력받아서 가장 큰 수를 출력하는 프로그램을 구현하라
//조건 연산자를 사용하라.
void problem1() {
	int num[3];
	int max = 0;
	cout << "3개의 숫자를 입력해주세요 : ";
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
		if (max < num[i]) max = num[i];
	}
	cout << "가장 큰 수 : " << max << endl;
}
//2. unsigned char val1 = 0x05, val2 = 0x07, val3 = 0 입니다.
//비트이동연산자와 비트논리연산자를 이용해서 두개의 값을 하나로 합치고 출력하세요.
//즉, val3에는 0x57이 담겨있어야 합니다.
void problem2(){
	unsigned char val1 = 0x05, val2 = 0x07, val3 = 0;
	val3 = val3 | val1;
	val3 = (val3 << 4) | val2;
	cout << showbase << hex << (int)val3 << endl;
}
//3. unsigned char val1 = 0x57, val2 = 0, val3 = 0 입니다.
//비트이동연산자와 비트논리연산자를 이용해서 하나의 값을 두개로 분리하고 출력하세요.
//val2는 0x5, val3는 0x7이 담겨있어야 합니다.
void problem3() {
	unsigned char val1 = 0x57, val2 = 0, val3 = 0;
	val2 = val1 >> 4 ;
	//val3 = val1^(val1 & (val1 >> 4 << 4));
	val3 = val2 << 4 ^ val1;
	cout << showbase << hex << (int)val2 << endl;
	cout << showbase << hex << (int)val3 << endl;
}
//4. 미국 인디언들은 1627년에 뉴욕 맨하튼 섬을
//네덜란드 이주자들에게 단돈 24달러에 팔았다고 합니다.
//지금 생각하면 헐값에 판 것 같지만,
//이 돈을 지금까지 은행에 넣어두고
//8 % 의 이자를 복리로 받았다면 지금쯤 엄청난 금액이
//되어 있을 거라고 합니다.
//2010년을 기준으로 이 돈의 가치가 얼마나 되는지
//계산하는 프로그램을 작성하세요.
//복리란 1년이 지날때마다 8 % 가 원금에 포함이 되어서
//그 금액이 다시 원금이 되는 것을 말합니다.
void problem4() {
	double money = 24;
	double a = 1;
	double r = (1 + 0.08);
	cout.precision(20);
	cout << "money : " << money * pow(r, 2010 - 1627) << endl;
}
//5. 5를 입력하면
//o
//*o
//**o
//***o
//****o
//이렇게 출력하세요.
void problem5() {
	cout<<"정수를 입력하세요 : ";
	int n; cin>>n;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == i)	cout<<"o";
			else cout<<"*";
		}cout<<endl;
	}
}
//6. 홀수를 입력하면 됩니다.
//3
 // *
 //***
 // *
//5
 //  *
 // ***
 //*****
 // ***
 //  *
//7를 입력하면
 //   *
 //  ***
 // *****
 //*******
 // *****
 //  ***
 //   *
//이렇게 출력하세요.
void problem6() {
	printf("홀수를 입력하세요 : ");
	int n; cin >> n;
	int space = n / 2 + 1;
	int star = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < space; j++) cout << " ";
		for (int j = 0; j < star; j++)cout << "*";
		if (i < n / 2 ) { space--; star += 2; }
		else { space++; star -= 2; }
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