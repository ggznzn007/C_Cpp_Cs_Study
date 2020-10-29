#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n >= 30 && n <= 40 || n >= 60 && n <= 70)
	{
		cout << "win";
	}
	else
		cout << "lose";
}