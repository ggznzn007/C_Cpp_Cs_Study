#include <iostream>
#include <queue>

using namespace std;

void main()
{
	queue<int> iQueue;

	iQueue.push(10);
	iQueue.push(20);
	iQueue.push(30);

	while (!iQueue.empty())
	{
		cout << iQueue.front() << ", ";
		iQueue.pop();
	}
}