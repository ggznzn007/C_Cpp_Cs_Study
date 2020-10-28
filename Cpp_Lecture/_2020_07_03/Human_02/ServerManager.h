#pragma once
#include "ComputerEngineer.h"
#include <iostream>
using namespace std;

class ServerManager : public ComputerEngineer
{
protected:
	int nManagedServer;

public:
	ServerManager(string name="서버관리자", int age=0,
		int nComputer=0, int nManagedServer=0);
	~ServerManager();

public:
	void work();	// 수정 함수
	void info();	// 확장 함수
};

