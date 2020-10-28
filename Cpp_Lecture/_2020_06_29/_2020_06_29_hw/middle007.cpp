//7. 이름, 주소, 나이를 입력받아 출력하세요.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	char name[30];
	char addr[100];
	int age;

	cout << "이름을 입력해주세요: "<<endl;
	cin.getline(name, 30);//enter까지 문자열 읽기
	cout << "주소를 입력해주세요: " << endl;
	cin.getline(addr, 100);//enter까지 문자열 읽기
	cout << "나이를 입력해주세요: " << endl;
	cin >> age;

	cout << name << ", " << addr << ", " << age << "세" << endl;
	return 0;
}