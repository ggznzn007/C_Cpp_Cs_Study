#pragma once
#include "Pizza.h"
class WrinklePizza : public Pizza
{
public:
	WrinklePizza();

	virtual void showWelcom();
	virtual void cooking();
	virtual void delivery();
};