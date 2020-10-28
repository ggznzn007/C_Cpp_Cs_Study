#pragma once
#include "Police.h"
#include "Gun.h"

class ForcePolice : public Police
{
private:
	int handCuffs = 3;
	Gun gun;	// 포함관계

public:
	void snap();
	void fireGun();
};

