#pragma once
#include "StarUnit.h"
class FireSoldier : public StarUnit
{
public:
	virtual void move();
	virtual void attack();
	virtual void die();
};

