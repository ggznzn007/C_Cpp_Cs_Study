#include<iostream>
#include<cmath>
using namespace std;
//1. 2개의 값을 서로 교환하는 swap함수를 만드세요
//int num0 = 10, num1 = 20;
//swap(&num0, &num1);
//을 호출하면 num0은 20을 num1은 10을 담고 있으면 됩니다.
void swap(int* num0, int* num1) {
	int temp = *num0;
	*num0 = *num1;
	*num1 = temp;
}
void problem1() {
	int num0 = 10, num1 = 20;
	swap(&num0, &num1);
	cout << "num0 : " << num0 << " num1 : " << num1 << endl;
}
//2. 3개의 값을 서로 교환하는 swap함수를 만드세요
//int num0 = 10, num1 = 20, num2 = 30;
//swap(&num0, &num1, &num2);
//을 호출하면 num0은 30을 num1은 10, num2는 20을 담고 있으면 됩니다.
void swap(int* num0, int* num1, int* num2) {
	int temp = *num2;
	*num2 = *num1;
	*num1 = *num0;
	*num0 = temp;
}
void problem2() {
	int num0 = 10, num1 = 20, num2 = 30;
	swap(&num0, &num1, &num2);
	cout << "num0 : " << num0 << " num1 : " << num1 << " num2 : "<<num2<<endl;
}
//3. 10개의 실수를 배열로 전달해서 평균을 구하는 함수를 만드세요
double calcAvg(double num[10],double sum) {
	double avg = sum / 10;
	return avg;
}
void problem3() {
	double num[10],sum=0.0,avg=0.0;
	for (int i = 0; i < 10; i++) {
		double temp; 
		cout << "실수를 입력하세요 : "; cin >> temp;
		num[i] = temp;
	}
	for (int i = 0; i < 10; i++) {
		sum += num[i];
	}
	avg = calcAvg(num,sum);
	cout << "평균 : " << avg<< endl;
}
//4. char* name = "korea";
//int len = strlen(name);
//을 하면 len에는 5가 담겨 있습니다.
//strlen함수는 문자열의 끝에 '\0'을 찾아서 그 전까지 개수를 세는 방식으로
//구현되어 있습니다
//직접 int str_len(char* ptr); 함수를 구현하세요
int str_len(char* ptr) {
	int cnt=0;
	for (int i = 0;; i++) {
		if (ptr[i] == '\0') break;
		cnt++;
	}
	return cnt;
}
void problem4() {
	char* name = "korea";
	cout << "len : " << str_len(name) << endl;
}
int main() {
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