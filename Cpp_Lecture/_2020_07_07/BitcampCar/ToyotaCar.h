#pragma once
#include "ICar.h"

#define T_BASIC_SCORE	4
#define T_DRIVER_SKILL	9
#define T_ACCEL_SKILL	7
#define T_BRAKE_SKILL	7

class ToyotaCar : public ICar
{
public:
	ToyotaCar(string companyName);
public:
	virtual void driver();
	virtual void accel();
	virtual void brake();
	virtual int getScore();
	virtual string getCompanyName();
};


