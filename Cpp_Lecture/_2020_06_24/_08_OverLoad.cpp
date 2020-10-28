#include<iostream>

using namespace std;

int Add(int a, int b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}

void main()
{
	cout << Add(3, 5) << endl;
	cout << Add(3.14, 5.25) << endl;
}