#pragma once
#include "Store.h"

class Pizza : public Store {
public:
	Pizza();
	
	virtual void choiceMenu();
	void pizzaSize();
	void extraTopping();
	
};

