#include <iostream>

using namespace std;

void showInfo(const char* nation, const char* name,
	int exPhoneNum, const char* phone)
{
	cout << "국적 : " << nation << endl;
	cout << "이름 : " << name << endl;
	cout << "국번 : " << exPhoneNum << endl;
	cout << "전화 : " << phone << endl;
}
void main()
{
	showInfo("대한민국", "홍길동", 82, "010-1111-2222");
}