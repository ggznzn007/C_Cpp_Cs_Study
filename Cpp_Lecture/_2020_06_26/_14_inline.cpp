#include <iostream>

#define ADD(x, y)	((x)+(y))

using namespace std;

inline int add(int a, int b)
{
	return a + b;
}

void main()
{
	int result = 0;
	for (int i = 0; i < 1000000; i++)
		result = add(result, i);
	cout << result << endl;
}