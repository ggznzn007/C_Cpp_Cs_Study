#include<iostream>

using namespace std;

int main()
{
	int sum = 0;// 합을 출력할 변수
	int i, n;// n은 입력받을 변수, i는 n까지의 변수
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0) // 짝수 , (i % 2==1) 홀수
			sum = sum + i;
				
	}
	cout << sum;
	return 0;
}