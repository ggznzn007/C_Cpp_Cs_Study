#pragma once
#include "StarUnit.h"
class Marine : public StarUnit
{
public:
	virtual void move();
	virtual void attack();
	virtual void die();
};

