#include <iostream>
using namespace std;

int main()
{
	long long int h, b, c, s;
	double r = 0;

	cin >> h >> b >> s >> c;
	r = h * b * s * c;
	cout << fixed;
	cout.precision(1);
	cout << ceil((r / 8 / 1024 / 1024) * 100) / 100 << ' ' << "MB";
	return 0;

}