/*
deque(덱, 디큐)
양방향으로 데이터를 추가할 수 있는 컨테이너
*/
#include <iostream>
#include <deque>
using namespace std;

void main()
{
	const int DATA_NUM = 6;
	deque<int> dEnded(DATA_NUM);
	for (int i = 0; i < DATA_NUM; i++)
		dEnded[i] = i * 2;
	dEnded.push_back(7);
	dEnded.push_front(8);

	for (int i = 0; i < dEnded.size(); i++)
		cout << dEnded[i] << ", ";
	cout << endl;
}