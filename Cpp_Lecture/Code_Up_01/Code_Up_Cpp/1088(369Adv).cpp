#include<iostream>

using namespace std;

int main()
{
	int i, n;
	cin >> n;
	for (i = 1; i <= n; i++) //i의 초기값부터 n까지 반복
	{
		if (i % 3 == 0) //3의 배수
			cout << ""; //3의 배수인 경우 공백출력
		else
			cout << i << " ";
	}
	cout << endl;

	return 0;
}