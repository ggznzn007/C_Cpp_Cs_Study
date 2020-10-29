#pragma once
#include <combaseapi.h>
#include <iostream>

using namespace std;

#define BASIC_SLEEP_TIME	50
#define BASIC_MULTIPLE_NUM	1

interface ICar
{
	string companyName;
	int score = 0;
	virtual void driver() = 0;
	virtual void accel() = 0;
	virtual void brake() = 0;
	virtual int getScore() = 0;
	virtual string getCompanyName() = 0;
};