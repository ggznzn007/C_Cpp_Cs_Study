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

	string month[] = {
		"JAN", "FEB", "MAR", "APR",
		"MAY", "JUN", "JUL", "AUG",
		"SEP", "OCT", "NOV", "DEC"
	};
	int days[] = {
		31, 28, 31, 30, 31, 30, 
		31, 31, 30, 31, 30, 31
	};
	int arrLen = sizeof(month) / sizeof(month[0]);
	for (int i = 0; i < arrLen; i++)
		monthDayMap.insert(make_pair(month[i], days[i]));

	while (true) {
		cout << "달 이름을 영어 대문자로 3글자 입력 >> ";
		string input;
		cin >> input;

		map<string, int>::iterator it = monthDayMap.find(input);
		if (it == monthDayMap.end())
			cout << "그런 달은 없습니다" << endl;
		else
			cout << (*it).first << "는 " <<  (*it).second
				<< "일까지 있습니다" << endl;
		cout << endl << endl;
		getchar(); getchar();
		system("cls");
	}
}




