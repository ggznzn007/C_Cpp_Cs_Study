#include <iostream>

using namespace std;

int main()
{
	int C;
	float F;
	cin >> C;
	F = 1.8 * C + 32;
	//F = 9.0 / 5.0 * C + 32;
	//F =(double)(9/5)*C+32;
	cout << fixed;
	cout.precision(3);
	cout << F;
	return 0;
}