#include<iostream>

using namespace std;

void main()
{
	int i = 1;
	int sum = 0; 
	while (i <= 100) // 변수i가 1부터 100까지
	{
		sum = sum + i; // sum변수에 i값을 누적
		i = i + 1;
	}
	cout << sum << endl;// while반복문의 값을 출력
}