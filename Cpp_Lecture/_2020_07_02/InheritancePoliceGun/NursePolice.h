#pragma once
#include "Police.h"
class NursePolice : public Police
{
private:
	int thermometer = 5;
public:
	void measureTemperature();
};

