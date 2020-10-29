/* STL(Standard Template Library)
; Template을 기반으로 만들어진 
자료구조와 알고리즘 라이브러리
C++ 표준

Data Structure == Container == Collection
*/
/*
list 자료구조 == Sequence Container
1)Array : 물리적으로 순차적
		시작 ~ 끝까지 검색
2)Linked List : 논리적으로 순차적
3)Deque : Array/Linked List로 만든다
		양방향 증가

*/
// vector은 동적 배열
#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<int> dArray(6);
	for (int i = 0; i < 6; i++)
		dArray[i] = i * 2;
	dArray.push_back(7);
	dArray.push_back(8);

	for (int i = 0; i < dArray.size(); i++)
		cout << dArray[i] << ", ";
	cout << endl;
}