#include <iostream>

#define NAME_LEN	20

using namespace std;

class Student
{
private:
	char* name;

public:
	Student()
	{
		name = new char[NAME_LEN]();
	}
	/*
	Student(Student stParam)
	{
		name = new char[NAME_LEN]();
		memcpy(name, st.name, NAME_LEN);
	}
	*/
	// 복사생성자의 매개변수는 반드시 reference
	// 여야 한다
	Student(const Student& st)
	{
		name = new char[NAME_LEN]();
		memcpy(name, st.name, NAME_LEN);
	}
	~Student()
	{
		delete[] name;
	}
public:
	void setName(const char* _name)
	{
		strncpy_s(name, NAME_LEN, _name, strlen(_name) + 1);
	}
	void showName()
	{
		cout << "이름: " << name << endl;
	}
};

void main()
{
	Student st;// 매개변수 없는 생성자 호출
	st.setName("홍길동");
	st.showName();

	Student st1 = st;// Student st1(st);
	st1.showName();

	st1.setName("임꺽정");
	st.showName();
	st1.showName();
}