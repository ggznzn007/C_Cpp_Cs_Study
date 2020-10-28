#include "Gun.h"
#include <iostream>

using namespace std;

void Gun::bbang()
{
	if (this->bullet == 0) {
		cout << "Whoops!" << endl;
		return;
	}
	this->bullet--;
	cout << "BBANG !!" << endl;
}
