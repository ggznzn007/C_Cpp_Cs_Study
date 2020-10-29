#pragma once
#include "StarUnit.h"

class Scv : public StarUnit
{
public:
	virtual void move();
	virtual void attack();
	virtual void die();
};

