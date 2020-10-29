#pragma once
#include "Store.h"
class Chicken : public Store {
public:
	Chicken();

	virtual void choiceMenu();
	void choiceFillets();
};

