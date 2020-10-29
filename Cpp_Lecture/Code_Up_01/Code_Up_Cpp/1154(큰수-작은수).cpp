#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int dis;
	cin >> a >> b;
	if (a > b)
	{
		dis = a - b;
		cout << dis;
	}
	else if (a < b)
	{
		dis = b - a;
		cout << dis;
	}
	else if (a == b)
	{
		dis = 0;
		cout << dis;
	}
		

}