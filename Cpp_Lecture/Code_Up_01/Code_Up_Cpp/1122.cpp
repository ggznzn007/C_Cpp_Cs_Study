#include <iostream>

using namespace std;

int main()
{
	int min, sec;
	cin >> sec;
	min = sec / 60;
	sec = sec % 60;
	cout << min <<" "<< sec;
}