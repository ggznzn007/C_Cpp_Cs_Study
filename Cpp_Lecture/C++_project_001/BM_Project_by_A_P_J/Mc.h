#pragma once
#include "Burger.h"

class Mc : public Burger {
public:
	Mc();
	
	virtual void showWelcom();
	virtual void cooking();
	virtual void delivery();
};

