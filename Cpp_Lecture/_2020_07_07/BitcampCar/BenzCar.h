#pragma once
#include "ICar.h"

#define B_BASIC_SCORE	4
#define B_DRIVER_SKILL	10
#define B_ACCEL_SKILL	9
#define B_BRAKE_SKILL	9

class BenzCar : public ICar
{
public:
	BenzCar(string companyName);
public:
	virtual void driver();
	virtual void accel();
	virtual void brake();
	virtual int getScore();
	virtual string getCompanyName();
};

