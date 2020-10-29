#pragma once
#include "Store.h"

class Mc : public Store {
public:
	Mc();
	
	virtual void showWelcom();
	virtual void cooking();
	virtual void delivery();
};

