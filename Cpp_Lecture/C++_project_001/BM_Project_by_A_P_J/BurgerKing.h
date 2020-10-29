#pragma once
#include "Burger.h"
class BurgerKing : public Burger {
public:
	BurgerKing();
	
	virtual void showWelcom();
	virtual void cooking();
	virtual void delivery();
};