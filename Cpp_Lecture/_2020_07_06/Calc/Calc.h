#pragma once

#include <iostream>
using namespace std;
class Calc
{
protected:
	int a, b;
public:
	void setValue(int x, int y);
	virtual int calculate() = 0;
};