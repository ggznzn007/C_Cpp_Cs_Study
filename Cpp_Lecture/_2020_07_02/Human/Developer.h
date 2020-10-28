#pragma once
#include "ComputerEngineer.h"
class Developer : public ComputerEngineer
{
protected:
	int nLanguage;

public:
	Developer(string name="개발자", int age=0,
		int nComputer=0, int nLanguage=0);
	~Developer();

public:
	void neverEndingStudy(); // 새로 추가 함수
	void sleep();			 // 수정 함수
	void overTime();		 // 확장 함수
	void info();			 // 확장 함수
};

