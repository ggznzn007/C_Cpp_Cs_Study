#pragma once
#include "Chicken.h"

class BBQ : public Chicken {
	
public:
	BBQ();
	virtual void showWelcom();
	virtual void cooking();
	virtual void delivery();
};