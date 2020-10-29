#pragma once
#include "Store.h"
#include "BBQ.h"
#include "BitChina.h"
#include "BurgerKing.h"
#include "Mc.h"
#include "WrinklePizza.h"
#include "DoremiPizza.h"
#include "NeNe.h"
#include "WeWorkChina.h"

class AppManager {

	char kindOf[4][20] = {
		"Chicken",
		"Pizza",
		"Bugger",
		"Chinese"
	};
	Store* st[8] = {
			new BBQ(),
			new NeNe(),
			new WrinklePizza(),
			new DoremiPizza(),
			new Mc(),
			new BurgerKing(),
			new BitChina(),
			new WeWorkChina()
	};
public:
	AppManager();
	~AppManager();
public:
	void getKindOfMenu();
	int getMenu(int kindNum);
};
