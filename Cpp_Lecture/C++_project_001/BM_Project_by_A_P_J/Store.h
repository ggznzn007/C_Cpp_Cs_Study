#pragma once
#include <iostream>
#include <combaseapi.h>
#include <string>
#include <Windows.h>
#include "turboc.h"

#define TX	37
#define TY	5

using namespace std;

class  Store {
	
protected:
	string storeName;
	string kindOf;
	int totalPrice = 0;
	string address;
	struct Menu {
		string foodName;
		int foodPrice = 0;
		int numOfFood = 0;
	};
	Menu menu[10];
	
public:
	string showStoreName();
	string kindOfStore();
	void drawMap();

	virtual void showWelcom() = 0;
	
	void showMenu();
	virtual void choiceMenu();
	
	void checkAddress();

	virtual void cooking() = 0;
	virtual void delivery();
	void setcolor(unsigned short text, unsigned short back);
	
};