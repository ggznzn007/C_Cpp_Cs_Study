#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("123456789");
	string s2 = s1.substr(3, 4);//3번째이후부터 4글자 추출

	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;
}

