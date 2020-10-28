#pragma once
#include "Human.h"
class ComputerEngineer : public Human
{
protected:
	int nComputer;

public:
	ComputerEngineer(string name="컴퓨터 엔지니어", 
					int age=0, 
					int nComputer=0);
	~ComputerEngineer();

public:
	void overTime();	// 새로 추가한 함수
	void info();		// 확장하는 함수
};

