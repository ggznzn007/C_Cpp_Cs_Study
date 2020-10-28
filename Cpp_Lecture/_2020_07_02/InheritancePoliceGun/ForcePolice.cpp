#include "ForcePolice.h"

void ForcePolice::snap()
{
	if (this->handCuffs == 0) {
		cout << "Oh" << endl;
		return;
	}
	this->handCuffs--;
	cout << "SNAP!" << endl;
}

void ForcePolice::fireGun()
{
	bbang();
}
