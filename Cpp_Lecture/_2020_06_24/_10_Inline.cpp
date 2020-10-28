#include<iostream>

using namespace std;

inline int Add(int a, int b)
{
	return a + b;
}

void main()
{
	int result = 0, i = 0;
	for (i = 0; i < 1000000; i++)
		result = Add(result, i++);
	cout << result << endl;
}