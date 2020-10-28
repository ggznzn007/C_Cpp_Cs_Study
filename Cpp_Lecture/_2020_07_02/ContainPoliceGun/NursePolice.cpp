#include "NursePolice.h"

int cnt = 0;
void NursePolice::measureTemperature()
{
	if (this->thermometer == 0)
	{
		cnt++;
		if (cnt > 3)
			cout << "get Out!!!" << endl;
		else
			cout << "No!" << endl;

		return;
	}
	this->thermometer--;
	cout << "36.5 กษ" << endl;
}
