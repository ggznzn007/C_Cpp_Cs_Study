#pragma once
#include "Gun.h"
#include <iostream>

using namespace std;

class Police : public Gun
{
private:
	string hat="°æÂû¸ğÀÚ";
	string suit="°æÂûº¹";
public:
	void wearSuit() {
		cout << hat << "À» Âø¿ëÇÏ´Ù" << endl;
		cout << suit << "À» Âø¿ëÇÏ´Ù" << endl;
	}
};

