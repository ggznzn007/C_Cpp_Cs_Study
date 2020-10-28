#include <iostream>

using namespace std;

class Student
{
private:
	char name[20];
	int age;

public:
	void inputStudent()
	{
		cout << "이름 입력: ";
		cin >> name;
		cout << "나이 입력: ";
		cin >> age;
	}
	void showStudent()
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}
};


void main()
{
	Student st;
	st.inputStudent();
	st.showStudent();
}