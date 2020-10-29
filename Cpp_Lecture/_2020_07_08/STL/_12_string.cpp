#include <iostream>
using namespace std;

void main()
{
	string str("Hi! How are you?");

	cout << "str length: " << str.length() << endl;
	printf("%s\n", str.c_str());

	str.clear();
	if (str.empty()) {
		cout << "Now string is empty." << endl;
		cout << "str length: " << str.length() << endl;
	}
}