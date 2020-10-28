#include "Developer.h"

Developer::Developer(string name, int age,
	int nComputer, int nLanguage)
	:ComputerEngineer(name,age, nComputer)
{
	this->nLanguage = nLanguage;
	cout << "Developer 생성자 호출" << endl;
}
Developer::~Developer()
{
	cout << "Developer 소멸자 호출" << endl;
}

void Developer::neverEndingStudy()
{
	cout << this->name << "은 늘 공부를 한다" << endl;
}
void Developer::sleep()
{
	cout << this->name << "은 늦게 잘 때가 있다" << endl;
}
void Developer::overTime()
{
	ComputerEngineer::overTime();
	cout << "다음에 휴식을 취하자" << endl;
}
void Developer::info()
{
	ComputerEngineer::info();
	cout << this->name << "은 사용하는 언어가 " 
		<< this->nLanguage << "가지이다" << endl;
}