#include<iostream>

using namespace std;

int main()
{
	int n, i = 1;
	int sum = 0;
	cin >> n;// 정수 1개 입력
	while (true)
	{
		sum += i;//sum = sum + i
		if (n <= sum)// 입력받은 정수가 sum과 같을때 i를 출력
		{
			cout << i << endl;
			break;
		}
		i++;// i가 n이 될 때 까지 연속적으로 합한다
	}
	return 0;
}