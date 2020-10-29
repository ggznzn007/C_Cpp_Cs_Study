/* Container마다 특징이 다르므로 내부 구현 방식이
차이가 있다.
그런데 사용자가 라이브러리를 쓸 때 각각 다른 방식으로
쓰게 한다면 번거롭게 된다.
그래서 동일한 방식으로 모든 Container를 접근할 수
있도록 했는데 이것을 interator(반복자)라고 한다

즉, 이것은 Container를 접근하는 소스의 표준화가 
가능해지므로 Container마다 수정할 필요가 없어진다
*/
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

	// 반복자 사용
	// 위치정보(인덱스)
	// 연산자 오버로딩을 사용해서 *를 흉내냄
	// dArray의 시작위치를 가리킴
	vector<int>::iterator it = dArray.begin();
	while (it != dArray.end())
		cout << *it++ << ", ";
	cout << endl;

	for (vector<int>::iterator it = dArray.begin();
		it != dArray.end(); it++)
		cout << *it << ", ";
	cout << endl;

	// 역순으로 접근
	vector<int>::reverse_iterator rit = 
						dArray.rbegin();
	while (rit != dArray.rend())
		cout << *rit++ << ", ";
	cout << endl;
}