#pragma once
#include "ICar.h"

#define H_BASIC_SCORE	5
#define H_DRIVER_SKILL	10
#define H_ACCEL_SKILL	8
#define H_BRAKE_SKILL	9

class HyundaiCar : public ICar
{ 
public:
	HyundaiCar(string companyName);
public:
	virtual void driver();
	virtual void accel();
	virtual void brake();
	virtual int getScore();
	virtual string getCompanyName();
};

