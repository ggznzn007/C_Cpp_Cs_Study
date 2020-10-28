#include <iostream>

using namespace std;

class Student
{
private:
	char name[20];

public:
	void setName(const char* _name)
	{
		strncpy_s(name,sizeof(name), _name, strlen(_name));
	}
	void showName()
	{
		cout << "이름: " << name << endl;
	}
};

void main()
{
	Student st;// default 생성자 호출 
	st.setName("홍길동");
	st.showName();

	// 복사생성자 호출 
	// 멤버변수간의 복사가 이루어진다
	Student st1 = st;//Student st1(st);
	st1.showName();
}

//객체변수가 생성되면 제일 먼저 호출하는 함수 == 생성자
//객체변수가 생성되면 소멸 직전에 호출하는 함수 == 소멸자