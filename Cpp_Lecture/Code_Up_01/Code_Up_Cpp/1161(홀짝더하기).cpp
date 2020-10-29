#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a >>b;
	if (a % 2)
	{
		cout << "È¦¼ö+";
		
	}
	else
		cout << "Â¦¼ö+";
	if (b % 2)
	{
		cout << "È¦¼ö=";

	}
	else
		cout << "Â¦¼ö=";
	if ((a+b) % 2)
	{
		cout << "È¦¼ö";

	}
	else
		cout << "Â¦¼ö";
		
}