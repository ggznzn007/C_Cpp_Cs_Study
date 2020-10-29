#pragma once
#include "Store.h"
#include "BBQ.h"
#include "Mc.h"
#include "WrinklePizza.h"
#include "DoremiPizza.h"

class AppManager {

	char kindOf[4][20] = {
		"Chicken",
		"Pizza",
		"패스트푸드",
		"중식"
	};
	Store* st[4] = {
			new BBQ(),
			new Mc(),
			new WrinklePizza(),
			new DoremiPizza()
	};
public:
	AppManager();
	~AppManager();
public:
	void getKindOfMenu();
	int getMenu(int kindNum);
};

