#pragma once
#include "StarUnit.h"
class Hydra : public StarUnit
{
public:
	virtual void move();
	virtual void attack();
	virtual void die();
};

