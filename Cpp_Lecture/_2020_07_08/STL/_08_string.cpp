#include <iostream>
using namespace std;

void main()
{
	string s0("I have money");
	string s1("You need a dream");
	string s2;

	s2 = s0.substr(0, 7); // index 0부터 7글자 추출
	s2.append(s1, 9, 7);	// index 9부터 7글자 추가
	s2.append(3, '!');
	s2 += "\n";

	cout << s2;
}