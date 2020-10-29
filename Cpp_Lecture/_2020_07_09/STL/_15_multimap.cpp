#include <iostream>
#include <map>
using namespace std;

// 길어서 별명을 부여하겠다.
typedef multimap<int, string>::iterator yearMovieIt;

void main()
{
	multimap<int, string> yearMovieMap;
	pair<int, string> yearMovie[] = {
		make_pair(1998, "타이타닉"),
		make_pair(2008, "슬럼독 밀리어네어"),
		make_pair(1997, "인생은 아름다워"),
		make_pair(2003, "올드보이"),
		make_pair(1994, "라이온킹"),
		make_pair(1999, "매트릭스"),
		make_pair(1994, "포레스트 검프")
	};
	int arrLen = sizeof(yearMovie) / sizeof(yearMovie[0]);
	for (int i = 0; i < arrLen; i++)
		yearMovieMap.insert(yearMovie[i]);

	// 검색
	while (true) {
		int input = 0;
		cout << "영화 년도를 입력 >> ";
		cin >> input;

		pair<yearMovieIt, yearMovieIt> result =
			yearMovieMap.equal_range(input);
		if (result.first == result.second)
			cout << "그 해 등록된 명작 영화가 없습니다" << endl;
		else {
			for (yearMovieIt it = result.first;
				it != result.second;
				it++) {
				cout << (*it).second << endl;
			}
		}
	}
}