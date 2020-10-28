#include<iostream>

using namespace std;

void main()
{
	int a, b, res;
	
	cout << "Enter two numbers :::";
	cin >> a >> b;

	res = a + b;
	cout << "\n\n" << a << "+" << b << "=" << res;

	res = a - b;
	cout << "\n\n" << a << "-" << b << "=" << res;

	res = a * b;
	cout << "\n\n" << a << "*" << b << "=" << res;

	res = a / b;
	cout << "\n\n" << a << "/" << b << "=" << res;

	res = a % b;
	cout << "\n\n" << a << "%" << b << "=" << res;
	
}


