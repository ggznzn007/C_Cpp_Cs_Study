#include<iostream>

using namespace std;

int main()
{
	int num = 1;

	while (num != 0)
	{
		cin >> num;
		if (num == 0)
		{
			break;
		}
		cout << num << endl;
	}
	return 0;
}