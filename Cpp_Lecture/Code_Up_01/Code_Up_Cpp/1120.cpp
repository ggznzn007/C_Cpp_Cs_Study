#include <iostream>

using namespace std;

int main()
{
	double a, b, c;
	float avg;
	cin >> a >> b >> c;
	avg = (a + b + c) / 3;
	cout << fixed;
	cout.precision(2);
	cout << avg;
	return 0;
}