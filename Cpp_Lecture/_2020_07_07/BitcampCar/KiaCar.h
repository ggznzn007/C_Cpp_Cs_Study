#pragma once
#include "ICar.h"

#define K_BASIC_SCORE	5
#define K_DRIVER_SKILL	9
#define K_ACCEL_SKILL	9
#define K_BRAKE_SKILL	9

class KiaCar : public ICar
{
public:
	KiaCar(string companyName);
public:
	virtual void driver();
	virtual void accel();
	virtual void brake();
	virtual int getScore();
	virtual string getCompanyName();
};

