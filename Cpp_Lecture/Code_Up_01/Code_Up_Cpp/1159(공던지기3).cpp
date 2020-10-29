#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n >= 50 && n <= 70 || n % 6 == 0)
	{
		cout << "win";
	}
	else
		cout << "lose";
}