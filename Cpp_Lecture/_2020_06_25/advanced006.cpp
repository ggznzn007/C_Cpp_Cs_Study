#include<iostream>

using namespace std;

void main()
{
	int size = 7;
	int i, j, k;
	for (i = size; i >= -size; i--)
	{
		for (j = 1; j <= abs(i); j++)
		{
			cout << " ";
		}
		for (k = size; k >= abs(i); k--)
		{
			cout << " *";
		}
		cout << "\n";
	}
	getchar();
}
