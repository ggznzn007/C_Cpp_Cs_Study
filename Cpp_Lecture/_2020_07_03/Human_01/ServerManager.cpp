#include "ServerManager.h"

ServerManager::ServerManager(string name, int age,
	int nComputer, int nManagedServer)
	:ComputerEngineer(name, age, nComputer)
{
	this->nManagedServer = nManagedServer;
	cout << "ServerManager 생성자 호출" << endl;
}
ServerManager::~ServerManager()
{
	cout << "ServerManager 소멸자 호출" << endl;
}

void ServerManager::work()
{
	cout << this->name << "은 종종 불시에 일하기" << endl;
}
void ServerManager::info()
{
	ComputerEngineer::info();
	cout << this->name << "이 관리하는 컴퓨터 수가"
		<< this->nManagedServer << "대이다" << endl;
}
