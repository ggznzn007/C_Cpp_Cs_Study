#include <iostream>
using namespace std;

int main()
{
	int i, a, b, c, d, j, k, cnt = 0;
	cin >> a >> b >> c;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			for (k = 0; k < c; k++)
			{
				cout << i << " " << j << " " << k << endl;
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}