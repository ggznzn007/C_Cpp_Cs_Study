#include<iostream>

using namespace std;

int main()
{
	int a, r, n, i;
	cin >> a >> r >> n;
	for (i = 0; i < n - 1; i++)
	{
		a = a * r;
	}
	cout << a << endl;
}