#include <iostream>
using namespace std;

void main()
{
	string str("Hi! How are you?");
	string punctuation("!?.,");

	// punctuation 글자를 찾아서 삭제
	/*
	size_t found = str.find_first_of(punctuation);
	while (found != string::npos) {
		str.erase(found, 1);
		found = str.find_first_of(punctuation, found);
	}
	cout << str << endl;
	*/

	// punctuation 글자를 찾아서 삽입
	size_t found = str.find_first_of(punctuation);
	while (found != string::npos) {
		// 찾은 문자를 2번 삽입
		str.insert(found, 2, str[found]);
		found = str.find_first_of(punctuation, found+3);
	}
	cout << str << endl;
}