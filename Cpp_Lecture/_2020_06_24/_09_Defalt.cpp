#include<iostream>

using namespace std;

int Add(int a=10, int b=20)
{
	return a + b;
}

int AddTwo(int a, int b=100)
{
	return a + b;
}

void main()
{
	cout << Add(3, 5) << endl;
	cout << Add() << endl;
	cout << AddTwo(200) << endl;
	cout << AddTwo(200,300) << endl;

}
