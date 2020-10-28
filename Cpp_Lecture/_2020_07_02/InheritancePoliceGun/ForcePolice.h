#pragma once
#include "Police.h"
class ForcePolice : public Police
{
private:
	int handCuffs = 3;

public:
	void snap();
	void fireGun();
};

