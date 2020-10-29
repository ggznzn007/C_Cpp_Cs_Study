#include <iostream>
using namespace std;

// 문자열 검색과 치환
void main()
{
	string str("M red ballon matches my red hat.");
	string red("red");
	string blue("blue");

	size_t found = str.find(red);
	// 찾았다면 반복해라
	while (found != string::npos) {
		str.replace(found, red.length(), blue);
		found = str.find(red, found + 1);
	}
	cout << str << endl;
}