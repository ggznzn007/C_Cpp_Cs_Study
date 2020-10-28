#include <iostream>

using namespace std;

struct Student
{
	char name[20];
	int age;
	
};

void inputStudent(Student& st)
{
	cout << "input your name : ";
	cin >> st.name;
	cout << "input your age : ";
	cin >> st.age;
}

void showStudent(Student& st)
{
	cout << "name : "<<st.name<< endl;
	cout << "age : "<<st.age<< endl;	
}

void main()
{
	Student st;
	inputStudent(st);
	showStudent(st);
}