#include <iostream>

using namespace std;

int main()
{
	int year;
	cin >> year;
	//1. 해(year)가 4의 배수이면서 100의 배수가 아니면 윤년.
	// (year%4 == 0) AND (year%100 != 0)
	//또는
	//2. 400의 배수이면 윤년.
	//(year%400 == 0)
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
	return 0;
}