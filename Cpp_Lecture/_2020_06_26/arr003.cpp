//3. 영단어를 입력받고 영단어를 역순으로 뒤집으세요.
//단, 널값은 그대로여야 합니다.
//역순으로 전환한 값을 출력하세요.

#include<iostream>

using namespace std;

int main()
{
	int a, b, i[10];
	cin >> b;
	for (a = 0; a < b; a++)
		cin >> i[a];
	for (a = b - 1; a >= 0; a--)
		cout << i[a];
	return 0;
}