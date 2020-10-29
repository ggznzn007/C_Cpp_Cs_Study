#include <iostream>
using namespace std;

int main()
{
	int a;
	int b = 0;
	int c = 0;

	cin >> a;

	while (a > b)
	{
		c += 1;
		b = b + c;
	}
	cout << b;
	return 0;
}