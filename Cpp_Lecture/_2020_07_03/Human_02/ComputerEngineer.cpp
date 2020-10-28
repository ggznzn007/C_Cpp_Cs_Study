#include "ComputerEngineer.h"

ComputerEngineer::ComputerEngineer(string name, int age,
									int nComputer)
	:Human(name, age)
{
	this->nComputer = nComputer;
	cout << "ConputerEngineer 생성자 호출" << endl;
}

ComputerEngineer::~ComputerEngineer()
{
	cout << "ComputerEngineer 소멸자 호출" << endl;
}

void ComputerEngineer::overTime()
{
	cout << this->name << "은 야근을 가끔 한다" << endl;
}
void ComputerEngineer::info()
{
	Human::info();
	cout << this->name << "은 컴퓨터를 " <<
		this->nComputer << "대 가지고 있다" << endl;
}