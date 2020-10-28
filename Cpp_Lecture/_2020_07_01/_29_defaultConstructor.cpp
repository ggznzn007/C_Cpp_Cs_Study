#include <iostream>

using namespace std;

class Student
{
private:
	// 멤버변수(필드)
	char name[20];

public:
	// 멤버함수(메서드)
	void setName(const char* _name)
	{
		strncpy(name, _name, strlen(_name));
	}
	void showName()
	{
		cout << "이름: " << name << endl;
	}
};

void main()
{
	/* 별도로 생성자/소멸자를 구현하지 않으면
	  컴파일러가 컴파일시 default생성자/소멸자를
	  추가해서 넣는다.
	  다만 아무일도 하지 않는다.
	*/
	Student st;	// 생성자 호출
}	// 소멸자 호출