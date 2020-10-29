#include <iostream>

using namespace std;

int main()
{
	int a, b,c;
	int temp;
	cin >> a >> b>>c;
	temp = a < b ? a : b;//a가b보다 작은게 참이면 a를 아니면 b를;
	temp = temp < c ? temp : c;//temp가 c보다 작은게 참이면 temp를 아니면 c를;
	cout << temp;
	return 0;
}