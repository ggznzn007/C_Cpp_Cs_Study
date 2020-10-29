#include<iostream>

using namespace std;

int main()
{
	char a;
	do // 계속 a에 입력받는 변수를 출력하라
	{
		cin >> a;
		cout << a << endl;

	} while (a != 'q');// 입력받은 변수가 q가 아니면
	return 0;
}