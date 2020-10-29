#include <iostream>
#include <map>
using namespace std;

void main()
{
	/* string = key
	   int = value
	   key를 사용해서 value를 검색한다
	*/
	map<string, int> monthDayMap;

	pair<string, int> monthDays[] = {
		make_pair("JAN", 31), make_pair("FEB", 28),
		make_pair("MAR", 31), make_pair("APR", 30),
		make_pair("MAY", 31), make_pair("JUN", 30),
		make_pair("JUL", 31), make_pair("AUG", 31),
		make_pair("SEP", 30), make_pair("OCT", 31),
		make_pair("NOV", 30), make_pair("DEC", 31)
	};
	int arrLen = sizeof(monthDays) / sizeof(monthDays[0]);
	for (int i = 0; i < arrLen; i++)
		monthDayMap.insert(monthDays[i]);

	while (true) {
		cout << "달 이름을 영어 대문자로 3글자 입력 >> ";
		string input;
		cin >> input;

		map<string, int>::iterator it = monthDayMap.find(input);
		if (it == monthDayMap.end())
			cout << "그런 달은 없습니다" << endl;
		else
			cout << (*it).first << "는 " << (*it).second
			<< "일까지 있습니다" << endl;
		cout << endl << endl;
		getchar(); getchar();
		system("cls");
	}
}


