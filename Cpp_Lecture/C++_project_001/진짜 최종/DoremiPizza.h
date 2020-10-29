#pragma once
#include "Pizza.h"

class DoremiPizza : public Pizza
{
public:
	DoremiPizza();
	
	virtual void showWelcom();
	virtual void cooking();
	virtual void delivery();
};

